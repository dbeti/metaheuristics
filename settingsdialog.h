#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include "settings.h"
#include <QMainWindow>

namespace Ui {
class settingsdialog;
}

class settingsdialog : public QDialog
{
    Q_OBJECT

public:
    Settings *settings;
    explicit settingsdialog(QMainWindow *parent);
    ~settingsdialog();
private slots:
    void radi();
    void on_horizontalSlider_3_valueChanged(int value);
    void on_horizontalSlider_1_valueChanged(int value);
    void on_radioButton_2_clicked();
    void on_radioButton_1_clicked();
    void on_radioButton_3_clicked();
    void on_horizontalSliderLocBrMutRate_valueChanged(int value);
    void on_horizontalSliderGloBrMutRate_valueChanged(int value);
    void on_horizontalSliderLocPoiMutRate_valueChanged(int value);
    void on_horizontalSliderGloPoiMutRate_valueChanged(int value);
    void on_horizontalSliderGloPolMutRate_valueChanged(int value);

signals:
    void set();

private:
    Ui::settingsdialog *ui;
};

#endif // SETTINGSDIALOG_H
