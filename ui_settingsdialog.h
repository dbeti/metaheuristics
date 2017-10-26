/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingsdialog
{
public:
    QGroupBox *groupAlgorithm;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayoutAlgorithm;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QGroupBox *groupParameters;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayoutParameters;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelNamePolygons;
    QSpacerItem *horizontalSpacer_5;
    QSlider *horizontalSlider_1;
    QSpacerItem *horizontalSpacer_10;
    QLabel *labelNumPolygons;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayoutPoints;
    QLabel *labelNamePoints;
    QSpacerItem *horizontalSpacer_6;
    QSlider *horizontalSlider_2;
    QSpacerItem *horizontalSpacer_9;
    QLabel *labelNumPoints;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelNamePopsize;
    QSpacerItem *horizontalSpacer_7;
    QSlider *horizontalSlider_3;
    QSpacerItem *horizontalSpacer_8;
    QLabel *labelNumPopsize;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayoutButtons;
    QPushButton *setButtonSettings;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancelButtonSettings;
    QGroupBox *groupPolygonOptions;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioNonConvex;
    QRadioButton *radioConvex;
    QGroupBox *groupAdditionalOptions;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNamePolygons_2;
    QSpacerItem *horizontalSpacer_11;
    QSlider *horizontalSliderLocBrMutRate;
    QSpacerItem *horizontalSpacer_12;
    QLabel *local_brush_mutation_rate_label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNamePolygons_3;
    QSpacerItem *horizontalSpacer_14;
    QSlider *horizontalSliderGloBrMutRate;
    QSpacerItem *horizontalSpacer_13;
    QLabel *global_brush_mutation_rate_label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelNamePolygons_4;
    QSpacerItem *horizontalSpacer_16;
    QSlider *horizontalSliderLocPoiMutRate;
    QSpacerItem *horizontalSpacer_15;
    QLabel *local_point_mutation_rate_label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelNamePolygons_5;
    QSpacerItem *horizontalSpacer_17;
    QSlider *horizontalSliderGloPoiMutRate;
    QSpacerItem *horizontalSpacer_18;
    QLabel *global_point_mutation_rate_label;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelNamePolygons_6;
    QSpacerItem *horizontalSpacer_19;
    QSlider *horizontalSliderGloPolMutRate;
    QSpacerItem *horizontalSpacer_20;
    QLabel *global_polygon_mutation_rate_label;

    void setupUi(QDialog *settingsdialog)
    {
        if (settingsdialog->objectName().isEmpty())
            settingsdialog->setObjectName(QStringLiteral("settingsdialog"));
        settingsdialog->setEnabled(true);
        settingsdialog->resize(630, 470);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settingsdialog->sizePolicy().hasHeightForWidth());
        settingsdialog->setSizePolicy(sizePolicy);
        settingsdialog->setMinimumSize(QSize(630, 470));
        settingsdialog->setMaximumSize(QSize(630, 470));
        groupAlgorithm = new QGroupBox(settingsdialog);
        groupAlgorithm->setObjectName(QStringLiteral("groupAlgorithm"));
        groupAlgorithm->setGeometry(QRect(30, 30, 200, 155));
        layoutWidget1 = new QWidget(groupAlgorithm);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 161, 113));
        verticalLayoutAlgorithm = new QVBoxLayout(layoutWidget1);
        verticalLayoutAlgorithm->setObjectName(QStringLiteral("verticalLayoutAlgorithm"));
        verticalLayoutAlgorithm->setContentsMargins(0, 0, 0, 0);
        radioButton_1 = new QRadioButton(layoutWidget1);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        radioButton_1->setChecked(false);

        verticalLayoutAlgorithm->addWidget(radioButton_1);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setChecked(true);

        verticalLayoutAlgorithm->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget1);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayoutAlgorithm->addWidget(radioButton_3);

        groupParameters = new QGroupBox(settingsdialog);
        groupParameters->setObjectName(QStringLiteral("groupParameters"));
        groupParameters->setGeometry(QRect(250, 30, 350, 155));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        groupParameters->setFont(font);
        layoutWidget2 = new QWidget(groupParameters);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 40, 301, 101));
        verticalLayoutParameters = new QVBoxLayout(layoutWidget2);
        verticalLayoutParameters->setObjectName(QStringLiteral("verticalLayoutParameters"));
        verticalLayoutParameters->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelNamePolygons = new QLabel(layoutWidget2);
        labelNamePolygons->setObjectName(QStringLiteral("labelNamePolygons"));

        horizontalLayout_6->addWidget(labelNamePolygons);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        horizontalSlider_1 = new QSlider(layoutWidget2);
        horizontalSlider_1->setObjectName(QStringLiteral("horizontalSlider_1"));
        horizontalSlider_1->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalSlider_1->sizePolicy().hasHeightForWidth());
        horizontalSlider_1->setSizePolicy(sizePolicy1);
        horizontalSlider_1->setMinimumSize(QSize(0, 0));
        horizontalSlider_1->setMinimum(30);
        horizontalSlider_1->setMaximum(400);
        horizontalSlider_1->setSingleStep(5);
        horizontalSlider_1->setPageStep(5);
        horizontalSlider_1->setValue(50);
        horizontalSlider_1->setTracking(true);
        horizontalSlider_1->setOrientation(Qt::Horizontal);
        horizontalSlider_1->setTickInterval(0);

        horizontalLayout_6->addWidget(horizontalSlider_1);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        labelNumPolygons = new QLabel(layoutWidget2);
        labelNumPolygons->setObjectName(QStringLiteral("labelNumPolygons"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelNumPolygons->sizePolicy().hasHeightForWidth());
        labelNumPolygons->setSizePolicy(sizePolicy2);
        labelNumPolygons->setMinimumSize(QSize(30, 0));
        labelNumPolygons->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(labelNumPolygons);


        verticalLayoutParameters->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutParameters->addItem(verticalSpacer);

        horizontalLayoutPoints = new QHBoxLayout();
        horizontalLayoutPoints->setObjectName(QStringLiteral("horizontalLayoutPoints"));
        labelNamePoints = new QLabel(layoutWidget2);
        labelNamePoints->setObjectName(QStringLiteral("labelNamePoints"));

        horizontalLayoutPoints->addWidget(labelNamePoints);

        horizontalSpacer_6 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayoutPoints->addItem(horizontalSpacer_6);

        horizontalSlider_2 = new QSlider(layoutWidget2);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMinimum(3);
        horizontalSlider_2->setMaximum(10);
        horizontalSlider_2->setPageStep(1);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayoutPoints->addWidget(horizontalSlider_2);

        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayoutPoints->addItem(horizontalSpacer_9);

        labelNumPoints = new QLabel(layoutWidget2);
        labelNumPoints->setObjectName(QStringLiteral("labelNumPoints"));
        sizePolicy2.setHeightForWidth(labelNumPoints->sizePolicy().hasHeightForWidth());
        labelNumPoints->setSizePolicy(sizePolicy2);
        labelNumPoints->setMinimumSize(QSize(30, 0));
        labelNumPoints->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayoutPoints->addWidget(labelNumPoints);


        verticalLayoutParameters->addLayout(horizontalLayoutPoints);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutParameters->addItem(verticalSpacer_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        labelNamePopsize = new QLabel(layoutWidget2);
        labelNamePopsize->setObjectName(QStringLiteral("labelNamePopsize"));

        horizontalLayout_8->addWidget(labelNamePopsize);

        horizontalSpacer_7 = new QSpacerItem(42, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        horizontalSlider_3 = new QSlider(layoutWidget2);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setMinimum(4);
        horizontalSlider_3->setMaximum(8);
        horizontalSlider_3->setSingleStep(2);
        horizontalSlider_3->setPageStep(2);
        horizontalSlider_3->setSliderPosition(4);
        horizontalSlider_3->setTracking(true);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider_3->setTickInterval(0);

        horizontalLayout_8->addWidget(horizontalSlider_3);

        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        labelNumPopsize = new QLabel(layoutWidget2);
        labelNumPopsize->setObjectName(QStringLiteral("labelNumPopsize"));
        sizePolicy2.setHeightForWidth(labelNumPopsize->sizePolicy().hasHeightForWidth());
        labelNumPopsize->setSizePolicy(sizePolicy2);
        labelNumPopsize->setMinimumSize(QSize(30, 0));
        labelNumPopsize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(labelNumPopsize);


        verticalLayoutParameters->addLayout(horizontalLayout_8);

        layoutWidget = new QWidget(settingsdialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(390, 420, 211, 29));
        horizontalLayoutButtons = new QHBoxLayout(layoutWidget);
        horizontalLayoutButtons->setObjectName(QStringLiteral("horizontalLayoutButtons"));
        horizontalLayoutButtons->setContentsMargins(0, 0, 0, 0);
        setButtonSettings = new QPushButton(layoutWidget);
        setButtonSettings->setObjectName(QStringLiteral("setButtonSettings"));

        horizontalLayoutButtons->addWidget(setButtonSettings);

        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayoutButtons->addItem(horizontalSpacer_2);

        cancelButtonSettings = new QPushButton(layoutWidget);
        cancelButtonSettings->setObjectName(QStringLiteral("cancelButtonSettings"));

        horizontalLayoutButtons->addWidget(cancelButtonSettings);

        groupPolygonOptions = new QGroupBox(settingsdialog);
        groupPolygonOptions->setObjectName(QStringLiteral("groupPolygonOptions"));
        groupPolygonOptions->setGeometry(QRect(30, 200, 131, 91));
        layoutWidget3 = new QWidget(groupPolygonOptions);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 30, 103, 52));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioNonConvex = new QRadioButton(layoutWidget3);
        radioNonConvex->setObjectName(QStringLiteral("radioNonConvex"));
        radioNonConvex->setChecked(true);

        verticalLayout->addWidget(radioNonConvex);

        radioConvex = new QRadioButton(layoutWidget3);
        radioConvex->setObjectName(QStringLiteral("radioConvex"));
        radioConvex->setChecked(false);

        verticalLayout->addWidget(radioConvex);

        groupAdditionalOptions = new QGroupBox(settingsdialog);
        groupAdditionalOptions->setObjectName(QStringLiteral("groupAdditionalOptions"));
        groupAdditionalOptions->setGeometry(QRect(250, 200, 371, 211));
        layoutWidget4 = new QWidget(groupAdditionalOptions);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 30, 332, 161));
        verticalLayout_2 = new QVBoxLayout(layoutWidget4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelNamePolygons_2 = new QLabel(layoutWidget4);
        labelNamePolygons_2->setObjectName(QStringLiteral("labelNamePolygons_2"));
        sizePolicy.setHeightForWidth(labelNamePolygons_2->sizePolicy().hasHeightForWidth());
        labelNamePolygons_2->setSizePolicy(sizePolicy);
        labelNamePolygons_2->setMinimumSize(QSize(178, 0));

        horizontalLayout->addWidget(labelNamePolygons_2);

        horizontalSpacer_11 = new QSpacerItem(5, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        horizontalSliderLocBrMutRate = new QSlider(layoutWidget4);
        horizontalSliderLocBrMutRate->setObjectName(QStringLiteral("horizontalSliderLocBrMutRate"));
        horizontalSliderLocBrMutRate->setEnabled(true);
        sizePolicy1.setHeightForWidth(horizontalSliderLocBrMutRate->sizePolicy().hasHeightForWidth());
        horizontalSliderLocBrMutRate->setSizePolicy(sizePolicy1);
        horizontalSliderLocBrMutRate->setMinimumSize(QSize(0, 0));
        horizontalSliderLocBrMutRate->setMinimum(300);
        horizontalSliderLocBrMutRate->setMaximum(3000);
        horizontalSliderLocBrMutRate->setPageStep(100);
        horizontalSliderLocBrMutRate->setValue(1500);
        horizontalSliderLocBrMutRate->setSliderPosition(1500);
        horizontalSliderLocBrMutRate->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderLocBrMutRate);

        horizontalSpacer_12 = new QSpacerItem(5, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);

        local_brush_mutation_rate_label = new QLabel(layoutWidget4);
        local_brush_mutation_rate_label->setObjectName(QStringLiteral("local_brush_mutation_rate_label"));
        sizePolicy2.setHeightForWidth(local_brush_mutation_rate_label->sizePolicy().hasHeightForWidth());
        local_brush_mutation_rate_label->setSizePolicy(sizePolicy2);
        local_brush_mutation_rate_label->setMinimumSize(QSize(30, 0));
        local_brush_mutation_rate_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(local_brush_mutation_rate_label);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelNamePolygons_3 = new QLabel(layoutWidget4);
        labelNamePolygons_3->setObjectName(QStringLiteral("labelNamePolygons_3"));
        sizePolicy.setHeightForWidth(labelNamePolygons_3->sizePolicy().hasHeightForWidth());
        labelNamePolygons_3->setSizePolicy(sizePolicy);
        labelNamePolygons_3->setMinimumSize(QSize(178, 0));

        horizontalLayout_2->addWidget(labelNamePolygons_3);

        horizontalSpacer_14 = new QSpacerItem(5, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        horizontalSliderGloBrMutRate = new QSlider(layoutWidget4);
        horizontalSliderGloBrMutRate->setObjectName(QStringLiteral("horizontalSliderGloBrMutRate"));
        horizontalSliderGloBrMutRate->setEnabled(true);
        sizePolicy1.setHeightForWidth(horizontalSliderGloBrMutRate->sizePolicy().hasHeightForWidth());
        horizontalSliderGloBrMutRate->setSizePolicy(sizePolicy1);
        horizontalSliderGloBrMutRate->setMinimumSize(QSize(0, 0));
        horizontalSliderGloBrMutRate->setMinimum(300);
        horizontalSliderGloBrMutRate->setMaximum(3000);
        horizontalSliderGloBrMutRate->setPageStep(100);
        horizontalSliderGloBrMutRate->setValue(1500);
        horizontalSliderGloBrMutRate->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderGloBrMutRate);

        horizontalSpacer_13 = new QSpacerItem(5, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);

        global_brush_mutation_rate_label = new QLabel(layoutWidget4);
        global_brush_mutation_rate_label->setObjectName(QStringLiteral("global_brush_mutation_rate_label"));
        sizePolicy2.setHeightForWidth(global_brush_mutation_rate_label->sizePolicy().hasHeightForWidth());
        global_brush_mutation_rate_label->setSizePolicy(sizePolicy2);
        global_brush_mutation_rate_label->setMinimumSize(QSize(30, 0));
        global_brush_mutation_rate_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(global_brush_mutation_rate_label);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelNamePolygons_4 = new QLabel(layoutWidget4);
        labelNamePolygons_4->setObjectName(QStringLiteral("labelNamePolygons_4"));
        sizePolicy.setHeightForWidth(labelNamePolygons_4->sizePolicy().hasHeightForWidth());
        labelNamePolygons_4->setSizePolicy(sizePolicy);
        labelNamePolygons_4->setMinimumSize(QSize(178, 0));

        horizontalLayout_3->addWidget(labelNamePolygons_4);

        horizontalSpacer_16 = new QSpacerItem(5, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_16);

        horizontalSliderLocPoiMutRate = new QSlider(layoutWidget4);
        horizontalSliderLocPoiMutRate->setObjectName(QStringLiteral("horizontalSliderLocPoiMutRate"));
        horizontalSliderLocPoiMutRate->setEnabled(true);
        sizePolicy1.setHeightForWidth(horizontalSliderLocPoiMutRate->sizePolicy().hasHeightForWidth());
        horizontalSliderLocPoiMutRate->setSizePolicy(sizePolicy1);
        horizontalSliderLocPoiMutRate->setMinimumSize(QSize(0, 0));
        horizontalSliderLocPoiMutRate->setMinimum(300);
        horizontalSliderLocPoiMutRate->setMaximum(3000);
        horizontalSliderLocPoiMutRate->setPageStep(100);
        horizontalSliderLocPoiMutRate->setValue(1000);
        horizontalSliderLocPoiMutRate->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderLocPoiMutRate);

        horizontalSpacer_15 = new QSpacerItem(5, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_15);

        local_point_mutation_rate_label = new QLabel(layoutWidget4);
        local_point_mutation_rate_label->setObjectName(QStringLiteral("local_point_mutation_rate_label"));
        sizePolicy2.setHeightForWidth(local_point_mutation_rate_label->sizePolicy().hasHeightForWidth());
        local_point_mutation_rate_label->setSizePolicy(sizePolicy2);
        local_point_mutation_rate_label->setMinimumSize(QSize(30, 0));
        local_point_mutation_rate_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(local_point_mutation_rate_label);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelNamePolygons_5 = new QLabel(layoutWidget4);
        labelNamePolygons_5->setObjectName(QStringLiteral("labelNamePolygons_5"));
        sizePolicy.setHeightForWidth(labelNamePolygons_5->sizePolicy().hasHeightForWidth());
        labelNamePolygons_5->setSizePolicy(sizePolicy);
        labelNamePolygons_5->setMinimumSize(QSize(178, 0));

        horizontalLayout_4->addWidget(labelNamePolygons_5);

        horizontalSpacer_17 = new QSpacerItem(5, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_17);

        horizontalSliderGloPoiMutRate = new QSlider(layoutWidget4);
        horizontalSliderGloPoiMutRate->setObjectName(QStringLiteral("horizontalSliderGloPoiMutRate"));
        horizontalSliderGloPoiMutRate->setEnabled(true);
        sizePolicy1.setHeightForWidth(horizontalSliderGloPoiMutRate->sizePolicy().hasHeightForWidth());
        horizontalSliderGloPoiMutRate->setSizePolicy(sizePolicy1);
        horizontalSliderGloPoiMutRate->setMinimumSize(QSize(0, 0));
        horizontalSliderGloPoiMutRate->setMinimum(300);
        horizontalSliderGloPoiMutRate->setMaximum(3000);
        horizontalSliderGloPoiMutRate->setPageStep(100);
        horizontalSliderGloPoiMutRate->setValue(1000);
        horizontalSliderGloPoiMutRate->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSliderGloPoiMutRate);

        horizontalSpacer_18 = new QSpacerItem(5, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_18);

        global_point_mutation_rate_label = new QLabel(layoutWidget4);
        global_point_mutation_rate_label->setObjectName(QStringLiteral("global_point_mutation_rate_label"));
        sizePolicy2.setHeightForWidth(global_point_mutation_rate_label->sizePolicy().hasHeightForWidth());
        global_point_mutation_rate_label->setSizePolicy(sizePolicy2);
        global_point_mutation_rate_label->setMinimumSize(QSize(30, 0));
        global_point_mutation_rate_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(global_point_mutation_rate_label);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelNamePolygons_6 = new QLabel(layoutWidget4);
        labelNamePolygons_6->setObjectName(QStringLiteral("labelNamePolygons_6"));
        sizePolicy.setHeightForWidth(labelNamePolygons_6->sizePolicy().hasHeightForWidth());
        labelNamePolygons_6->setSizePolicy(sizePolicy);
        labelNamePolygons_6->setMinimumSize(QSize(178, 0));

        horizontalLayout_5->addWidget(labelNamePolygons_6);

        horizontalSpacer_19 = new QSpacerItem(5, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_19);

        horizontalSliderGloPolMutRate = new QSlider(layoutWidget4);
        horizontalSliderGloPolMutRate->setObjectName(QStringLiteral("horizontalSliderGloPolMutRate"));
        horizontalSliderGloPolMutRate->setEnabled(true);
        sizePolicy1.setHeightForWidth(horizontalSliderGloPolMutRate->sizePolicy().hasHeightForWidth());
        horizontalSliderGloPolMutRate->setSizePolicy(sizePolicy1);
        horizontalSliderGloPolMutRate->setMinimumSize(QSize(0, 0));
        horizontalSliderGloPolMutRate->setMinimum(300);
        horizontalSliderGloPolMutRate->setMaximum(3000);
        horizontalSliderGloPolMutRate->setPageStep(100);
        horizontalSliderGloPolMutRate->setValue(1500);
        horizontalSliderGloPolMutRate->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSliderGloPolMutRate);

        horizontalSpacer_20 = new QSpacerItem(5, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_20);

        global_polygon_mutation_rate_label = new QLabel(layoutWidget4);
        global_polygon_mutation_rate_label->setObjectName(QStringLiteral("global_polygon_mutation_rate_label"));
        sizePolicy2.setHeightForWidth(global_polygon_mutation_rate_label->sizePolicy().hasHeightForWidth());
        global_polygon_mutation_rate_label->setSizePolicy(sizePolicy2);
        global_polygon_mutation_rate_label->setMinimumSize(QSize(30, 0));
        global_polygon_mutation_rate_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(global_polygon_mutation_rate_label);


        verticalLayout_2->addLayout(horizontalLayout_5);


        retranslateUi(settingsdialog);
        QObject::connect(horizontalSliderLocPoiMutRate, SIGNAL(valueChanged(int)), local_point_mutation_rate_label, SLOT(setNum(int)));
        QObject::connect(setButtonSettings, SIGNAL(clicked()), settingsdialog, SLOT(accept()));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), labelNumPoints, SLOT(setNum(int)));
        QObject::connect(horizontalSliderGloBrMutRate, SIGNAL(valueChanged(int)), global_brush_mutation_rate_label, SLOT(setNum(int)));
        QObject::connect(horizontalSliderGloPolMutRate, SIGNAL(valueChanged(int)), global_polygon_mutation_rate_label, SLOT(setNum(int)));
        QObject::connect(horizontalSliderGloPoiMutRate, SIGNAL(valueChanged(int)), global_point_mutation_rate_label, SLOT(setNum(int)));
        QObject::connect(cancelButtonSettings, SIGNAL(clicked()), settingsdialog, SLOT(reject()));
        QObject::connect(horizontalSliderLocBrMutRate, SIGNAL(valueChanged(int)), local_brush_mutation_rate_label, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(settingsdialog);
    } // setupUi

    void retranslateUi(QDialog *settingsdialog)
    {
        settingsdialog->setWindowTitle(QApplication::translate("settingsdialog", "Settings", 0));
        groupAlgorithm->setTitle(QApplication::translate("settingsdialog", "Select Algorithm:", 0));
        radioButton_1->setText(QApplication::translate("settingsdialog", "Roger Alsing", 0));
        radioButton_2->setText(QApplication::translate("settingsdialog", "Genetic Algorithm", 0));
        radioButton_3->setText(QApplication::translate("settingsdialog", "Bees Algorithm", 0));
        groupParameters->setTitle(QApplication::translate("settingsdialog", "Parameters:", 0));
        labelNamePolygons->setText(QApplication::translate("settingsdialog", "Number of polygons:", 0));
        labelNumPolygons->setText(QApplication::translate("settingsdialog", "0", 0));
        labelNamePoints->setText(QApplication::translate("settingsdialog", "Number of points:", 0));
        labelNumPoints->setText(QApplication::translate("settingsdialog", "0", 0));
        labelNamePopsize->setText(QApplication::translate("settingsdialog", "Population size:", 0));
        labelNumPopsize->setText(QApplication::translate("settingsdialog", "0", 0));
        setButtonSettings->setText(QApplication::translate("settingsdialog", "Set", 0));
        cancelButtonSettings->setText(QApplication::translate("settingsdialog", "Cancel", 0));
        groupPolygonOptions->setTitle(QApplication::translate("settingsdialog", "Polygon options:", 0));
        radioNonConvex->setText(QApplication::translate("settingsdialog", "Non-convex", 0));
        radioConvex->setText(QApplication::translate("settingsdialog", "Convex", 0));
        groupAdditionalOptions->setTitle(QApplication::translate("settingsdialog", "Additional options:", 0));
        labelNamePolygons_2->setText(QApplication::translate("settingsdialog", "Local brush mutation rate:", 0));
        local_brush_mutation_rate_label->setText(QApplication::translate("settingsdialog", "0", 0));
        labelNamePolygons_3->setText(QApplication::translate("settingsdialog", "Global brush mutation rate:", 0));
        global_brush_mutation_rate_label->setText(QApplication::translate("settingsdialog", "0", 0));
        labelNamePolygons_4->setText(QApplication::translate("settingsdialog", "Local point mutation rate:", 0));
        local_point_mutation_rate_label->setText(QApplication::translate("settingsdialog", "0", 0));
        labelNamePolygons_5->setText(QApplication::translate("settingsdialog", "Global point mutation rate:", 0));
        global_point_mutation_rate_label->setText(QApplication::translate("settingsdialog", "0", 0));
        labelNamePolygons_6->setText(QApplication::translate("settingsdialog", "Global polygon mutation rate:", 0));
        global_polygon_mutation_rate_label->setText(QApplication::translate("settingsdialog", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class settingsdialog: public Ui_settingsdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
