#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settingsdialog.h"
#include <QPixmap>
#include <QPainter>
#include <cfloat>
#include <QMessageBox>
#include <QFileDialog>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //reboot app
    actionReboot = new QAction( this );
    connect(ui->buttonReset,SIGNAL(clicked()),this, SLOT(slotReboot()));

    this->statusBar()->setSizeGripEnabled(false);
    settings = Settings::getInstance();

    //dodajem sliku:
    image.load(QDir::currentPath()+"/image/ml.bmp"); //ovo nam je po defaultu
    ui->labelSource->setPixmap(QPixmap::fromImage(image));

    error = DBL_MAX;
    currentImage = new QImage( settings->widthHeight, settings->widthHeight, QImage::Format_ARGB32 );

    tmp = new Drawing;

    //autosave
    if(settings->autosave_test==1) ui->actionAutosave->setChecked(true);
    else ui->actionAutosave->setChecked(false);

    //connect
    actionOpen = ui->actionOpen;
    actionSave = ui->actionSave;
    connect(actionOpen,SIGNAL(triggered()),this,SLOT(open()));
    connect(actionSave,SIGNAL(triggered()),this,SLOT(save()));

    settings->set_default();
    //settings box:
    ui->labelNumPolygons->setText(QString::number(settings->numberOfPolygons));
    ui->labelNumPoints->setText(QString::number(settings->numberOfPolygonPoints));
    ui->labelAlgorithm->setText("Genetic Algorithm");
    ui->labelPopsize->setText(QString::number(settings->populationsize));

    //timer
    timer = new QTimer(this);
    stoperica = new QTimer(this);
    time = new QTime(0,0,0,0);

    timer->start(1);
    stoperica->start(1000);


}

//destruktor
MainWindow::~MainWindow()
{
    if( first!= 1)
    {
       delete[] painterPoints;
       for(int i=0; i<settings->populationsize; i++)
            delete population[i];
       delete[] population;

       if( settings->algorithmNumber == 2)
       {
         for(int i=0; i<settings->populationsize-2; i++)
            delete children[i];
         delete[] children;
       }
    }

    delete parent1;
    delete parent2;
    delete child1;
    delete child2;
    delete timer;
    delete stoperica;
    delete time;
    delete currentImage;
    delete ui;
}

void MainWindow::setPoints(int i, Drawing *drawing){
    for(int j = 0; j < settings->numberOfPolygonPoints; ++j)
    {
        painterPoints[j].setX(drawing->getPolygon(i)->get_point(j).getCoordinate(0));
        painterPoints[j].setY(drawing->getPolygon(i)->get_point(j).getCoordinate(1));
    }
}

void MainWindow::draw(QImage *image, Drawing *drawing){

    QPainter painter(image);
    for(int i = 0; i < settings->numberOfPolygons; ++i)
    {
        setPoints(i, drawing);
        painter.setRenderHint( QPainter::Antialiasing);
        painter.setPen( Qt::NoPen );
        painter.setBrush(QBrush(QColor(drawing->getPolygon(i)->getBrush().get_color(0),drawing->getPolygon(i)->getBrush().get_color(1),
                                       drawing->getPolygon(i)->getBrush().get_color(2), 128)));
        painter.drawPolygon(painterPoints, settings->numberOfPolygonPoints);
    }
}

void MainWindow::sortDrawings()
{
    //bubble sort, napraviti bolji sort
    for(int i = 0; i < settings->populationsize; ++i)
    {
        for(int j = i + 1; j < settings->populationsize; ++j)
        {
            if(population[j]->getFitness() < population[i]->getFitness())
            {
                tmp = population[i];
                population[i] = population[j];
                population[j] = tmp;
            }
        }

    }
}

unsigned int MainWindow::getPixelFitness(QColor colorCurrent, QColor colorSource)
{
        int red = std::abs(colorCurrent.red() - colorSource.red());
        int green = std::abs(colorCurrent.green() - colorSource.green());
        int blue = std::abs(colorCurrent.blue() - colorSource.blue());

        return red + green + blue;
}

unsigned int MainWindow::getFitness(QImage *currentImage){

    unsigned int error = 0;

    for(int i = 0; i < settings->widthHeight; ++i)
        for(int j = 0; j < settings->widthHeight; ++j){
            QRgb tmpcolorSource = image.pixel(QPoint(i,j));
            QRgb tmpcolorCurrent = currentImage->pixel(QPoint(i,j));
            QColor colorSource(tmpcolorSource);
            QColor colorCurrent(tmpcolorCurrent);
            unsigned int pixelError = getPixelFitness(colorCurrent, colorSource);
            error += pixelError;
        }
    return error;
}

void MainWindow::setStop(){
    if(this->willstop==false) this->willstop=true;
    else this->willstop=false;
}

