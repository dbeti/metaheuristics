/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QPushButton *okButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelDesciption;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(370, 250);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(About->sizePolicy().hasHeightForWidth());
        About->setSizePolicy(sizePolicy);
        About->setMinimumSize(QSize(370, 250));
        About->setMaximumSize(QSize(370, 250));
        okButton = new QPushButton(About);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(270, 200, 85, 27));
        layoutWidget = new QWidget(About);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 331, 145));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelDesciption = new QLabel(layoutWidget);
        labelDesciption->setObjectName(QStringLiteral("labelDesciption"));
        labelDesciption->setMidLineWidth(0);
        labelDesciption->setTextFormat(Qt::AutoText);
        labelDesciption->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        labelDesciption->setWordWrap(true);
        labelDesciption->setMargin(0);
        labelDesciption->setIndent(-1);

        verticalLayout->addWidget(labelDesciption);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);


        retranslateUi(About);
        QObject::connect(okButton, SIGNAL(clicked()), About, SLOT(close()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About", 0));
        okButton->setText(QApplication::translate("About", "Ok", 0));
        labelDesciption->setText(QApplication::translate("About", "This application was created as a project assignment of the course Metaheuristics which is held at Faculty of science, University of Zagreb. Application approximate an image with finite number of polygons using metaheuristics.", 0));
        label->setText(QApplication::translate("About", "Authors: Domagoj Beti, Goran Gosari\304\207.", 0));
        label_2->setText(QApplication::translate("About", "Year: 2015.", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
