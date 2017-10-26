#-------------------------------------------------
#
# Project created by QtCreator 2014-12-29T19:01:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Metaheuristike
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    brush.cpp \
    point.cpp \
    generator.cpp \
    polygon.cpp \
    drawing.cpp \
    settings.cpp \
    settingsdialog.cpp \
    about.cpp

HEADERS  += mainwindow.h \
    brush.h \
    point.h \
    generator.h \
    polygon.h \
    drawing.h \
    settings.h \
    settingsdialog.h \
    about.h

CONFIG += c++11

FORMS    += mainwindow.ui \
    settingsdialog.ui \
    about.ui
