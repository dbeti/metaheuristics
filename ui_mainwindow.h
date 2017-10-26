/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionAbout_us;
    QAction *actionAutosave;
    QWidget *centralWidget;
    QGroupBox *groupSource;
    QLabel *labelSource;
    QGroupBox *groupBox;
    QLabel *labelGenerate;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelSelected;
    QSpacerItem *horizontalSpacer;
    QLabel *labelNumSelected;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNumber;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelNumNumber;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelCounter;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelNumCounter;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelFitness;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelNumFitness;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_10;
    QLabel *labelTime;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelPolygons;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelNumPolygons;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelPolygonPoints;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelNumPoints;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QSpacerItem *horizontalSpacer_9;
    QLabel *labelAlgorithm;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_11;
    QLabel *labelPopsize;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *buttonDefault;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *buttonSet;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *buttonStart;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *buttonReset;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(850, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(850, 450));
        MainWindow->setMaximumSize(QSize(850, 450));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout_us = new QAction(MainWindow);
        actionAbout_us->setObjectName(QStringLiteral("actionAbout_us"));
        actionAutosave = new QAction(MainWindow);
        actionAutosave->setObjectName(QStringLiteral("actionAutosave"));
        actionAutosave->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupSource = new QGroupBox(centralWidget);
        groupSource->setObjectName(QStringLiteral("groupSource"));
        groupSource->setGeometry(QRect(30, 30, 200, 220));
        labelSource = new QLabel(groupSource);
        labelSource->setObjectName(QStringLiteral("labelSource"));
        labelSource->setGeometry(QRect(0, 20, 200, 200));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(300, 30, 200, 220));
        labelGenerate = new QLabel(groupBox);
        labelGenerate->setObjectName(QStringLiteral("labelGenerate"));
        labelGenerate->setGeometry(QRect(0, 20, 200, 200));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(550, 30, 260, 171));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 31, 221, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelSelected = new QLabel(layoutWidget);
        labelSelected->setObjectName(QStringLiteral("labelSelected"));

        horizontalLayout->addWidget(labelSelected);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelNumSelected = new QLabel(layoutWidget);
        labelNumSelected->setObjectName(QStringLiteral("labelNumSelected"));

        horizontalLayout->addWidget(labelNumSelected);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelNumber = new QLabel(layoutWidget);
        labelNumber->setObjectName(QStringLiteral("labelNumber"));

        horizontalLayout_2->addWidget(labelNumber);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        labelNumNumber = new QLabel(layoutWidget);
        labelNumNumber->setObjectName(QStringLiteral("labelNumNumber"));

        horizontalLayout_2->addWidget(labelNumNumber);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelCounter = new QLabel(layoutWidget);
        labelCounter->setObjectName(QStringLiteral("labelCounter"));

        horizontalLayout_3->addWidget(labelCounter);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        labelNumCounter = new QLabel(layoutWidget);
        labelNumCounter->setObjectName(QStringLiteral("labelNumCounter"));

        horizontalLayout_3->addWidget(labelNumCounter);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelFitness = new QLabel(layoutWidget);
        labelFitness->setObjectName(QStringLiteral("labelFitness"));

        horizontalLayout_4->addWidget(labelFitness);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        labelNumFitness = new QLabel(layoutWidget);
        labelNumFitness->setObjectName(QStringLiteral("labelNumFitness"));

        horizontalLayout_4->addWidget(labelNumFitness);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_10->addWidget(label_2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        labelTime = new QLabel(layoutWidget);
        labelTime->setObjectName(QStringLiteral("labelTime"));

        horizontalLayout_10->addWidget(labelTime);


        verticalLayout->addLayout(horizontalLayout_10);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(550, 210, 260, 181));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 32, 228, 141));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelPolygons = new QLabel(layoutWidget1);
        labelPolygons->setObjectName(QStringLiteral("labelPolygons"));
        labelPolygons->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_5->addWidget(labelPolygons);

        horizontalSpacer_5 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        labelNumPolygons = new QLabel(layoutWidget1);
        labelNumPolygons->setObjectName(QStringLiteral("labelNumPolygons"));

        horizontalLayout_5->addWidget(labelNumPolygons);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelPolygonPoints = new QLabel(layoutWidget1);
        labelPolygonPoints->setObjectName(QStringLiteral("labelPolygonPoints"));

        horizontalLayout_6->addWidget(labelPolygonPoints);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        labelNumPoints = new QLabel(layoutWidget1);
        labelNumPoints->setObjectName(QStringLiteral("labelNumPoints"));

        horizontalLayout_6->addWidget(labelNumPoints);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_9->addWidget(label);

        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        labelAlgorithm = new QLabel(layoutWidget1);
        labelAlgorithm->setObjectName(QStringLiteral("labelAlgorithm"));

        horizontalLayout_9->addWidget(labelAlgorithm);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_11->addWidget(label_3);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        labelPopsize = new QLabel(layoutWidget1);
        labelPopsize->setObjectName(QStringLiteral("labelPopsize"));

        horizontalLayout_11->addWidget(labelPopsize);


        verticalLayout_2->addLayout(horizontalLayout_11);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(13, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(1);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        buttonDefault = new QPushButton(layoutWidget1);
        buttonDefault->setObjectName(QStringLiteral("buttonDefault"));
        buttonDefault->setEnabled(true);

        horizontalLayout_7->addWidget(buttonDefault);

        horizontalSpacer_7 = new QSpacerItem(30, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        buttonSet = new QPushButton(layoutWidget1);
        buttonSet->setObjectName(QStringLiteral("buttonSet"));
        buttonSet->setEnabled(true);

        horizontalLayout_7->addWidget(buttonSet);


        verticalLayout_3->addLayout(horizontalLayout_7);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 290, 191, 29));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        buttonStart = new QPushButton(layoutWidget3);
        buttonStart->setObjectName(QStringLiteral("buttonStart"));

        horizontalLayout_8->addWidget(buttonStart);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        buttonReset = new QPushButton(layoutWidget3);
        buttonReset->setObjectName(QStringLiteral("buttonReset"));
        buttonReset->setEnabled(false);

        horizontalLayout_8->addWidget(buttonReset);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 850, 27));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionAutosave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionAbout_us);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Image approximation - Metaheuristics", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open..", 0));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("MainWindow", "&Save", 0));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", 0));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0));
        actionAbout_us->setText(QApplication::translate("MainWindow", "About", 0));
        actionAbout_us->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        actionAutosave->setText(QApplication::translate("MainWindow", "Autosave", 0));
        actionAutosave->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0));
        groupSource->setTitle(QApplication::translate("MainWindow", "Source Image:", 0));
        labelSource->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Generated Image:", 0));
        labelGenerate->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Status:", 0));
        labelSelected->setText(QApplication::translate("MainWindow", "Selected:", 0));
        labelNumSelected->setText(QApplication::translate("MainWindow", "0", 0));
        labelNumber->setText(QApplication::translate("MainWindow", "Mutated:", 0));
        labelNumNumber->setText(QApplication::translate("MainWindow", "0", 0));
        labelCounter->setText(QApplication::translate("MainWindow", "Total:", 0));
        labelNumCounter->setText(QApplication::translate("MainWindow", "0", 0));
        labelFitness->setText(QApplication::translate("MainWindow", "Fitness:", 0));
        labelNumFitness->setText(QApplication::translate("MainWindow", "0", 0));
        label_2->setText(QApplication::translate("MainWindow", "Time:", 0));
        labelTime->setText(QApplication::translate("MainWindow", "00:00:00", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Settings:", 0));
#ifndef QT_NO_WHATSTHIS
        labelPolygons->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        labelPolygons->setText(QApplication::translate("MainWindow", "Number of Polygons:", 0));
        labelNumPolygons->setText(QApplication::translate("MainWindow", "0", 0));
        labelPolygonPoints->setText(QApplication::translate("MainWindow", "Number of Polygons points:", 0));
        labelNumPoints->setText(QApplication::translate("MainWindow", "0", 0));
        label->setText(QApplication::translate("MainWindow", "Algorithm:", 0));
        labelAlgorithm->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Population Size:", 0));
        labelPopsize->setText(QApplication::translate("MainWindow", "0", 0));
        buttonDefault->setText(QApplication::translate("MainWindow", "Default", 0));
        buttonSet->setText(QApplication::translate("MainWindow", "Settings", 0));
        buttonStart->setText(QApplication::translate("MainWindow", "Start", 0));
        buttonReset->setText(QApplication::translate("MainWindow", "Reset", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