void MainWindow::setStop(bool value){
    this->willstop = value;
}

bool MainWindow::getStop(){
    return this->willstop;
}

void MainWindow::on_buttonStart_clicked()
{
    if( first == 1 && settings->algorithmNumber == 1)
    {
        connect(timer,SIGNAL(timeout()),this,SLOT(RogerAlsing()));
        connect(stoperica,SIGNAL(timeout()),this,SLOT(algorithm_time()));

        population = new Drawing*[settings->populationsize];
        for(int i = 0; i < settings->populationsize; ++i)
            population[i] = new Drawing;

        population[0]->initialize();
        population[1]->clone(population[0]);

        painterPoints = new QPointF[settings->numberOfPolygonPoints];
    }
    else if( first == 1 && settings->algorithmNumber == 2)  // Genetic Algorithm
    {
        connect(stoperica,SIGNAL(timeout()),this,SLOT(algorithm_time()));
        connect(timer,SIGNAL(timeout()),this,SLOT(GeneticAlgorithm()));

        painterPoints = new QPointF[settings->numberOfPolygonPoints];
        parent1 = new Drawing;
        parent2 = new Drawing;
        child1 = new Drawing;
        child2 = new Drawing;
        population = new Drawing*[settings->populationsize];
        children = new Drawing*[settings->populationsize-2];

        for(int i = 0; i < settings->populationsize; ++i)
        {
            population[i] = new Drawing;
            population[i]->initialize();
            currentImage->fill(Qt::black);
            draw(currentImage, population[i]);
            unsigned int newError = getFitness(currentImage);
            population[i]->setFitness(newError);
        }

        for(int i = 0; i < settings->populationsize-2; ++i)
        {
            children[i] = new Drawing;
            children[i]->initialize();
        }
        sortDrawings();
    }
    else if( first == 1 && settings->algorithmNumber == 3 )    // Bees Algorithm
    {
        connect(timer, SIGNAL(timeout()),this,SLOT(beesAlgorithm()));
        connect(stoperica,SIGNAL(timeout()),this, SLOT(algorithm_time()));

        population = new Drawing*[settings->populationsize];
        for(int i = 0; i < settings->populationsize; ++i)
            population[i] = new Drawing;

        painterPoints = new QPointF[settings->numberOfPolygonPoints];

        for(int i = 0; i < settings->populationsize; ++i)
        {
            population[i]->initialize();
            currentImage->fill(Qt::black);
            draw(currentImage, population[i]);
            unsigned int newError = getFitness(currentImage);
            population[i]->setFitness(newError);
        }
    }

   //nakon prvog prolaza, onemoguci settings
   first = 0;
   ui->buttonDefault->setEnabled(false);
   ui->buttonSet->setEnabled(false);
   ui->actionOpen->setEnabled(false);
   ui->buttonReset->setEnabled(true);

   this->setStop(); // pauza ili nastavi
      if( this->getStop() == false ){
        ui->buttonStart->setText(tr("Pause"));
        timer->start(1); //ovo nam sluzi za nastavi...
        stoperica->start(1000);
      }
      else ui->buttonStart->setText(tr("Resume"));
}

void MainWindow::open()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QDir::currentPath()+"/image" ,tr("Images (*.png *.xpm *.jpg *.bmp)"));
        if (!fileName.isEmpty()) {
             this->image.load(fileName);

             if (image.isNull()) {
                 QMessageBox::information(this, tr("Picture"),
                                          tr("Cannot load %1.").arg(fileName));
                 return;
             }
          image = image.scaled(settings->widthHeight,settings->widthHeight,Qt::IgnoreAspectRatio);
          ui->labelSource->setPixmap(QPixmap::fromImage(this->image));
        }
}

void MainWindow::autosave()
{
    QString strNumPoly = QString::number(settings->numberOfPolygons);
    QString strNumPolyPoint = QString::number(settings->numberOfPolygonPoints);
    //provjera za vrstu algoritma
    QString alg;
    if(settings->algorithmNumber==1)  alg = "roger";
    if(settings->algorithmNumber==2)  alg = "genetic";
    if(settings->algorithmNumber==3)  alg = "bees";
    QString fileName = QDir::currentPath()+"/autosave/"+alg+"_"+strNumPoly+"_"+strNumPolyPoint+
            "_"+QString::number(selected)+"_"+QString::number(entry)+
            "_"+QString::number(total)+"_"+ui->labelNumFitness->text()+"_"+ui->labelPopsize->text()+"_"
            +time->toString("h_mm_ss ")+tr(".png");
    if (!fileName.isEmpty()){
        QFile file(fileName);
         if(file.open(QIODevice::WriteOnly))
         {
            if(settings->algorithmNumber!=1)
            {
                currentImage->fill(Qt::black);
                draw(currentImage, population[0]);
                this->currentImage->save(&file,"PNG");
            }
            else
                this->currentImage->save(&file,"PNG"); //roger
         }
    }
}

