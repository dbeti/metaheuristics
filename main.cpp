#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QRect>

int main(int argc, char *argv[])
{
    int currentExitCode = 0;

    do{
    QApplication a(argc, argv);
    MainWindow w;
    w.move(QApplication::desktop()->screen()->rect().center() - w.rect().center());  //center application
    w.show();
    currentExitCode = a.exec();
}while( currentExitCode == MainWindow::EXIT_CODE_REBOOT );
    return currentExitCode;
}
