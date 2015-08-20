/********************************************************************************
** Form generated from reading UI file 'effectswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EFFECTSWIDGET_H
#define UI_EFFECTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EffectsWidget
{
public:
    QGridLayout *gridLayout;
    QFrame *frameCentral;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frameEffects;
    QGridLayout *gridLayout_14;
    QFrame *frameEffect1;
    QGridLayout *gridLayout_10;
    QPushButton *pbEffect1;
    QPushButton *pbOnOffEffect1;
    QFrame *frameEditEffect1;
    QGridLayout *gridLayout_15;
    QPushButton *pbEditEffect1;
    QPushButton *pbEffectLink1;
    QFrame *frameEffect2;
    QGridLayout *gridLayout_11;
    QPushButton *pbOnOffEffect2;
    QPushButton *pbEffectLink2;
    QFrame *frameEditEffect2;
    QGridLayout *gridLayout_16;
    QPushButton *pbEditEffect2;
    QPushButton *pbEffect2;
    QFrame *frameEffectSection;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *lbSection1;
    QSpacerItem *horizontalSpacer_7;
    QFrame *frameEffect3;
    QGridLayout *gridLayout_12;
    QPushButton *pbEffect3;
    QPushButton *pbEffectLink3;
    QFrame *frameEditEffect3;
    QGridLayout *gridLayout_17;
    QPushButton *pbEditEffect3;
    QPushButton *pbOnOffEffect3;
    QFrame *frameEffect4;
    QGridLayout *gridLayout_13;
    QFrame *frameEditEffect4;
    QGridLayout *gridLayout_18;
    QPushButton *pbEditEffect4;
    QPushButton *pbEffect4;
    QPushButton *pbEffectLink4;
    QPushButton *pbOnOffEffect4;
    QSpacerItem *horizontalSpacer;
    QFrame *frameVolume;
    QGridLayout *gridLayout_19;
    QFrame *frameMFX2;
    QGridLayout *gridLayout_7;
    QSpinBox *spMFX2;
    QDial *dialMFX2;
    QFrame *frameMFX1;
    QGridLayout *gridLayout_2;
    QSpinBox *spMFX1;
    QDial *dialMFX1;
    QSpacerItem *verticalSpacer_3;
    QFrame *SamplesFrame;
    QGridLayout *gridLayout_5;
    QFrame *framMultiSample;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lbSection2;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frameSample3;
    QGridLayout *gridLayout_8;
    QLabel *lbSampleNb3;
    QLabel *lbSampleName3;
    QComboBox *cbEffectLink3;
    QFrame *frameSample2;
    QGridLayout *gridLayout_6;
    QLabel *lbSampleNb2;
    QLabel *lbSampleName2;
    QComboBox *cbEffectLink2;
    QFrame *frameSample1;
    QGridLayout *gridLayout_4;
    QLabel *lbSampleNb1;
    QLabel *lbSampleName1;
    QComboBox *cbEffectLink1;
    QFrame *frameSample4;
    QGridLayout *gridLayout_9;
    QLabel *lbSampleNb4;
    QLabel *lbSampleName4;
    QComboBox *cbEffectLink4;
    QSpacerItem *horizontalSpacer_10;
    QFrame *frameMasterEffect;
    QGridLayout *gridLayout_26;
    QFrame *frameMasterEffect1;
    QGridLayout *gridLayout_33;
    QPushButton *pbMasterEffectLink1;
    QFrame *frameMasterEditEffect1;
    QGridLayout *gridLayout_35;
    QPushButton *pbMasterEditEffect1;
    QPushButton *pbMasterEffect1;
    QPushButton *pbOnOffMasterEffect1;
    QFrame *frameMasterEffect2;
    QGridLayout *gridLayout_30;
    QFrame *frameMasterEditEffect2;
    QGridLayout *gridLayout_32;
    QPushButton *pbMasterEditEffect2;
    QPushButton *pbMasterEffectLink2;
    QPushButton *pbMasterEffect2;
    QPushButton *pbOnOffMasterEffect2;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QFrame *frameMasterEffectSection;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_8;
    QLabel *lbSection3;
    QSpacerItem *horizontalSpacer_9;
    QFrame *frameMasterEffect3;
    QGridLayout *gridLayout_36;
    QPushButton *pbMasterEffect3;
    QPushButton *pbOnOffMasterEffect3;
    QFrame *frameMasterEditEffect3;
    QGridLayout *gridLayout_37;
    QPushButton *pbMasterEditEffect3;
    QSpinBox *spMasterEffect3;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *EffectsWidget)
    {
        if (EffectsWidget->objectName().isEmpty())
            EffectsWidget->setObjectName(QStringLiteral("EffectsWidget"));
        EffectsWidget->resize(1470, 269);
        EffectsWidget->setMinimumSize(QSize(0, 269));
        EffectsWidget->setMaximumSize(QSize(16777215, 269));
        EffectsWidget->setStyleSheet(QLatin1String("QWidget{\n"
"    font-family : \"Open Sans\";\n"
"    font-weight : 550;\n"
"    font-size:14pt;\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"border: 1px solid white;\n"
"color: black;\n"
"outline:none;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	color: grey;\n"
"}\n"
"\n"
"#pbEffectLink1:!checked,#pbEffectLink2:!checked,#pbEffectLink3:!checked,#pbEffectLink4:!checked,\n"
"#pbMasterEffectLink1:!checked,#pbMasterEffectLink2:!checked,#pbMasterEffectLink3:!checked{\n"
"background-color: rgb(239, 159, 31);\n"
"border-left:none;\n"
"}\n"
"#pbEffectLink1:checked,#pbEffectLink2:checked,#pbEffectLink3:checked,#pbEffectLink4:checked,\n"
"#pbMasterEffectLink1:checked,#pbMasterEffectLink2:checked,#pbMasterEffectLink3:checked{\n"
"background-color: rgb(18, 126, 42);\n"
"border-left:none;\n"
"}\n"
"\n"
"#pbEffect1, #pbEffect2, #pbEffect3, #pbEffect4{\n"
"border: 1"
                        "px solid white;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"color: back;\n"
"}\n"
"\n"
"#pbEditEffect1, #pbEditEffect2, #pbEditEffect3, #pbEditEffect4,\n"
"#pbMasterEditEffect1, #pbMasterEditEffect2, #pbMasterEditEffect3{\n"
"	color: white;\n"
"	border: none;\n"
"	background-color:transparent;\n"
"}\n"
"\n"
"#pbOnOffEffect1:!checked,#pbOnOffEffect2:!checked,#pbOnOffEffect3:!checked,#pbOnOffEffect4:!checked,\n"
"#pbOnOffMasterEffect1:!checked,#pbOnOffMasterEffect2:!checked,#pbOnOffMasterEffect3:!checked{\n"
"background-color:rgb(202, 36, 36);\n"
"color:white;\n"
"border-right:none;\n"
"}\n"
"\n"
"#pbOnOffEffect1:checked,#pbOnOffEffect2:checked,#pbOnOffEffect3:checked,#pbOnOffEffect4:checked,\n"
"#pbOnOffMasterEffect1:checked,#pbOnOffMasterEffect2:checked,#pbOnOffMasterEffect3:checked{\n"
"background-color:rgb(18, 126, 42);\n"
"color:white;\n"
"border-right:none;\n"
"}\n"
"\n"
"#lbWidgetTitle{\n"
"    border: 1px "
                        "solid black;\n"
"    background-color:rgb(16, 97, 114);\n"
"    color: white;\n"
"}\n"
"\n"
"#lbCategoryName{\n"
"border : 1px solid black;\n"
"border-left:none;\n"
"background-color: rgb(16, 97, 114);\n"
"color:white;\n"
"}\n"
"\n"
"#lbCategory{\n"
"font-size: 12pt;\n"
"border : none;\n"
"background-color:rgb(77, 79, 78);\n"
"color:white;\n"
"}\n"
"\n"
"#lbCategoryNb{\n"
"border: 1px solid black;\n"
"background-color:rgb(16, 97, 114);\n"
"color: white;\n"
"}\n"
"\n"
"#frameCategory{\n"
"border: 1px solid black;\n"
"color : white;\n"
"}\n"
"\n"
"#frameMFX1,#frameMFX2{\n"
"background-color:rgb(16, 97, 114);\n"
"border:none;\n"
"}\n"
"\n"
"#frameMasterEffect, #frameOutput,#frameCentral{\n"
"border:none;\n"
"background-color: transparent;\n"
"}\n"
"\n"
"#frameVolume{\n"
"border:none;\n"
"}\n"
"\n"
"#frameMasterEffect1, #frameMasterEffect2, #frameMasterEffect3, #frameMasterEffect4,\n"
"#frameEffect1, #frameEffect2, #frameEffect3, #frameEffect4{\n"
"border:1px solid white;\n"
"background-color: rgb(16, 97, 114);\n"
""
                        "}\n"
"\n"
"#frameEditEffect1, #frameEditEffect2, #frameEditEffect3, #frameEditEffect4,\n"
"#frameMasterEditEffect1, #frameMasterEditEffect2, #frameMasterEditEffect3{\n"
"background-color:rgb(16, 97, 114);\n"
"border:1px solid white;\n"
"border-left: none;\n"
"} \n"
"\n"
"#frameEffectProp1, #frameEffectProp2, #frameEffectProp3, #frameEffectProp4,\n"
"#frameMasterEffectProp1, #frameMasterEffectProp2, #frameMasterEffectProp3{\n"
"background-color:rgb(16, 97, 114);\n"
"border:1px solid white;\n"
"border-right : none;\n"
"color: white;\n"
"}\n"
"\n"
"QCheckBox{\n"
"    background-color    : transparent;\n"
"	border:1px solid black;\n"
"    outline:none;\n"
"}\n"
"\n"
"QCheckBox::indicator { \n"
"    width               : 49px; \n"
"    height              : 19px; \n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color : rgb(202, 36, 36);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color : rgb(84, 189, 58);\n"
"}\n"
"\n"
"#lbEffectName1, #lbEffectName2, #lbEffectName3, #lbEffec"
                        "tName4,\n"
"#lbMasterEffectName1, #lbMasterEffectName2, #lbMasterEffectName3, #lbMasterEffectName4{\n"
"border : none;\n"
"color: white;\n"
"}\n"
"\n"
"#frameEffects{\n"
"	border:none;\n"
"}\n"
"\n"
"#lbSampleNb1, #lbSampleNb2, #lbSampleNb3, #lbSampleNb4{\n"
"background: transparent;\n"
"padding-left:50px;\n"
"border:none;\n"
"color:black;\n"
"}\n"
"#frameSample1, #frameSample2, #frameSample3, #frameSample4{\n"
"border:1px solid white;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"color: back;\n"
"}\n"
"\n"
"#lbSampleName1, #lbSampleName2, #lbSampleName3, #lbSampleName4{\n"
"background: transparent;\n"
"border:none;\n"
"color:black;\n"
"}\n"
"\n"
"#lbLinkedEffect1, #lbLinkedEffect2, #lbLinkedEffect3, #lbLinkedEffect4{\n"
"background-color : white;\n"
"border: 1px solid black;\n"
"color:black;\n"
"}\n"
"\n"
"#lbSection1, #lbSection2, #lbSection3{\n"
"border: 1px solid black;\n"
"background-color:rgb(77, 79, 78);\n"
""
                        "color: white;\n"
"font-size : 12pt;\n"
"}\n"
"\n"
"#lbEffect1, #lbEffect2, #lbEffect3, #lbEffect4{\n"
"border: 1px solid white;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"color: back;\n"
"font-size:12pt;\n"
"}\n"
"\n"
"QGraphicsView{\n"
"background-color: transparent;\n"
"border: none;\n"
"}\n"
"\n"
"QScrollArea, #scrollAreaWidgetContents {\n"
"background-color: transparent; \n"
"border: none;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"border :   1px solid black;\n"
"background :   black;\n"
"height : 10px;\n"
"margin : 0 0 0 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {    \n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"min-width              :   20px;\n"
"margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal,QScrollBar::sub-line:horizontal  {\n"
"border                  :   none;\n"
"backgr"
                        "ound              :   transparent;\n"
"height                  :   0px;\n"
"margin                  :   0 0 0 10px;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:horizontal, QScrollBar::down-arrow:horizontal {\n"
"border                  :   none;\n"
"width                   :   0px;\n"
"height                  :   0px;\n"
"background              :   white;\n"
"margin                  :   0 0 0 10px;\n"
"}\n"
"\n"
"\n"
"/**************************************************************/\n"
"QComboBox{\n"
"combobox-popup: 0;\n"
"font-size: 12pt;\n"
"selection-background-color: rgb(239, 159, 31);\n"
"color   : white;\n"
"padding : 1px 0px 1px 3px;\n"
"background-color :  rgb(16, 97, 114);\n"
"}\n"
"\n"
"QComboBox QListView{\n"
"background-color : rgb(16, 97, 114);\n"
"color:white;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item{\n"
"  border-bottom : 1px solid white;\n"
"  padding:0px;\n"
"}\n"
"\n"
"QComboBox:!editable  {\n"
"padding-right : 5px;\n"
"border:none;\n"
"}\n"
"\n"
"QComboBox::focus:!editable{\n"
"background-c"
                        "olor : rgb(239, 159, 31);\n"