void MainWindow::save()
{
    this->setStop(true);
    ui->buttonStart->setText("Resume");

    QString fileName = QFileDialog::getSaveFileName(this,tr("Save File"),QDir::currentPath()+"/image",tr("PNG(*.png)"));
    if (!fileName.isEmpty()){
        QFile file(fileName);
         if(file.open(QIODevice::WriteOnly))
         {
             if(settings->algorithmNumber!=1)
             {
                 currentImage->fill(Qt::black);
                 draw(currentImage, population[0]);
                 this->currentImage->save(&file,"PNG");
             }
             else
                 this->currentImage->save(&file,"PNG"); //roger alsing
         }
         this->saved = 1;
    }
}

void MainWindow::on_buttonSet_clicked()
{
       on_buttonDefault_clicked();
       mydialog = new settingsdialog(this);
       connect(mydialog,SIGNAL(set()),this,SLOT(update_main()));
       mydialog->show();
}

void MainWindow::on_buttonDefault_clicked()
{
    settings->set_default(); // default settings
    ui->labelNumPolygons->setText(QString::number(settings->numberOfPolygons));
    ui->labelNumPoints->setText(QString::number(settings->numberOfPolygonPoints));
    ui->labelPopsize->setText(QString::number(settings->populationsize));
    ui->labelAlgorithm->setText("Genetic Algorithm");
}

void MainWindow::algorithm_time()
{
    if(this->getStop()) this->stoperica->stop();

    *time = time->addSecs(1);
    ui->labelTime->setText(time->toString("h:mm:ss "));
    this->saved = 0;
    if(((time->second()+time->minute()*60+time->hour()*60*60)%settings->autosave_seconds== 0) && settings->autosave_test==1){ autosave(); }
}

void MainWindow::update_main()
{
   ui->labelNumPolygons->setText(QString::number(settings->numberOfPolygons));
   ui->labelNumPoints->setText(QString::number(settings->numberOfPolygonPoints));
   ui->labelPopsize->setText(QString::number(settings->populationsize));
   if(settings->algorithmNumber==1) ui->labelAlgorithm->setText("Roger Alsing");
   if(settings->algorithmNumber==2) ui->labelAlgorithm->setText("Genetic Algorithm");
   if(settings->algorithmNumber==3) ui->labelAlgorithm->setText("Bees Algorithm");
}

void MainWindow::slotReboot()
{
    settings->autosave_test = 0;
    qApp->exit( MainWindow::EXIT_CODE_REBOOT );
}

void MainWindow::on_actionAutosave_triggered()
{
    if(ui->actionAutosave->isChecked()) settings->autosave_test = 1;
    else settings->autosave_test = 0;
}

void MainWindow::RogerAlsing()
{
  if(this->getStop()) this->timer->stop(); //provjeri treba li stati

  population[1]->mutate();

    if(population[1]->getIsMutated())
    {
        currentImage->fill( Qt::black );
        draw(currentImage, population[1]);

        unsigned int newError = getFitness(currentImage);
        if(newError < error){
            population[0]->clone(population[1]);
            error = newError;
            ui->labelGenerate->setPixmap(QPixmap::fromImage(*currentImage)); //na ovaj label crtamo
            selected++; //prihvacene generacije
            ui->labelNumFitness->setText(QString::number(newError)); //ispisuje fitness
        }
        else//discard
        {
            population[1]->clone(population[0]);
        }

        entry++; //toliko puta je stvorena generacija
        ui->labelNumSelected->setText(QString::number(selected));
        ui->labelNumNumber->setText(QString::number(entry));
    }
    total++;
    ui->labelNumCounter->setText(QString::number(total));
}

