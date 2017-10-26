#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include "drawing.h"
#include <QTimer>
#include <QTime>
#include <QLabel>
#include <QDir>
#include <QCloseEvent>
#include "settings.h"
#include "settingsdialog.h"
#include "about.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void RogerAlsing();
    void GeneticAlgorithm();
    void beesAlgorithm();
    void slotReboot();

public:
    static int const EXIT_CODE_REBOOT = -123456789; //for reboot app
    QImage *currentImage;
    Settings *settings;
    QPointF *painterPoints;

    explicit MainWindow(QWidget *parent = 0);
    void closeEvent(QCloseEvent *event);
    ~MainWindow();

    QImage image;
    double error;
    void draw(QImage *image, Drawing *drawing);
    void sortDrawings();
    void setPoints(int i, Drawing *drawing);
    unsigned int getFitness(QImage *currentImage);
    unsigned int getPixelFitness(QColor colorCurrent, QColor colorSource);
    void setStop();
    void setStop(bool value);
    bool getStop();

private slots:
    void on_buttonStart_clicked();
    void open();
    void autosave();
    void save();
    void on_buttonSet_clicked();
    void on_buttonDefault_clicked();
    void algorithm_time();
    void update_main();
    void on_actionAutosave_triggered();
    void on_actionAbout_us_triggered();

private:
    Ui::MainWindow *ui;
    bool willstop = true;
    QTimer *timer;
    QTimer *stoperica;
    QTime *time;
    QLabel *imageLabel;
    QAction *actionOpen;
    QAction *actionSave;
    settingsdialog *mydialog;
    About *aboutdialog;
    QAction *actionReboot;

    int first = 1;  //sluzi za provjeru prvog prolaska
    Drawing **population = NULL;
    Drawing **children = NULL;
    Drawing *parent1 = NULL;
    Drawing *parent2 = NULL;
    Drawing *child1 = NULL;
    Drawing *child2 = NULL;
    Drawing *tmp = NULL;
    int selected = 0;
    int entry = 0;
    int total = 0;
    int saved = 1;
};

#endif // MAINWINDOW_H
