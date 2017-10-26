#include "settingsdialog.h"
#include "ui_settingsdialog.h"

settingsdialog::settingsdialog(QMainWindow *parent) :
    QDialog(parent),
    ui(new Ui::settingsdialog)
{
    ui->setupUi(this);
    settings = Settings::getInstance();
    connect(ui->setButtonSettings,SIGNAL(clicked()),this,SLOT(radi()));

    //default from settings
    ui->labelNumPoints->setText(QString::number(settings->numberOfPolygonPoints));
    ui->labelNumPolygons->setText(QString::number(settings->numberOfPolygons));
    ui->labelNumPopsize->setText(QString::number(settings->populationsize));
    ui->local_brush_mutation_rate_label->setText(QString::number(settings->localBrushMutationRate));
    ui->global_brush_mutation_rate_label->setText(QString::number(settings->globalBrushMutationRate));
    ui->local_point_mutation_rate_label->setText(QString::number(settings->localPointMutationRate));
    ui->global_point_mutation_rate_label->setText(QString::number(settings->globalPointMutationRate));
    ui->global_polygon_mutation_rate_label->setText(QString::number(settings->globalPolygonMutationRate));

    ui->horizontalSlider_1->setValue(settings->numberOfPolygons);
    ui->horizontalSlider_2->setValue(settings->numberOfPolygonPoints);
    ui->horizontalSlider_3->setValue(settings->populationsize);
}

settingsdialog::~settingsdialog()
{
    delete ui;
}

void settingsdialog::radi()
{
   settings->numberOfPolygons = ui->labelNumPolygons->text().toInt();
   settings->numberOfPolygonPoints = ui->labelNumPoints->text().toInt();
   settings->populationsize = ui->labelNumPopsize->text().toInt();

   if(ui->radioButton_1->isChecked()) settings->algorithmNumber=1;
   if(ui->radioButton_2->isChecked()) settings->algorithmNumber=2;
   if(ui->radioButton_3->isChecked()) settings->algorithmNumber=3;

   if(ui->radioConvex->isChecked()) settings->convex=1;
   if(ui->radioNonConvex->isChecked()) settings->convex=0;

   settings->localBrushMutationRate = ui->local_brush_mutation_rate_label->text().toInt();
   settings->globalBrushMutationRate = ui->global_brush_mutation_rate_label->text().toInt();
   settings->localPointMutationRate = ui->local_point_mutation_rate_label->text().toInt();
   settings->globalPointMutationRate = ui->global_point_mutation_rate_label->text().toInt();
   settings->globalPolygonMutationRate = ui->global_polygon_mutation_rate_label->text().toInt();

   emit set();
}

void settingsdialog::on_horizontalSlider_3_valueChanged(int value)
{
    if(value%2!=0) value = value - 1;
    else value = value;
        ui->horizontalSlider_3->setValue(value);
        ui->labelNumPopsize->setText(QString::number(value));
}

void settingsdialog::on_horizontalSlider_1_valueChanged(int value)
{
   if(value%5!=0) value=value-(value%5);
   else value=value;
     ui->horizontalSlider_1->setValue(value);
     ui->labelNumPolygons->setText(QString::number(value));
}

void settingsdialog::on_radioButton_2_clicked()
{
    ui->horizontalSlider_3->setEnabled(true);
    ui->horizontalSlider_3->setMinimum(4);
    ui->horizontalSlider_3->setValue(4);
    ui->horizontalSlider_3->setSliderPosition(4);
    ui->labelNumPopsize->setText(QString::number(4));

    ui->horizontalSliderGloBrMutRate->setEnabled(true);
    ui->horizontalSliderLocBrMutRate->setEnabled(true);
    ui->horizontalSliderGloPoiMutRate->setEnabled(true);
    ui->horizontalSliderLocPoiMutRate->setEnabled(true);
    ui->horizontalSliderGloPolMutRate->setEnabled(true);
}

void settingsdialog::on_radioButton_1_clicked()
{
    ui->horizontalSlider_3->setEnabled(false);
    ui->horizontalSlider_3->setMinimum(2);
    ui->horizontalSlider_3->setValue(2);
    ui->horizontalSlider_3->setSliderPosition(2);
    ui->labelNumPopsize->setText(QString::number(2));

    ui->horizontalSliderGloBrMutRate->setEnabled(true);
    ui->horizontalSliderLocBrMutRate->setEnabled(true);
    ui->horizontalSliderGloPoiMutRate->setEnabled(true);
    ui->horizontalSliderLocPoiMutRate->setEnabled(true);
    ui->horizontalSliderGloPolMutRate->setEnabled(true);
}

void settingsdialog::on_radioButton_3_clicked()
{
    ui->horizontalSlider_3->setEnabled(true);
    ui->horizontalSlider_3->setMinimum(2);
    ui->horizontalSlider_3->setValue(2);
    ui->horizontalSlider_3->setSliderPosition(2);
    ui->labelNumPopsize->setText(QString::number(2));

    ui->horizontalSliderGloBrMutRate->setEnabled(false);
    ui->horizontalSliderLocBrMutRate->setEnabled(false);
    ui->horizontalSliderGloPoiMutRate->setEnabled(false);
    ui->horizontalSliderLocPoiMutRate->setEnabled(false);
    ui->horizontalSliderGloPolMutRate->setEnabled(false);
}

void settingsdialog::on_horizontalSliderLocBrMutRate_valueChanged(int value)
{
    if(value%50!=0) value = value - (value%50);
    else value = value;
        ui->horizontalSliderLocBrMutRate->setValue(value);
        ui->local_brush_mutation_rate_label->setText(QString::number(value));
}

void settingsdialog::on_horizontalSliderGloBrMutRate_valueChanged(int value)
{
    if(value%50!=0) value = value - (value%50);
    else value = value;
        ui->horizontalSliderGloBrMutRate->setValue(value);
        ui->global_brush_mutation_rate_label->setText(QString::number(value));
}

void settingsdialog::on_horizontalSliderLocPoiMutRate_valueChanged(int value)
{
    if(value%50!=0) value = value - (value%50);
    else value = value;
        ui->horizontalSliderLocPoiMutRate->setValue(value);
        ui->local_point_mutation_rate_label->setText(QString::number(value));
}

void settingsdialog::on_horizontalSliderGloPoiMutRate_valueChanged(int value)
{
    if(value%50!=0) value = value - (value%50);
    else value = value;
        ui->horizontalSliderGloPoiMutRate->setValue(value);
        ui->global_point_mutation_rate_label->setText(QString::number(value));
}

void settingsdialog::on_horizontalSliderGloPolMutRate_valueChanged(int value)
{
    if(value%50!=0) value = value - (value%50);
    else value = value;
        ui->horizontalSliderGloPolMutRate->setValue(value);
        ui->global_polygon_mutation_rate_label->setText(QString::number(value));
}