void MainWindow::GeneticAlgorithm(){
    if(this->getStop()) this->timer->stop();

    //nacrtamo najboljeg
    currentImage->fill( Qt::black );
    draw(currentImage, population[0]);
    ui->labelGenerate->setPixmap(QPixmap::fromImage(*currentImage));

    //ispisuje fitness i broji koliko je razlicitih slika prikazao
    unsigned int oldFitness = population[0]->getFitness();
    if(error != oldFitness)
    {
        ui->labelNumFitness->setText(QString::number(oldFitness));
        error = oldFitness;
        selected++;
        ui->labelNumSelected->setText(QString::number(selected));

    }

    //settings population size je djeljivo s 2
    for(int i = 0; i < (settings->populationsize-2) / 2; ++i)
    {
        //izabiremo roditelje
        int p1 = settings->generatorInt.get(0,settings->populationsize - 1);
        int p2 = settings->generatorInt.get(0,settings->populationsize - 1);
        while(1)
        {
            if(p1 != p2)
                break;
            else
                p2 = settings->generatorInt.get(0,settings->populationsize - 1);
        }

        //one point crossover
        int crossOverPoint1 = settings->generatorInt.get(2, settings->numberOfPolygons-3);
        child1->crossOver(population[p1], population[p2], crossOverPoint1);
        child2->crossOver(population[p2], population[p1], crossOverPoint1);

        //osiguravamo da ce svako dijete mutirati
        child1->mutate();
        while(!child1->getIsMutated())
            child1->mutate();
        child2->mutate();
        while(!child2->getIsMutated())
            child2->mutate();

        //racunamo fitness od djece
        currentImage->fill( Qt::black );
        draw(currentImage, child1);
        child1->setFitness(getFitness(currentImage));

        currentImage->fill( Qt::black );
        draw(currentImage, child2);
        child2->setFitness(getFitness(currentImage));

        children[2*i]->clone(child1);
        children[(2*i)+1]->clone(child2);

    }

    //stavljamo elite i nastalu djecu u populaciju
    int j = 0; int k = settings->num_elites;

    while(k < settings->populationsize)
    {
            population[k]->clone(children[j]);
            ++j;
            ++k;
    }

    //sortiramo populaciju
    sortDrawings();

    //ovdje je broj mutaciji isti kao i broj poziva jer smo to osigurali
    total++;
    entry++;
    ui->labelNumCounter->setText(QString::number(total));
    ui->labelNumNumber->setText(QString::number(entry));
}

void MainWindow::beesAlgorithm()
{
    if(this->getStop()) this->timer->stop();

    sortDrawings();

    //nacrtamo najboljeg
    currentImage->fill( Qt::black );
    draw(currentImage, population[0]);
    ui->labelGenerate->setPixmap(QPixmap::fromImage(*currentImage));

    //ispisuje fitness i broji koliko je razlicitih slika prikazao
    unsigned int oldFitness = population[0]->getFitness();
    if(error != oldFitness)
    {
        ui->labelNumFitness->setText(QString::number(oldFitness));
        error = oldFitness;
        selected++;
        ui->labelNumSelected->setText(QString::number(selected));
    }

    ui->labelNumFitness->setText(QString::number(population[0]->getFitness()));

    for(int i = 0; i < settings->populationsize; ++i)
    {
        if(i < (int)settings->populationsize*0.5)
        {
            settings->globalBrushMutationRate = 30000;
            settings->globalPointMutationRate = 30000;
            settings->globalPolygonMutationRate = 30000;
            settings->localBrushMutationRate = 1500;
            settings->localPointMutationRate = 1000;

            for(int j = 0; j < 2; ++j)
            {
                tmp->clone(population[i]);
                //osiguravamo da ce mutirati
                tmp->mutate();
                while(!tmp->getIsMutated())
                    tmp->mutate();

                currentImage->fill( Qt::black );
                draw(currentImage,tmp);
                unsigned int fitness = getFitness(currentImage);
                if(fitness < tmp->getFitness())
                {
                    tmp->setFitness(fitness);
                    population[i]->clone(tmp);
                }
            }
        }
        else
        {
            settings->globalBrushMutationRate = 1500;
            settings->globalPointMutationRate = 1000;
            settings->globalPolygonMutationRate = 1000;
            settings->localBrushMutationRate = 30000;
            settings->localPointMutationRate = 30000;

            tmp->clone(population[i]);

            //osiguravamo da ce mutirati
            tmp->mutate();
            while(!tmp->getIsMutated())
                tmp->mutate();

            currentImage->fill( Qt::black );
            draw(currentImage, tmp);
            unsigned int fitness = getFitness(currentImage);
            if(fitness < tmp->getFitness())
            {
                tmp->setFitness(fitness);
                population[i]->clone(tmp);
            }
        }
    }
    //ovdje je broj mutacija isti kao i broj poziva jer smo to osigurali
    total++;
    entry++;
    ui->labelNumCounter->setText(QString::number(total));
    ui->labelNumNumber->setText(QString::number(entry));

}

//check if last picture saved...
void MainWindow::closeEvent(QCloseEvent *event)
{
    if(saved == 0){
        int r = QMessageBox::warning(this, tr("Application"),tr("The picture changed.\n""Do you want to save your changes?"),
        QMessageBox::Yes | QMessageBox::No
        | QMessageBox::Cancel);
        if (r == QMessageBox::Yes) {
                   save();
        } else if (r == QMessageBox::Cancel) {
                  event->ignore();
        }
    }
}

void MainWindow::on_actionAbout_us_triggered()
{
    aboutdialog = new About(this);
    aboutdialog->show();
}