"}\n"
"\n"
"/**********************************************************/\n"
"QSpinBox {\n"
"	  font-size : 12pt;\n"
"     border: 1px solid black;\n"
"     color: black;\n"
"	 background-color:white;\n"
" }\n"
"\n"
"#spMasterEffect3{\n"
"font-size:14pt;\n"
"border:1px solid white;\n"
"}\n"
""));
        gridLayout = new QGridLayout(EffectsWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frameCentral = new QFrame(EffectsWidget);
        frameCentral->setObjectName(QStringLiteral("frameCentral"));
        frameCentral->setMinimumSize(QSize(1240, 0));
        frameCentral->setMaximumSize(QSize(16777215, 269));
        frameCentral->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(frameCentral);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        frameEffects = new QFrame(frameCentral);
        frameEffects->setObjectName(QStringLiteral("frameEffects"));
        frameEffects->setMinimumSize(QSize(364, 0));
        frameEffects->setMaximumSize(QSize(364, 16777215));
        frameEffects->setStyleSheet(QStringLiteral(""));
        frameEffects->setFrameShape(QFrame::StyledPanel);
        frameEffects->setFrameShadow(QFrame::Raised);
        gridLayout_14 = new QGridLayout(frameEffects);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setHorizontalSpacing(0);
        gridLayout_14->setContentsMargins(0, 1, 0, 1);
        frameEffect1 = new QFrame(frameEffects);
        frameEffect1->setObjectName(QStringLiteral("frameEffect1"));
        frameEffect1->setMinimumSize(QSize(0, 54));
        frameEffect1->setMaximumSize(QSize(16777215, 54));
        frameEffect1->setStyleSheet(QStringLiteral(""));
        gridLayout_10 = new QGridLayout(frameEffect1);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(1, 1, 1, 1);
        pbEffect1 = new QPushButton(frameEffect1);
        pbEffect1->setObjectName(QStringLiteral("pbEffect1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbEffect1->sizePolicy().hasHeightForWidth());
        pbEffect1->setSizePolicy(sizePolicy);
        pbEffect1->setStyleSheet(QStringLiteral(""));

        gridLayout_10->addWidget(pbEffect1, 0, 1, 1, 1);

        pbOnOffEffect1 = new QPushButton(frameEffect1);
        pbOnOffEffect1->setObjectName(QStringLiteral("pbOnOffEffect1"));
        sizePolicy.setHeightForWidth(pbOnOffEffect1->sizePolicy().hasHeightForWidth());
        pbOnOffEffect1->setSizePolicy(sizePolicy);
        pbOnOffEffect1->setMinimumSize(QSize(60, 0));
        pbOnOffEffect1->setMaximumSize(QSize(60, 16777215));
        pbOnOffEffect1->setCheckable(true);

        gridLayout_10->addWidget(pbOnOffEffect1, 0, 0, 1, 1);

        frameEditEffect1 = new QFrame(frameEffect1);
        frameEditEffect1->setObjectName(QStringLiteral("frameEditEffect1"));
        frameEditEffect1->setMinimumSize(QSize(60, 0));
        frameEditEffect1->setMaximumSize(QSize(60, 16777215));
        frameEditEffect1->setStyleSheet(QStringLiteral(""));
        frameEditEffect1->setFrameShape(QFrame::StyledPanel);
        frameEditEffect1->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(frameEditEffect1);
        gridLayout_15->setSpacing(0);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 1, 0);
        pbEditEffect1 = new QPushButton(frameEditEffect1);
        pbEditEffect1->setObjectName(QStringLiteral("pbEditEffect1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbEditEffect1->sizePolicy().hasHeightForWidth());
        pbEditEffect1->setSizePolicy(sizePolicy1);
        pbEditEffect1->setStyleSheet(QStringLiteral(""));

        gridLayout_15->addWidget(pbEditEffect1, 0, 0, 1, 1);


        gridLayout_10->addWidget(frameEditEffect1, 0, 2, 1, 1);

        pbEffectLink1 = new QPushButton(frameEffect1);
        pbEffectLink1->setObjectName(QStringLiteral("pbEffectLink1"));
        sizePolicy.setHeightForWidth(pbEffectLink1->sizePolicy().hasHeightForWidth());
        pbEffectLink1->setSizePolicy(sizePolicy);
        pbEffectLink1->setMinimumSize(QSize(57, 0));
        pbEffectLink1->setMaximumSize(QSize(57, 16777215));
        pbEffectLink1->setCheckable(true);

        gridLayout_10->addWidget(pbEffectLink1, 0, 3, 1, 1);


        gridLayout_14->addWidget(frameEffect1, 1, 1, 1, 1);

        frameEffect2 = new QFrame(frameEffects);
        frameEffect2->setObjectName(QStringLiteral("frameEffect2"));
        frameEffect2->setMinimumSize(QSize(0, 54));
        frameEffect2->setMaximumSize(QSize(16777215, 54));
        frameEffect2->setStyleSheet(QStringLiteral(""));
        gridLayout_11 = new QGridLayout(frameEffect2);
        gridLayout_11->setSpacing(0);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(1, 1, 1, 1);
        pbOnOffEffect2 = new QPushButton(frameEffect2);
        pbOnOffEffect2->setObjectName(QStringLiteral("pbOnOffEffect2"));
        sizePolicy.setHeightForWidth(pbOnOffEffect2->sizePolicy().hasHeightForWidth());
        pbOnOffEffect2->setSizePolicy(sizePolicy);
        pbOnOffEffect2->setMinimumSize(QSize(60, 0));
        pbOnOffEffect2->setMaximumSize(QSize(60, 16777215));
        pbOnOffEffect2->setCheckable(true);

        gridLayout_11->addWidget(pbOnOffEffect2, 0, 0, 1, 1);

        pbEffectLink2 = new QPushButton(frameEffect2);
        pbEffectLink2->setObjectName(QStringLiteral("pbEffectLink2"));
        sizePolicy.setHeightForWidth(pbEffectLink2->sizePolicy().hasHeightForWidth());
        pbEffectLink2->setSizePolicy(sizePolicy);
        pbEffectLink2->setMinimumSize(QSize(57, 0));
        pbEffectLink2->setMaximumSize(QSize(57, 16777215));
        pbEffectLink2->setCheckable(true);

        gridLayout_11->addWidget(pbEffectLink2, 0, 3, 1, 1);

        frameEditEffect2 = new QFrame(frameEffect2);
        frameEditEffect2->setObjectName(QStringLiteral("frameEditEffect2"));
        frameEditEffect2->setMinimumSize(QSize(60, 0));
        frameEditEffect2->setMaximumSize(QSize(60, 16777215));
        frameEditEffect2->setStyleSheet(QStringLiteral(""));
        frameEditEffect2->setFrameShape(QFrame::StyledPanel);
        frameEditEffect2->setFrameShadow(QFrame::Raised);
        gridLayout_16 = new QGridLayout(frameEditEffect2);
        gridLayout_16->setSpacing(0);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        pbEditEffect2 = new QPushButton(frameEditEffect2);
        pbEditEffect2->setObjectName(QStringLiteral("pbEditEffect2"));
        sizePolicy1.setHeightForWidth(pbEditEffect2->sizePolicy().hasHeightForWidth());
        pbEditEffect2->setSizePolicy(sizePolicy1);
        pbEditEffect2->setStyleSheet(QStringLiteral(""));

        gridLayout_16->addWidget(pbEditEffect2, 0, 0, 1, 1);


        gridLayout_11->addWidget(frameEditEffect2, 0, 2, 1, 1);

        pbEffect2 = new QPushButton(frameEffect2);
        pbEffect2->setObjectName(QStringLiteral("pbEffect2"));
        sizePolicy.setHeightForWidth(pbEffect2->sizePolicy().hasHeightForWidth());
        pbEffect2->setSizePolicy(sizePolicy);
        pbEffect2->setStyleSheet(QStringLiteral(""));

        gridLayout_11->addWidget(pbEffect2, 0, 1, 1, 1);


        gridLayout_14->addWidget(frameEffect2, 2, 1, 1, 1);

        frameEffectSection = new QFrame(frameEffects);
        frameEffectSection->setObjectName(QStringLiteral("frameEffectSection"));
        frameEffectSection->setMinimumSize(QSize(0, 25));
        frameEffectSection->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(68);
        frameEffectSection->setFont(font);
        frameEffectSection->setStyleSheet(QStringLiteral(""));
        frameEffectSection->setFrameShape(QFrame::NoFrame);
        horizontalLayout_4 = new QHBoxLayout(frameEffectSection);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        lbSection1 = new QLabel(frameEffectSection);
        lbSection1->setObjectName(QStringLiteral("lbSection1"));
        lbSection1->setMinimumSize(QSize(165, 24));
        lbSection1->setMaximumSize(QSize(165, 24));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(68);
        lbSection1->setFont(font1);
        lbSection1->setStyleSheet(QStringLiteral(""));
        lbSection1->setScaledContents(false);
        lbSection1->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbSection1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        gridLayout_14->addWidget(frameEffectSection, 0, 1, 1, 1);

        frameEffect3 = new QFrame(frameEffects);
        frameEffect3->setObjectName(QStringLiteral("frameEffect3"));
        frameEffect3->setMinimumSize(QSize(0, 54));
        frameEffect3->setMaximumSize(QSize(16777215, 54));
        frameEffect3->setStyleSheet(QStringLiteral(""));
        gridLayout_12 = new QGridLayout(frameEffect3);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(1, 1, 1, 1);
        pbEffect3 = new QPushButton(frameEffect3);
        pbEffect3->setObjectName(QStringLiteral("pbEffect3"));
        sizePolicy.setHeightForWidth(pbEffect3->sizePolicy().hasHeightForWidth());
        pbEffect3->setSizePolicy(sizePolicy);
        pbEffect3->setStyleSheet(QStringLiteral(""));

        gridLayout_12->addWidget(pbEffect3, 0, 1, 1, 1);

        pbEffectLink3 = new QPushButton(frameEffect3);
        pbEffectLink3->setObjectName(QStringLiteral("pbEffectLink3"));
        sizePolicy.setHeightForWidth(pbEffectLink3->sizePolicy().hasHeightForWidth());
        pbEffectLink3->setSizePolicy(sizePolicy);
        pbEffectLink3->setMinimumSize(QSize(57, 0));
        pbEffectLink3->setMaximumSize(QSize(57, 16777215));
        pbEffectLink3->setCheckable(true);

        gridLayout_12->addWidget(pbEffectLink3, 0, 3, 1, 1);

        frameEditEffect3 = new QFrame(frameEffect3);
        frameEditEffect3->setObjectName(QStringLiteral("frameEditEffect3"));
        frameEditEffect3->setMinimumSize(QSize(60, 0));
        frameEditEffect3->setMaximumSize(QSize(60, 16777215));
        frameEditEffect3->setStyleSheet(QStringLiteral(""));
        frameEditEffect3->setFrameShape(QFrame::StyledPanel);
        frameEditEffect3->setFrameShadow(QFrame::Raised);
        gridLayout_17 = new QGridLayout(frameEditEffect3);
        gridLayout_17->setSpacing(0);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        pbEditEffect3 = new QPushButton(frameEditEffect3);
        pbEditEffect3->setObjectName(QStringLiteral("pbEditEffect3"));
        sizePolicy1.setHeightForWidth(pbEditEffect3->sizePolicy().hasHeightForWidth());
        pbEditEffect3->setSizePolicy(sizePolicy1);
        pbEditEffect3->setStyleSheet(QStringLiteral(""));

        gridLayout_17->addWidget(pbEditEffect3, 0, 0, 1, 1);


        gridLayout_12->addWidget(frameEditEffect3, 0, 2, 1, 1);

        pbOnOffEffect3 = new QPushButton(frameEffect3);
        pbOnOffEffect3->setObjectName(QStringLiteral("pbOnOffEffect3"));
        sizePolicy.setHeightForWidth(pbOnOffEffect3->sizePolicy().hasHeightForWidth());
        pbOnOffEffect3->setSizePolicy(sizePolicy);
        pbOnOffEffect3->setMinimumSize(QSize(60, 0));
        pbOnOffEffect3->setMaximumSize(QSize(60, 16777215));
        pbOnOffEffect3->setCheckable(true);

        gridLayout_12->addWidget(pbOnOffEffect3, 0, 0, 1, 1);


        gridLayout_14->addWidget(frameEffect3, 3, 1, 1, 1);

        frameEffect4 = new QFrame(frameEffects);
        frameEffect4->setObjectName(QStringLiteral("frameEffect4"));
        frameEffect4->setMinimumSize(QSize(0, 54));
        frameEffect4->setMaximumSize(QSize(16777215, 54));
        frameEffect4->setStyleSheet(QStringLiteral(""));
        gridLayout_13 = new QGridLayout(frameEffect4);
        gridLayout_13->setSpacing(0);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(1, 1, 1, 1);
        frameEditEffect4 = new QFrame(frameEffect4);
        frameEditEffect4->setObjectName(QStringLiteral("frameEditEffect4"));
        frameEditEffect4->setMinimumSize(QSize(60, 0));
        frameEditEffect4->setMaximumSize(QSize(60, 16777215));
        frameEditEffect4->setStyleSheet(QStringLiteral(""));
        frameEditEffect4->setFrameShape(QFrame::StyledPanel);
        frameEditEffect4->setFrameShadow(QFrame::Raised);
        gridLayout_18 = new QGridLayout(frameEditEffect4);
        gridLayout_18->setSpacing(0);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        pbEditEffect4 = new QPushButton(frameEditEffect4);
        pbEditEffect4->setObjectName(QStringLiteral("pbEditEffect4"));
        sizePolicy1.setHeightForWidth(pbEditEffect4->sizePolicy().hasHeightForWidth());
        pbEditEffect4->setSizePolicy(sizePolicy1);
        pbEditEffect4->setStyleSheet(QStringLiteral(""));

        gridLayout_18->addWidget(pbEditEffect4, 0, 0, 1, 1);


        gridLayout_13->addWidget(frameEditEffect4, 0, 2, 1, 1);

        pbEffect4 = new QPushButton(frameEffect4);
        pbEffect4->setObjectName(QStringLiteral("pbEffect4"));
        sizePolicy.setHeightForWidth(pbEffect4->sizePolicy().hasHeightForWidth());
        pbEffect4->setSizePolicy(sizePolicy);
        pbEffect4->setStyleSheet(QStringLiteral(""));

        gridLayout_13->addWidget(pbEffect4, 0, 1, 1, 1);

        pbEffectLink4 = new QPushButton(frameEffect4);
        pbEffectLink4->setObjectName(QStringLiteral("pbEffectLink4"));
        pbEffectLink4->setEnabled(false);
        sizePolicy.setHeightForWidth(pbEffectLink4->sizePolicy().hasHeightForWidth());
        pbEffectLink4->setSizePolicy(sizePolicy);
        pbEffectLink4->setMinimumSize(QSize(57, 0));
        pbEffectLink4->setMaximumSize(QSize(57, 16777215));

        gridLayout_13->addWidget(pbEffectLink4, 0, 3, 1, 1);

        pbOnOffEffect4 = new QPushButton(frameEffect4);
        pbOnOffEffect4->setObjectName(QStringLiteral("pbOnOffEffect4"));
        sizePolicy.setHeightForWidth(pbOnOffEffect4->sizePolicy().hasHeightForWidth());
        pbOnOffEffect4->setSizePolicy(sizePolicy);
        pbOnOffEffect4->setMinimumSize(QSize(60, 0));
        pbOnOffEffect4->setMaximumSize(QSize(60, 16777215));
        pbOnOffEffect4->setCheckable(true);

        gridLayout_13->addWidget(pbOnOffEffect4, 0, 0, 1, 1);


        gridLayout_14->addWidget(frameEffect4, 4, 1, 1, 1);


        gridLayout_3->addWidget(frameEffects, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(130, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);

        frameVolume = new QFrame(frameCentral);
        frameVolume->setObjectName(QStringLiteral("frameVolume"));
        frameVolume->setMinimumSize(QSize(0, 0));
        frameVolume->setMaximumSize(QSize(110, 16777215));
        frameVolume->setFrameShape(QFrame::StyledPanel);
        frameVolume->setFrameShadow(QFrame::Raised);
        gridLayout_19 = new QGridLayout(frameVolume);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        gridLayout_19->setHorizontalSpacing(2);
        gridLayout_19->setVerticalSpacing(0);
        gridLayout_19->setContentsMargins(0, 0, 0, 1);
        frameMFX2 = new QFrame(frameVolume);
        frameMFX2->setObjectName(QStringLiteral("frameMFX2"));
        frameMFX2->setMaximumSize(QSize(16777215, 54));
        frameMFX2->setFrameShape(QFrame::StyledPanel);
        frameMFX2->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frameMFX2);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        spMFX2 = new QSpinBox(frameMFX2);
        spMFX2->setObjectName(QStringLiteral("spMFX2"));
        spMFX2->setMaximumSize(QSize(16777215, 18));
        spMFX2->setFocusPolicy(Qt::NoFocus);
        spMFX2->setAlignment(Qt::AlignCenter);
        spMFX2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spMFX2->setMaximum(100);

        gridLayout_7->addWidget(spMFX2, 0, 0, 1, 1);

        dialMFX2 = new QDial(frameMFX2);
        dialMFX2->setObjectName(QStringLiteral("dialMFX2"));
        dialMFX2->setMinimumSize(QSize(0, 38));
        dialMFX2->setMaximum(100);

        gridLayout_7->addWidget(dialMFX2, 1, 0, 1, 1);


        gridLayout_19->addWidget(frameMFX2, 1, 1, 1, 1);

        frameMFX1 = new QFrame(frameVolume);
        frameMFX1->setObjectName(QStringLiteral("frameMFX1"));
        frameMFX1->setMaximumSize(QSize(16777215, 54));
        frameMFX1->setFrameShape(QFrame::StyledPanel);
        frameMFX1->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frameMFX1);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        spMFX1 = new QSpinBox(frameMFX1);
        spMFX1->setObjectName(QStringLiteral("spMFX1"));
        spMFX1->setMaximumSize(QSize(16777215, 18));
        spMFX1->setFocusPolicy(Qt::NoFocus);
        spMFX1->setAlignment(Qt::AlignCenter);
        spMFX1->setReadOnly(false);
        spMFX1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spMFX1->setMaximum(100);

        gridLayout_2->addWidget(spMFX1, 0, 0, 1, 1);

        dialMFX1 = new QDial(frameMFX1);
        dialMFX1->setObjectName(QStringLiteral("dialMFX1"));
        dialMFX1->setMinimumSize(QSize(38, 38));
        dialMFX1->setMaximum(100);
        dialMFX1->setSliderPosition(0);

        gridLayout_2->addWidget(dialMFX1, 1, 0, 1, 1);


        gridLayout_19->addWidget(frameMFX1, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 209, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_19->addItem(verticalSpacer_3, 0, 0, 1, 2);


        gridLayout_3->addWidget(frameVolume, 0, 4, 1, 1);

        SamplesFrame = new QFrame(frameCentral);
        SamplesFrame->setObjectName(QStringLiteral("SamplesFrame"));
        SamplesFrame->setMaximumSize(QSize(181, 16777215));
        SamplesFrame->setStyleSheet(QStringLiteral(""));
        gridLayout_5 = new QGridLayout(SamplesFrame);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_5->setHorizontalSpacing(0);
        gridLayout_5->setVerticalSpacing(6);
        gridLayout_5->setContentsMargins(0, 1, 0, 0);
        framMultiSample = new QFrame(SamplesFrame);
        framMultiSample->setObjectName(QStringLiteral("framMultiSample"));
        framMultiSample->setMinimumSize(QSize(0, 25));
        framMultiSample->setMaximumSize(QSize(16777215, 25));
        framMultiSample->setFont(font);
        framMultiSample->setStyleSheet(QStringLiteral(""));
        framMultiSample->setFrameShape(QFrame::NoFrame);
        horizontalLayout = new QHBoxLayout(framMultiSample);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lbSection2 = new QLabel(framMultiSample);
        lbSection2->setObjectName(QStringLiteral("lbSection2"));
        lbSection2->setMinimumSize(QSize(165, 24));
        lbSection2->setMaximumSize(QSize(165, 24));
        lbSection2->setFont(font1);
        lbSection2->setStyleSheet(QStringLiteral(""));
        lbSection2->setScaledContents(false);
        lbSection2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbSection2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_5->addWidget(framMultiSample, 0, 0, 1, 1);

        frameSample3 = new QFrame(SamplesFrame);
        frameSample3->setObjectName(QStringLiteral("frameSample3"));
        frameSample3->setMinimumSize(QSize(179, 54));
        frameSample3->setMaximumSize(QSize(179, 54));
        frameSample3->setStyleSheet(QStringLiteral(""));
        gridLayout_8 = new QGridLayout(frameSample3);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(1, 1, 1, 1);
        lbSampleNb3 = new QLabel(frameSample3);
        lbSampleNb3->setObjectName(QStringLiteral("lbSampleNb3"));
        lbSampleNb3->setStyleSheet(QStringLiteral(""));
        lbSampleNb3->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lbSampleNb3, 0, 0, 1, 1);

        lbSampleName3 = new QLabel(frameSample3);
        lbSampleName3->setObjectName(QStringLiteral("lbSampleName3"));
        lbSampleName3->setStyleSheet(QStringLiteral(""));
        lbSampleName3->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lbSampleName3, 1, 0, 1, 2);

        cbEffectLink3 = new QComboBox(frameSample3);
        cbEffectLink3->setObjectName(QStringLiteral("cbEffectLink3"));
        cbEffectLink3->setMaximumSize(QSize(60, 16777215));
        cbEffectLink3->setMaxVisibleItems(3);

        gridLayout_8->addWidget(cbEffectLink3, 0, 1, 1, 1);


        gridLayout_5->addWidget(frameSample3, 5, 0, 1, 1);

        frameSample2 = new QFrame(SamplesFrame);
        frameSample2->setObjectName(QStringLiteral("frameSample2"));
        frameSample2->setMinimumSize(QSize(179, 54));
        frameSample2->setMaximumSize(QSize(179, 54));
        frameSample2->setStyleSheet(QStringLiteral(""));
        gridLayout_6 = new QGridLayout(frameSample2);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(1, 1, 1, 1);
        lbSampleNb2 = new QLabel(frameSample2);
        lbSampleNb2->setObjectName(QStringLiteral("lbSampleNb2"));
        lbSampleNb2->setStyleSheet(QStringLiteral(""));
        lbSampleNb2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lbSampleNb2, 0, 0, 1, 1);

        lbSampleName2 = new QLabel(frameSample2);
        lbSampleName2->setObjectName(QStringLiteral("lbSampleName2"));
        lbSampleName2->setStyleSheet(QStringLiteral(""));
        lbSampleName2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lbSampleName2, 1, 0, 1, 2);

        cbEffectLink2 = new QComboBox(frameSample2);
        cbEffectLink2->setObjectName(QStringLiteral("cbEffectLink2"));
        cbEffectLink2->setMaximumSize(QSize(60, 16777215));
        cbEffectLink2->setMaxVisibleItems(3);

        gridLayout_6->addWidget(cbEffectLink2, 0, 1, 1, 1);


        gridLayout_5->addWidget(frameSample2, 4, 0, 1, 1);

        frameSample1 = new QFrame(SamplesFrame);
        frameSample1->setObjectName(QStringLiteral("frameSample1"));
        frameSample1->setMinimumSize(QSize(179, 54));
        frameSample1->setMaximumSize(QSize(179, 54));
        frameSample1->setStyleSheet(QStringLiteral(""));
        gridLayout_4 = new QGridLayout(frameSample1);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(1, 1, 1, 1);
        lbSampleNb1 = new QLabel(frameSample1);
        lbSampleNb1->setObjectName(QStringLiteral("lbSampleNb1"));
        lbSampleNb1->setStyleSheet(QStringLiteral(""));
        lbSampleNb1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lbSampleNb1, 0, 0, 1, 1);

        lbSampleName1 = new QLabel(frameSample1);
        lbSampleName1->setObjectName(QStringLiteral("lbSampleName1"));
        lbSampleName1->setStyleSheet(QStringLiteral(""));
        lbSampleName1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lbSampleName1, 1, 0, 1, 2);

        cbEffectLink1 = new QComboBox(frameSample1);
        cbEffectLink1->setObjectName(QStringLiteral("cbEffectLink1"));
        cbEffectLink1->setMaximumSize(QSize(60, 16777215));
        cbEffectLink1->setMaxVisibleItems(3);

        gridLayout_4->addWidget(cbEffectLink1, 0, 1, 1, 1);


        gridLayout_5->addWidget(frameSample1, 1, 0, 1, 1);

        frameSample4 = new QFrame(SamplesFrame);
        frameSample4->setObjectName(QStringLiteral("frameSample4"));
        frameSample4->setMinimumSize(QSize(179, 54));
        frameSample4->setMaximumSize(QSize(179, 54));
        frameSample4->setStyleSheet(QStringLiteral(""));
        gridLayout_9 = new QGridLayout(frameSample4);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(1, 1, 1, 1);
        lbSampleNb4 = new QLabel(frameSample4);
        lbSampleNb4->setObjectName(QStringLiteral("lbSampleNb4"));
        lbSampleNb4->setStyleSheet(QStringLiteral(""));
        lbSampleNb4->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(lbSampleNb4, 0, 0, 1, 1);

        lbSampleName4 = new QLabel(frameSample4);
        lbSampleName4->setObjectName(QStringLiteral("lbSampleName4"));
        lbSampleName4->setStyleSheet(QStringLiteral(""));
        lbSampleName4->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(lbSampleName4, 1, 0, 1, 2);

        cbEffectLink4 = new QComboBox(frameSample4);
        cbEffectLink4->setObjectName(QStringLiteral("cbEffectLink4"));
        cbEffectLink4->setMaximumSize(QSize(60, 16777215));
        cbEffectLink4->setMaxVisibleItems(3);

        gridLayout_9->addWidget(cbEffectLink4, 0, 1, 1, 1);


        gridLayout_5->addWidget(frameSample4, 6, 0, 1, 1);


        gridLayout_3->addWidget(SamplesFrame, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 0, 7, 1, 1);

        frameMasterEffect = new QFrame(frameCentral);
        frameMasterEffect->setObjectName(QStringLiteral("frameMasterEffect"));
        frameMasterEffect->setMinimumSize(QSize(400, 0));
        frameMasterEffect->setMaximumSize(QSize(344, 16777215));
        frameMasterEffect->setFrameShape(QFrame::StyledPanel);
        frameMasterEffect->setFrameShadow(QFrame::Raised);
        gridLayout_26 = new QGridLayout(frameMasterEffect);
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        gridLayout_26->setHorizontalSpacing(0);
        gridLayout_26->setContentsMargins(0, 1, 0, 1);
        frameMasterEffect1 = new QFrame(frameMasterEffect);
        frameMasterEffect1->setObjectName(QStringLiteral("frameMasterEffect1"));
        frameMasterEffect1->setMinimumSize(QSize(0, 54));
        frameMasterEffect1->setMaximumSize(QSize(16777215, 54));
        frameMasterEffect1->setStyleSheet(QStringLiteral(""));
        gridLayout_33 = new QGridLayout(frameMasterEffect1);
        gridLayout_33->setSpacing(0);
        gridLayout_33->setObjectName(QStringLiteral("gridLayout_33"));
        gridLayout_33->setContentsMargins(1, 1, 1, 1);
        pbMasterEffectLink1 = new QPushButton(frameMasterEffect1);
        pbMasterEffectLink1->setObjectName(QStringLiteral("pbMasterEffectLink1"));
        sizePolicy.setHeightForWidth(pbMasterEffectLink1->sizePolicy().hasHeightForWidth());
        pbMasterEffectLink1->setSizePolicy(sizePolicy);
        pbMasterEffectLink1->setMinimumSize(QSize(57, 0));
        pbMasterEffectLink1->setMaximumSize(QSize(57, 16777215));
        pbMasterEffectLink1->setCheckable(true);

        gridLayout_33->addWidget(pbMasterEffectLink1, 0, 3, 1, 1);

        frameMasterEditEffect1 = new QFrame(frameMasterEffect1);
        frameMasterEditEffect1->setObjectName(QStringLiteral("frameMasterEditEffect1"));
        frameMasterEditEffect1->setMinimumSize(QSize(60, 0));
        frameMasterEditEffect1->setMaximumSize(QSize(60, 16777215));
        frameMasterEditEffect1->setStyleSheet(QStringLiteral(""));
        frameMasterEditEffect1->setFrameShape(QFrame::StyledPanel);
        frameMasterEditEffect1->setFrameShadow(QFrame::Raised);
        gridLayout_35 = new QGridLayout(frameMasterEditEffect1);
        gridLayout_35->setSpacing(0);
        gridLayout_35->setObjectName(QStringLiteral("gridLayout_35"));
        gridLayout_35->setContentsMargins(0, 0, 1, 0);
        pbMasterEditEffect1 = new QPushButton(frameMasterEditEffect1);
        pbMasterEditEffect1->setObjectName(QStringLiteral("pbMasterEditEffect1"));
        sizePolicy1.setHeightForWidth(pbMasterEditEffect1->sizePolicy().hasHeightForWidth());
        pbMasterEditEffect1->setSizePolicy(sizePolicy1);
        pbMasterEditEffect1->setStyleSheet(QStringLiteral(""));

        gridLayout_35->addWidget(pbMasterEditEffect1, 0, 0, 1, 1);


        gridLayout_33->addWidget(frameMasterEditEffect1, 0, 2, 1, 1);

        pbMasterEffect1 = new QPushButton(frameMasterEffect1);
        pbMasterEffect1->setObjectName(QStringLiteral("pbMasterEffect1"));
        sizePolicy.setHeightForWidth(pbMasterEffect1->sizePolicy().hasHeightForWidth());
        pbMasterEffect1->setSizePolicy(sizePolicy);
        pbMasterEffect1->setStyleSheet(QStringLiteral(""));

        gridLayout_33->addWidget(pbMasterEffect1, 0, 1, 1, 1);

        pbOnOffMasterEffect1 = new QPushButton(frameMasterEffect1);
        pbOnOffMasterEffect1->setObjectName(QStringLiteral("pbOnOffMasterEffect1"));
        sizePolicy.setHeightForWidth(pbOnOffMasterEffect1->sizePolicy().hasHeightForWidth());
        pbOnOffMasterEffect1->setSizePolicy(sizePolicy);
        pbOnOffMasterEffect1->setMinimumSize(QSize(60, 0));
        pbOnOffMasterEffect1->setMaximumSize(QSize(60, 16777215));
        pbOnOffMasterEffect1->setCheckable(true);

        gridLayout_33->addWidget(pbOnOffMasterEffect1, 0, 0, 1, 1);


        gridLayout_26->addWidget(frameMasterEffect1, 1, 0, 1, 1);

        frameMasterEffect2 = new QFrame(frameMasterEffect);
        frameMasterEffect2->setObjectName(QStringLiteral("frameMasterEffect2"));
        frameMasterEffect2->setMinimumSize(QSize(0, 54));
        frameMasterEffect2->setMaximumSize(QSize(16777215, 54));
        frameMasterEffect2->setStyleSheet(QStringLiteral(""));
        gridLayout_30 = new QGridLayout(frameMasterEffect2);
        gridLayout_30->setSpacing(0);
        gridLayout_30->setObjectName(QStringLiteral("gridLayout_30"));
        gridLayout_30->setContentsMargins(1, 1, 1, 1);
        frameMasterEditEffect2 = new QFrame(frameMasterEffect2);
        frameMasterEditEffect2->setObjectName(QStringLiteral("frameMasterEditEffect2"));
        frameMasterEditEffect2->setMinimumSize(QSize(60, 0));
        frameMasterEditEffect2->setMaximumSize(QSize(60, 16777215));
        frameMasterEditEffect2->setStyleSheet(QStringLiteral(""));
        frameMasterEditEffect2->setFrameShape(QFrame::StyledPanel);
        frameMasterEditEffect2->setFrameShadow(QFrame::Raised);
        gridLayout_32 = new QGridLayout(frameMasterEditEffect2);
        gridLayout_32->setSpacing(0);
        gridLayout_32->setObjectName(QStringLiteral("gridLayout_32"));
        gridLayout_32->setContentsMargins(0, 0, 0, 0);
        pbMasterEditEffect2 = new QPushButton(frameMasterEditEffect2);
        pbMasterEditEffect2->setObjectName(QStringLiteral("pbMasterEditEffect2"));
        sizePolicy1.setHeightForWidth(pbMasterEditEffect2->sizePolicy().hasHeightForWidth());
        pbMasterEditEffect2->setSizePolicy(sizePolicy1);
        pbMasterEditEffect2->setStyleSheet(QStringLiteral(""));

        gridLayout_32->addWidget(pbMasterEditEffect2, 0, 0, 1, 1);


        gridLayout_30->addWidget(frameMasterEditEffect2, 0, 2, 1, 1);

        pbMasterEffectLink2 = new QPushButton(frameMasterEffect2);
        pbMasterEffectLink2->setObjectName(QStringLiteral("pbMasterEffectLink2"));
        sizePolicy.setHeightForWidth(pbMasterEffectLink2->sizePolicy().hasHeightForWidth());
        pbMasterEffectLink2->setSizePolicy(sizePolicy);
        pbMasterEffectLink2->setMinimumSize(QSize(57, 0));
        pbMasterEffectLink2->setMaximumSize(QSize(57, 16777215));
        pbMasterEffectLink2->setCheckable(true);

        gridLayout_30->addWidget(pbMasterEffectLink2, 0, 3, 1, 1);

        pbMasterEffect2 = new QPushButton(frameMasterEffect2);
        pbMasterEffect2->setObjectName(QStringLiteral("pbMasterEffect2"));
        sizePolicy.setHeightForWidth(pbMasterEffect2->sizePolicy().hasHeightForWidth());
        pbMasterEffect2->setSizePolicy(sizePolicy);
        pbMasterEffect2->setStyleSheet(QStringLiteral(""));

        gridLayout_30->addWidget(pbMasterEffect2, 0, 1, 1, 1);

        pbOnOffMasterEffect2 = new QPushButton(frameMasterEffect2);
        pbOnOffMasterEffect2->setObjectName(QStringLiteral("pbOnOffMasterEffect2"));
        sizePolicy.setHeightForWidth(pbOnOffMasterEffect2->sizePolicy().hasHeightForWidth());
        pbOnOffMasterEffect2->setSizePolicy(sizePolicy);
        pbOnOffMasterEffect2->setMinimumSize(QSize(60, 0));
        pbOnOffMasterEffect2->setMaximumSize(QSize(60, 16777215));
        pbOnOffMasterEffect2->setCheckable(true);

        gridLayout_30->addWidget(pbOnOffMasterEffect2, 0, 0, 1, 1);


        gridLayout_26->addWidget(frameMasterEffect2, 3, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_26->addItem(verticalSpacer_6, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_26->addItem(verticalSpacer_2, 2, 0, 1, 1);

        frameMasterEffectSection = new QFrame(frameMasterEffect);
        frameMasterEffectSection->setObjectName(QStringLiteral("frameMasterEffectSection"));
        frameMasterEffectSection->setMinimumSize(QSize(0, 25));
        frameMasterEffectSection->setMaximumSize(QSize(16777215, 25));
        frameMasterEffectSection->setFont(font);
        frameMasterEffectSection->setStyleSheet(QStringLiteral(""));
        frameMasterEffectSection->setFrameShape(QFrame::NoFrame);
        horizontalLayout_5 = new QHBoxLayout(frameMasterEffectSection);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        lbSection3 = new QLabel(frameMasterEffectSection);
        lbSection3->setObjectName(QStringLiteral("lbSection3"));
        lbSection3->setMinimumSize(QSize(165, 24));
        lbSection3->setMaximumSize(QSize(165, 24));
        lbSection3->setFont(font1);
        lbSection3->setStyleSheet(QStringLiteral(""));
        lbSection3->setScaledContents(false);
        lbSection3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lbSection3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        gridLayout_26->addWidget(frameMasterEffectSection, 0, 0, 1, 1);

        frameMasterEffect3 = new QFrame(frameMasterEffect);
        frameMasterEffect3->setObjectName(QStringLiteral("frameMasterEffect3"));
        frameMasterEffect3->setMinimumSize(QSize(0, 54));
        frameMasterEffect3->setMaximumSize(QSize(16777215, 54));
        frameMasterEffect3->setStyleSheet(QStringLiteral(""));
        gridLayout_36 = new QGridLayout(frameMasterEffect3);
        gridLayout_36->setSpacing(0);
        gridLayout_36->setObjectName(QStringLiteral("gridLayout_36"));
        gridLayout_36->setContentsMargins(1, 1, 1, 1);
        pbMasterEffect3 = new QPushButton(frameMasterEffect3);
        pbMasterEffect3->setObjectName(QStringLiteral("pbMasterEffect3"));
        pbMasterEffect3->setEnabled(true);
        sizePolicy.setHeightForWidth(pbMasterEffect3->sizePolicy().hasHeightForWidth());
        pbMasterEffect3->setSizePolicy(sizePolicy);
        pbMasterEffect3->setStyleSheet(QStringLiteral(""));

        gridLayout_36->addWidget(pbMasterEffect3, 0, 1, 1, 1);

        pbOnOffMasterEffect3 = new QPushButton(frameMasterEffect3);
        pbOnOffMasterEffect3->setObjectName(QStringLiteral("pbOnOffMasterEffect3"));
        sizePolicy.setHeightForWidth(pbOnOffMasterEffect3->sizePolicy().hasHeightForWidth());
        pbOnOffMasterEffect3->setSizePolicy(sizePolicy);
        pbOnOffMasterEffect3->setMinimumSize(QSize(60, 0));
        pbOnOffMasterEffect3->setMaximumSize(QSize(60, 16777215));
        pbOnOffMasterEffect3->setCheckable(true);

        gridLayout_36->addWidget(pbOnOffMasterEffect3, 0, 0, 1, 1);

        frameMasterEditEffect3 = new QFrame(frameMasterEffect3);
        frameMasterEditEffect3->setObjectName(QStringLiteral("frameMasterEditEffect3"));
        frameMasterEditEffect3->setMinimumSize(QSize(60, 0));
        frameMasterEditEffect3->setMaximumSize(QSize(60, 16777215));
        frameMasterEditEffect3->setStyleSheet(QStringLiteral(""));
        frameMasterEditEffect3->setFrameShape(QFrame::StyledPanel);
        frameMasterEditEffect3->setFrameShadow(QFrame::Raised);
        gridLayout_37 = new QGridLayout(frameMasterEditEffect3);
        gridLayout_37->setSpacing(0);
        gridLayout_37->setObjectName(QStringLiteral("gridLayout_37"));
        gridLayout_37->setContentsMargins(0, 0, 0, 0);
        pbMasterEditEffect3 = new QPushButton(frameMasterEditEffect3);
        pbMasterEditEffect3->setObjectName(QStringLiteral("pbMasterEditEffect3"));
        sizePolicy1.setHeightForWidth(pbMasterEditEffect3->sizePolicy().hasHeightForWidth());
        pbMasterEditEffect3->setSizePolicy(sizePolicy1);
        pbMasterEditEffect3->setStyleSheet(QStringLiteral(""));

        gridLayout_37->addWidget(pbMasterEditEffect3, 0, 0, 1, 1);


        gridLayout_36->addWidget(frameMasterEditEffect3, 0, 2, 1, 1);

        spMasterEffect3 = new QSpinBox(frameMasterEffect3);
        spMasterEffect3->setObjectName(QStringLiteral("spMasterEffect3"));
        sizePolicy.setHeightForWidth(spMasterEffect3->sizePolicy().hasHeightForWidth());
        spMasterEffect3->setSizePolicy(sizePolicy);
        spMasterEffect3->setMinimumSize(QSize(57, 0));
        spMasterEffect3->setMaximumSize(QSize(57, 16777215));
        spMasterEffect3->setFocusPolicy(Qt::NoFocus);
        spMasterEffect3->setFrame(true);
        spMasterEffect3->setAlignment(Qt::AlignCenter);
        spMasterEffect3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spMasterEffect3->setMaximum(100);

        gridLayout_36->addWidget(spMasterEffect3, 0, 3, 1, 1);


        gridLayout_26->addWidget(frameMasterEffect3, 5, 0, 1, 1);


        gridLayout_3->addWidget(frameMasterEffect, 0, 6, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 5, 1, 1);


        gridLayout->addWidget(frameCentral, 0, 0, 1, 1);

        QWidget::setTabOrder(cbEffectLink1, cbEffectLink2);
        QWidget::setTabOrder(cbEffectLink2, cbEffectLink3);
        QWidget::setTabOrder(cbEffectLink3, cbEffectLink4);
        QWidget::setTabOrder(cbEffectLink4, pbOnOffEffect1);
        QWidget::setTabOrder(pbOnOffEffect1, pbOnOffEffect2);
        QWidget::setTabOrder(pbOnOffEffect2, pbOnOffEffect3);
        QWidget::setTabOrder(pbOnOffEffect3, pbOnOffEffect4);
        QWidget::setTabOrder(pbOnOffEffect4, pbEffect1);
        QWidget::setTabOrder(pbEffect1, pbEffect2);
        QWidget::setTabOrder(pbEffect2, pbEffect3);
        QWidget::setTabOrder(pbEffect3, pbEffect4);
        QWidget::setTabOrder(pbEffect4, pbEditEffect1);
        QWidget::setTabOrder(pbEditEffect1, pbEditEffect2);
        QWidget::setTabOrder(pbEditEffect2, pbEditEffect3);
        QWidget::setTabOrder(pbEditEffect3, pbEditEffect4);
        QWidget::setTabOrder(pbEditEffect4, pbEffectLink1);
        QWidget::setTabOrder(pbEffectLink1, pbEffectLink2);
        QWidget::setTabOrder(pbEffectLink2, pbEffectLink3);
        QWidget::setTabOrder(pbEffectLink3, pbEffectLink4);
        QWidget::setTabOrder(pbEffectLink4, pbOnOffMasterEffect1);
        QWidget::setTabOrder(pbOnOffMasterEffect1, pbOnOffMasterEffect2);
        QWidget::setTabOrder(pbOnOffMasterEffect2, pbOnOffMasterEffect3);
        QWidget::setTabOrder(pbOnOffMasterEffect3, pbMasterEffect1);
        QWidget::setTabOrder(pbMasterEffect1, pbMasterEffect2);
        QWidget::setTabOrder(pbMasterEffect2, pbMasterEffect3);
        QWidget::setTabOrder(pbMasterEffect3, pbMasterEditEffect1);
        QWidget::setTabOrder(pbMasterEditEffect1, pbMasterEditEffect2);
        QWidget::setTabOrder(pbMasterEditEffect2, pbMasterEditEffect3);
        QWidget::setTabOrder(pbMasterEditEffect3, pbMasterEffectLink1);
        QWidget::setTabOrder(pbMasterEffectLink1, pbMasterEffectLink2);
        QWidget::setTabOrder(pbMasterEffectLink2, dialMFX1);
        QWidget::setTabOrder(dialMFX1, dialMFX2);

        retranslateUi(EffectsWidget);

        QMetaObject::connectSlotsByName(EffectsWidget);
    } // setupUi

    void retranslateUi(QWidget *EffectsWidget)
    {
        EffectsWidget->setWindowTitle(QApplication::translate("EffectsWidget", "Form", 0));
        pbEffect1->setText(QApplication::translate("EffectsWidget", "Chorus", 0));
        pbOnOffEffect1->setText(QApplication::translate("EffectsWidget", "IFX1", 0));
        pbEditEffect1->setText(QApplication::translate("EffectsWidget", "EDIT", 0));
        pbEffectLink1->setText(QApplication::translate("EffectsWidget", "LINK", 0));
        pbOnOffEffect2->setText(QApplication::translate("EffectsWidget", "IFX2", 0));
        pbEffectLink2->setText(QApplication::translate("EffectsWidget", "LINK", 0));
        pbEditEffect2->setText(QApplication::translate("EffectsWidget", "EDIT", 0));
        pbEffect2->setText(QApplication::translate("EffectsWidget", "Compressor", 0));
        lbSection1->setText(QApplication::translate("EffectsWidget", "EFFECTS", 0));
        pbEffect3->setText(QApplication::translate("EffectsWidget", "Mediun Delay", 0));
        pbEffectLink3->setText(QApplication::translate("EffectsWidget", "LINK", 0));
        pbEditEffect3->setText(QApplication::translate("EffectsWidget", "EDIT", 0));
        pbOnOffEffect3->setText(QApplication::translate("EffectsWidget", "IFX3", 0));
        pbEditEffect4->setText(QApplication::translate("EffectsWidget", "EDIT", 0));
        pbEffect4->setText(QApplication::translate("EffectsWidget", "Graphic Equalizer", 0));
        pbEffectLink4->setText(QApplication::translate("EffectsWidget", "LINK", 0));
        pbOnOffEffect4->setText(QApplication::translate("EffectsWidget", "IFX4", 0));
        lbSection2->setText(QApplication::translate("EffectsWidget", "MULTISAMPLES", 0));
        lbSampleNb3->setText(QApplication::translate("EffectsWidget", "3", 0));
        lbSampleName3->setText(QApplication::translate("EffectsWidget", "String Ensemble", 0));
        lbSampleNb2->setText(QApplication::translate("EffectsWidget", "2", 0));
        lbSampleName2->setText(QApplication::translate("EffectsWidget", "Piano Strings", 0));
        lbSampleNb1->setText(QApplication::translate("EffectsWidget", "1", 0));
        lbSampleName1->setText(QApplication::translate("EffectsWidget", "White Grand Piano", 0));
        lbSampleNb4->setText(QApplication::translate("EffectsWidget", "4", 0));
        lbSampleName4->setText(QApplication::translate("EffectsWidget", "Analog Waves", 0));
        pbMasterEffectLink1->setText(QApplication::translate("EffectsWidget", "LINK", 0));
        pbMasterEditEffect1->setText(QApplication::translate("EffectsWidget", "EDIT", 0));
        pbMasterEffect1->setText(QApplication::translate("EffectsWidget", "Chorus", 0));
        pbOnOffMasterEffect1->setText(QApplication::translate("EffectsWidget", "MFX1", 0));
        pbMasterEditEffect2->setText(QApplication::translate("EffectsWidget", "EDIT", 0));
        pbMasterEffectLink2->setText(QApplication::translate("EffectsWidget", "LINK", 0));
        pbMasterEffect2->setText(QApplication::translate("EffectsWidget", "Compressor", 0));
        pbOnOffMasterEffect2->setText(QApplication::translate("EffectsWidget", "MFX2", 0));
        lbSection3->setText(QApplication::translate("EffectsWidget", "MASTER EFFECTS", 0));
        pbMasterEffect3->setText(QApplication::translate("EffectsWidget", "Parametric Equalizer", 0));
        pbOnOffMasterEffect3->setText(QApplication::translate("EffectsWidget", "MFX3", 0));
        pbMasterEditEffect3->setText(QApplication::translate("EffectsWidget", "EDIT", 0));
    } // retranslateUi

};

namespace Ui {
    class EffectsWidget: public Ui_EffectsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EFFECTSWIDGET_H
