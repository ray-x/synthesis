/********************************************************************************
** Form generated from reading UI file 'splitbankform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLITBANKFORM_H
#define UI_SPLITBANKFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "verticallevelbar.h"

QT_BEGIN_NAMESPACE

class Ui_SplitBankForm
{
public:
    QGridLayout *gridLayout_8;
    QFrame *mainFrame;
    QGridLayout *gridLayout_9;
    QFrame *frameTop;
    QGridLayout *gridLayout_7;
    QPushButton *pbBankB;
    QPushButton *pbBankA;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout;
    QLabel *lbWidgetTitle;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pbFactory;
    QPushButton *pbBankD;
    QPushButton *pbBankC;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbCategory;
    QLabel *lbCategoryNb;
    QLabel *lbCategoryName;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbSoundSplit;
    QPushButton *pbPitch;
    QPushButton *pbFilterEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbEqualizer;
    QPushButton *pbEffects;
    QGridLayout *gridLayout;
    QFrame *frameMultiSample;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lbSectionName3;
    QLabel *lbSectionName2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_14;
    QGridLayout *gridLayout_10;
    VerticalLevelBar *wgMainLevel;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_15;
    VerticalLevelBar *widget_3;
    VerticalLevelBar *widget_2;
    QSpacerItem *horizontalSpacer_16;
    VerticalLevelBar *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_17;
    QLabel *lbSectionName1;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *verticalSpacer;
    QFrame *frameSample2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbSampleNb2;
    QCheckBox *checkBox_2;
    QPushButton *pbSample2;
    QSpacerItem *horizontalSpacer_5;
    QFrame *soundPitchFrame2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pbOCTPlus2;
    QPushButton *pbKeyMinus2;
    QPushButton *pbKeyPlus2;
    QPushButton *pbOCTMinus2;
    QFrame *frameSample3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbSampleNb3;
    QCheckBox *checkBox_3;
    QPushButton *pbSample3;
    QSpacerItem *horizontalSpacer_6;
    QFrame *soundPitchFrame3;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pbKeyMinus3;
    QPushButton *pbKeyPlus3;
    QPushButton *pbOCTMinus3;
    QPushButton *pbOCTPlus3;
    QFrame *frameSample4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbSampleNb4;
    QCheckBox *checkBox_4;
    QPushButton *pbSample4;
    QSpacerItem *horizontalSpacer_7;
    QFrame *soundPitchFrame4;
    QGridLayout *gridLayout_6;
    QPushButton *pbKeyMinus4;
    QPushButton *pbKeyPlus4;
    QPushButton *pbOCTPlus4;
    QPushButton *pbOCTMinus4;
    QSpacerItem *horizontalSpacer_11;
    QFrame *frameSample1;
    QHBoxLayout *hbLayout;
    QLabel *lbSampleNb1;
    QCheckBox *checkBox;
    QPushButton *pbSample1;
    QSpacerItem *horizontalSpacer_4;
    QFrame *soundPitchFrame1;
    QGridLayout *gridLayout_2;
    QPushButton *pbKeyPlus1;
    QPushButton *pbKeyMinus1;
    QPushButton *pbOCTMinus1;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pbOCTPlus1;

    void setupUi(QWidget *SplitBankForm)
    {
        if (SplitBankForm->objectName().isEmpty())
            SplitBankForm->setObjectName(QStringLiteral("SplitBankForm"));
        SplitBankForm->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SplitBankForm->sizePolicy().hasHeightForWidth());
        SplitBankForm->setSizePolicy(sizePolicy);
        SplitBankForm->setMinimumSize(QSize(800, 480));
        SplitBankForm->setMaximumSize(QSize(800, 480));
        SplitBankForm->setStyleSheet(QLatin1String("QWidget{\n"
"    font-family : \"Open Sans\";\n"
"    font-weight : 550;\n"
"    font-size:14pt;\n"
"}\n"
"\n"
"#mainFrame{\n"
"    background-color : qlineargradient(spread:reflect, x1:0, y1:0.006, x2:0, y2:1, stop:0 rgba(223, 223, 223, 255), stop:1 rgba(159, 159, 159, 255));\n"
"border: 2px solid white;\n"
"}\n"
"\n"
"QPushButton, #pbSave, #pbCancel, #pbSelect{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"border: 1px solid white;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"border: 1px solid white;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:focus{ background-color: rgb(239, 159, 31);}\n"
"\n"
"QPushButton:focus:selected{ background-color: rgb(239, 159, 31);}\n"
"\n"
"\n"
"#lbWidgetTitle{\n"
"    border: 1px solid black;\n"
"    background-color:rgb(16, 97, 114);\n"
""
                        "    color: white;\n"
"}\n"
"\n"
"#lbCategoryName{\n"
"    border: 1px solid black;\n"
"    background-color:rgb(16, 97, 114);\n"
"    color: white;\n"
"    padding-left: 10px;\n"
"}\n"
"\n"
"#lbCategoryNb{\n"
"border: 1px solid transparent;\n"
"border-bottom: 1px solid black;\n"
"border-top: 1px solid black;\n"
"background-color:rgb(16, 97, 114);\n"
"color: white;\n"
"}\n"
"\n"
"#lbCategory{\n"
"    border: 1px solid white;\n"
"    background-color:rgb(49, 51, 48);\n"
"    color: white;\n"
"}\n"
"\n"
"#lbSectionName1, #lbSectionName2, #lbSectionName3{\n"
"border: 1px solid black;\n"
"background-color:rgb(77, 79, 78);\n"
"color: white;\n"
"font-size: 12pt;\n"
"\n"
"}\n"
"\n"
"#lbSampleNb1, #lbSampleNb2, #lbSampleNb3, #lbSampleNb4{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"border: 1px solid white;\n"
"color: black;\n"
"}\n"
"\n"
"#pbSample1, #pbSample2, #pbSample3, #pbSample4{\n"
"background-color:qlineargradien"
                        "t(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"border: 1px solid white;\n"
"color: black;\n"
"text-align: left;\n"
"padding-left:20px;\n"
"}\n"
"\n"
"#pbKeyMinus1, #pbKeyPlus1, #pbOCTMinus1, #pbOCTPlus1{\n"
"	background-color:rgb(16, 97, 114);\n"
"border: 1px solid black;\n"
"color: white\n"
"}\n"
"\n"
"#pbKeyMinus2, #pbKeyPlus2, #pbOCTMinus2, #pbOCTPlus2{\n"
"background-color:rgb(16, 97, 114);\n"
"border: 1px solid black;\n"
"color: white\n"
"}\n"
"\n"
"#pbKeyMinus3, #pbKeyPlus3, #pbOCTMinus3, #pbOCTPlus3{\n"
"background-color:rgb(16, 97, 114);\n"
"border: 1px solid black;\n"
"color: white\n"
"}\n"
"\n"
"#pbKeyMinus4, #pbKeyPlus4, #pbOCTMinus4, #pbOCTPlus4{\n"
"background-color:rgb(16, 97, 114);\n"
"border: 1px solid black;\n"
"color: white\n"
"} \n"
"\n"
"QCheckBox{\n"
"    background-color    : transparent;\n"
"	border:none;\n"
"    outline:none;\n"
"border-bottom: 1px solid white;\n"
"border-top: 1px solid white;\n"
"}\n"
"\n"
"QCheckBox::indica"
                        "tor { \n"
"    width               : 36px; \n"
"    height              : 52px; \n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color : rgb(202, 36, 36);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color : rgb(84, 189, 58);\n"
"}\n"
""));
        gridLayout_8 = new QGridLayout(SplitBankForm);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(SplitBankForm);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainFrame->sizePolicy().hasHeightForWidth());
        mainFrame->setSizePolicy(sizePolicy1);
        mainFrame->setMinimumSize(QSize(800, 480));
        mainFrame->setMaximumSize(QSize(800, 480));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(68);
        mainFrame->setFont(font);
        mainFrame->setStyleSheet(QStringLiteral(""));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(mainFrame);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        frameTop = new QFrame(mainFrame);
        frameTop->setObjectName(QStringLiteral("frameTop"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frameTop->sizePolicy().hasHeightForWidth());
        frameTop->setSizePolicy(sizePolicy2);
        frameTop->setMinimumSize(QSize(0, 58));
        frameTop->setMaximumSize(QSize(16777215, 58));
        frameTop->setStyleSheet(QStringLiteral(""));
        gridLayout_7 = new QGridLayout(frameTop);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(8);
        gridLayout_7->setVerticalSpacing(0);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        pbBankB = new QPushButton(frameTop);
        pbBankB->setObjectName(QStringLiteral("pbBankB"));
        sizePolicy.setHeightForWidth(pbBankB->sizePolicy().hasHeightForWidth());
        pbBankB->setSizePolicy(sizePolicy);
        pbBankB->setMinimumSize(QSize(102, 55));
        pbBankB->setMaximumSize(QSize(102, 55));
        pbBankB->setFont(font);
        pbBankB->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbBankB, 0, 3, 1, 1);

        pbBankA = new QPushButton(frameTop);
        pbBankA->setObjectName(QStringLiteral("pbBankA"));
        sizePolicy.setHeightForWidth(pbBankA->sizePolicy().hasHeightForWidth());
        pbBankA->setSizePolicy(sizePolicy);
        pbBankA->setMinimumSize(QSize(102, 55));
        pbBankA->setMaximumSize(QSize(102, 55));
        pbBankA->setFont(font);
        pbBankA->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbBankA, 0, 2, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_12, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lbWidgetTitle = new QLabel(frameTop);
        lbWidgetTitle->setObjectName(QStringLiteral("lbWidgetTitle"));
        lbWidgetTitle->setMinimumSize(QSize(180, 30));
        lbWidgetTitle->setMaximumSize(QSize(180, 30));
        lbWidgetTitle->setFont(font);
        lbWidgetTitle->setStyleSheet(QStringLiteral(""));
        lbWidgetTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbWidgetTitle);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        gridLayout_7->addLayout(verticalLayout, 0, 0, 1, 1);

        pbFactory = new QPushButton(frameTop);
        pbFactory->setObjectName(QStringLiteral("pbFactory"));
        sizePolicy.setHeightForWidth(pbFactory->sizePolicy().hasHeightForWidth());
        pbFactory->setSizePolicy(sizePolicy);
        pbFactory->setMinimumSize(QSize(102, 55));
        pbFactory->setMaximumSize(QSize(102, 55));
        pbFactory->setFont(font);
        pbFactory->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbFactory, 0, 9, 1, 1);

        pbBankD = new QPushButton(frameTop);
        pbBankD->setObjectName(QStringLiteral("pbBankD"));
        sizePolicy.setHeightForWidth(pbBankD->sizePolicy().hasHeightForWidth());
        pbBankD->setSizePolicy(sizePolicy);
        pbBankD->setMinimumSize(QSize(102, 55));
        pbBankD->setMaximumSize(QSize(102, 55));
        pbBankD->setFont(font);
        pbBankD->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbBankD, 0, 5, 1, 1);

        pbBankC = new QPushButton(frameTop);
        pbBankC->setObjectName(QStringLiteral("pbBankC"));
        sizePolicy.setHeightForWidth(pbBankC->sizePolicy().hasHeightForWidth());
        pbBankC->setSizePolicy(sizePolicy);
        pbBankC->setMinimumSize(QSize(102, 55));
        pbBankC->setMaximumSize(QSize(102, 55));
        pbBankC->setFont(font);
        pbBankC->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbBankC, 0, 4, 1, 1);


        gridLayout_9->addWidget(frameTop, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbCategory = new QLabel(mainFrame);
        lbCategory->setObjectName(QStringLiteral("lbCategory"));
        lbCategory->setMinimumSize(QSize(130, 42));
        lbCategory->setMaximumSize(QSize(130, 42));
        lbCategory->setFont(font);
        lbCategory->setStyleSheet(QStringLiteral(""));
        lbCategory->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbCategory);

        lbCategoryNb = new QLabel(mainFrame);
        lbCategoryNb->setObjectName(QStringLiteral("lbCategoryNb"));
        lbCategoryNb->setMinimumSize(QSize(55, 42));
        lbCategoryNb->setMaximumSize(QSize(55, 42));
        lbCategoryNb->setFont(font);
        lbCategoryNb->setStyleSheet(QStringLiteral(""));
        lbCategoryNb->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbCategoryNb);

        lbCategoryName = new QLabel(mainFrame);
        lbCategoryName->setObjectName(QStringLiteral("lbCategoryName"));
        sizePolicy2.setHeightForWidth(lbCategoryName->sizePolicy().hasHeightForWidth());
        lbCategoryName->setSizePolicy(sizePolicy2);
        lbCategoryName->setMinimumSize(QSize(0, 42));
        lbCategoryName->setMaximumSize(QSize(16777215, 42));
        lbCategoryName->setFont(font);
        lbCategoryName->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(lbCategoryName);


        gridLayout_9->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pbSoundSplit = new QPushButton(mainFrame);
        pbSoundSplit->setObjectName(QStringLiteral("pbSoundSplit"));
        sizePolicy.setHeightForWidth(pbSoundSplit->sizePolicy().hasHeightForWidth());
        pbSoundSplit->setSizePolicy(sizePolicy);
        pbSoundSplit->setMinimumSize(QSize(126, 58));
        pbSoundSplit->setMaximumSize(QSize(126, 58));
        pbSoundSplit->setFont(font);
        pbSoundSplit->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbSoundSplit);

        pbPitch = new QPushButton(mainFrame);
        pbPitch->setObjectName(QStringLiteral("pbPitch"));
        sizePolicy.setHeightForWidth(pbPitch->sizePolicy().hasHeightForWidth());
        pbPitch->setSizePolicy(sizePolicy);
        pbPitch->setMinimumSize(QSize(126, 58));
        pbPitch->setMaximumSize(QSize(126, 58));
        pbPitch->setFont(font);
        pbPitch->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbPitch);

        pbFilterEdit = new QPushButton(mainFrame);
        pbFilterEdit->setObjectName(QStringLiteral("pbFilterEdit"));
        sizePolicy.setHeightForWidth(pbFilterEdit->sizePolicy().hasHeightForWidth());
        pbFilterEdit->setSizePolicy(sizePolicy);
        pbFilterEdit->setMinimumSize(QSize(126, 58));
        pbFilterEdit->setMaximumSize(QSize(126, 58));
        pbFilterEdit->setFont(font);
        pbFilterEdit->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbFilterEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pbEqualizer = new QPushButton(mainFrame);
        pbEqualizer->setObjectName(QStringLiteral("pbEqualizer"));
        sizePolicy.setHeightForWidth(pbEqualizer->sizePolicy().hasHeightForWidth());
        pbEqualizer->setSizePolicy(sizePolicy);
        pbEqualizer->setMinimumSize(QSize(126, 58));
        pbEqualizer->setMaximumSize(QSize(126, 58));
        pbEqualizer->setFont(font);
        pbEqualizer->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbEqualizer);

        pbEffects = new QPushButton(mainFrame);
        pbEffects->setObjectName(QStringLiteral("pbEffects"));
        sizePolicy.setHeightForWidth(pbEffects->sizePolicy().hasHeightForWidth());
        pbEffects->setSizePolicy(sizePolicy);
        pbEffects->setMinimumSize(QSize(126, 58));
        pbEffects->setMaximumSize(QSize(126, 58));
        pbEffects->setFont(font);
        pbEffects->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbEffects);


        gridLayout_9->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(-1, -1, -1, 0);
        frameMultiSample = new QFrame(mainFrame);
        frameMultiSample->setObjectName(QStringLiteral("frameMultiSample"));
        frameMultiSample->setMaximumSize(QSize(16777215, 32));
        frameMultiSample->setStyleSheet(QStringLiteral("border: 1px solid transparent;"));
        frameMultiSample->setFrameShape(QFrame::NoFrame);
        gridLayout_4 = new QGridLayout(frameMultiSample);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(0, 1, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        lbSectionName3 = new QLabel(frameMultiSample);
        lbSectionName3->setObjectName(QStringLiteral("lbSectionName3"));
        lbSectionName3->setMinimumSize(QSize(165, 24));
        lbSectionName3->setMaximumSize(QSize(165, 24));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(68);
        lbSectionName3->setFont(font1);
        lbSectionName3->setStyleSheet(QStringLiteral(""));
        lbSectionName3->setScaledContents(false);
        lbSectionName3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lbSectionName3, 0, 1, 1, 1);

        lbSectionName2 = new QLabel(frameMultiSample);
        lbSectionName2->setObjectName(QStringLiteral("lbSectionName2"));
        sizePolicy.setHeightForWidth(lbSectionName2->sizePolicy().hasHeightForWidth());
        lbSectionName2->setSizePolicy(sizePolicy);
        lbSectionName2->setMinimumSize(QSize(140, 24));
        lbSectionName2->setMaximumSize(QSize(140, 24));
        lbSectionName2->setFont(font1);
        lbSectionName2->setStyleSheet(QStringLiteral(""));
        lbSectionName2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lbSectionName2, 0, 3, 1, 1);


        gridLayout->addWidget(frameMultiSample, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 0, 1, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setHorizontalSpacing(0);
        gridLayout_10->setVerticalSpacing(7);
        gridLayout_10->setContentsMargins(-1, 2, -1, -1);
        wgMainLevel = new VerticalLevelBar(mainFrame);
        wgMainLevel->setObjectName(QStringLiteral("wgMainLevel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(wgMainLevel->sizePolicy().hasHeightForWidth());
        wgMainLevel->setSizePolicy(sizePolicy3);
        wgMainLevel->setMinimumSize(QSize(28, 0));
        wgMainLevel->setMaximumSize(QSize(28, 16777215));

        gridLayout_10->addWidget(wgMainLevel, 1, 1, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_13, 1, 2, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_15, 1, 4, 1, 1);

        widget_3 = new VerticalLevelBar(mainFrame);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy4);
        widget_3->setMinimumSize(QSize(28, 0));
        widget_3->setMaximumSize(QSize(28, 16777215));

        gridLayout_10->addWidget(widget_3, 1, 5, 1, 1);

        widget_2 = new VerticalLevelBar(mainFrame);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy4.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy4);
        widget_2->setMinimumSize(QSize(28, 0));
        widget_2->setMaximumSize(QSize(28, 16777215));

        gridLayout_10->addWidget(widget_2, 1, 3, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_16, 1, 6, 1, 1);

        widget = new VerticalLevelBar(mainFrame);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);
        widget->setMinimumSize(QSize(28, 0));
        widget->setMaximumSize(QSize(28, 16777215));

        gridLayout_10->addWidget(widget, 1, 7, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_17);

        lbSectionName1 = new QLabel(mainFrame);
        lbSectionName1->setObjectName(QStringLiteral("lbSectionName1"));
        sizePolicy.setHeightForWidth(lbSectionName1->sizePolicy().hasHeightForWidth());
        lbSectionName1->setSizePolicy(sizePolicy);
        lbSectionName1->setMinimumSize(QSize(140, 24));
        lbSectionName1->setMaximumSize(QSize(140, 24));
        lbSectionName1->setFont(font1);
        lbSectionName1->setStyleSheet(QStringLiteral(""));
        lbSectionName1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbSectionName1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_18);


        gridLayout_10->addLayout(horizontalLayout, 0, 1, 1, 7);

        horizontalSpacer_20 = new QSpacerItem(180, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_20, 2, 1, 1, 7);


        gridLayout->addLayout(gridLayout_10, 0, 3, 6, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        frameSample2 = new QFrame(mainFrame);
        frameSample2->setObjectName(QStringLiteral("frameSample2"));
        frameSample2->setMinimumSize(QSize(0, 54));
        frameSample2->setMaximumSize(QSize(16777215, 54));
        horizontalLayout_5 = new QHBoxLayout(frameSample2);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lbSampleNb2 = new QLabel(frameSample2);
        lbSampleNb2->setObjectName(QStringLiteral("lbSampleNb2"));
        lbSampleNb2->setMinimumSize(QSize(33, 54));
        lbSampleNb2->setMaximumSize(QSize(33, 54));
        lbSampleNb2->setFont(font);
        lbSampleNb2->setStyleSheet(QStringLiteral(""));
        lbSampleNb2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lbSampleNb2);

        checkBox_2 = new QCheckBox(frameSample2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setMinimumSize(QSize(37, 54));
        checkBox_2->setMaximumSize(QSize(37, 54));

        horizontalLayout_5->addWidget(checkBox_2);

        pbSample2 = new QPushButton(frameSample2);
        pbSample2->setObjectName(QStringLiteral("pbSample2"));
        sizePolicy.setHeightForWidth(pbSample2->sizePolicy().hasHeightForWidth());
        pbSample2->setSizePolicy(sizePolicy);
        pbSample2->setMinimumSize(QSize(336, 54));
        pbSample2->setMaximumSize(QSize(336, 54));
        pbSample2->setFont(font);
        pbSample2->setStyleSheet(QStringLiteral(""));

        horizontalLayout_5->addWidget(pbSample2);

        horizontalSpacer_5 = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        soundPitchFrame2 = new QFrame(frameSample2);
        soundPitchFrame2->setObjectName(QStringLiteral("soundPitchFrame2"));
        soundPitchFrame2->setMinimumSize(QSize(0, 54));
        soundPitchFrame2->setMaximumSize(QSize(16777215, 54));
        gridLayout_3 = new QGridLayout(soundPitchFrame2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(1);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_9 = new QSpacerItem(140, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 0, 0, 1, 2);

        pbOCTPlus2 = new QPushButton(soundPitchFrame2);
        pbOCTPlus2->setObjectName(QStringLiteral("pbOCTPlus2"));
        pbOCTPlus2->setMinimumSize(QSize(67, 26));
        pbOCTPlus2->setMaximumSize(QSize(67, 26));
        pbOCTPlus2->setFont(font);
        pbOCTPlus2->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(pbOCTPlus2, 2, 1, 1, 1);

        pbKeyMinus2 = new QPushButton(soundPitchFrame2);
        pbKeyMinus2->setObjectName(QStringLiteral("pbKeyMinus2"));
        pbKeyMinus2->setMinimumSize(QSize(67, 26));
        pbKeyMinus2->setMaximumSize(QSize(67, 26));
        pbKeyMinus2->setFont(font);
        pbKeyMinus2->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(pbKeyMinus2, 1, 0, 1, 1);

        pbKeyPlus2 = new QPushButton(soundPitchFrame2);
        pbKeyPlus2->setObjectName(QStringLiteral("pbKeyPlus2"));
        pbKeyPlus2->setMinimumSize(QSize(67, 26));
        pbKeyPlus2->setMaximumSize(QSize(67, 26));
        pbKeyPlus2->setFont(font);
        pbKeyPlus2->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(pbKeyPlus2, 1, 1, 1, 1);

        pbOCTMinus2 = new QPushButton(soundPitchFrame2);
        pbOCTMinus2->setObjectName(QStringLiteral("pbOCTMinus2"));
        pbOCTMinus2->setMinimumSize(QSize(67, 26));
        pbOCTMinus2->setMaximumSize(QSize(67, 26));
        pbOCTMinus2->setFont(font);
        pbOCTMinus2->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(pbOCTMinus2, 2, 0, 1, 1);


        horizontalLayout_5->addWidget(soundPitchFrame2);


        gridLayout->addWidget(frameSample2, 3, 0, 1, 1);

        frameSample3 = new QFrame(mainFrame);
        frameSample3->setObjectName(QStringLiteral("frameSample3"));
        frameSample3->setMinimumSize(QSize(0, 54));
        frameSample3->setMaximumSize(QSize(16777215, 54));
        horizontalLayout_6 = new QHBoxLayout(frameSample3);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        lbSampleNb3 = new QLabel(frameSample3);
        lbSampleNb3->setObjectName(QStringLiteral("lbSampleNb3"));
        lbSampleNb3->setMinimumSize(QSize(33, 54));
        lbSampleNb3->setMaximumSize(QSize(33, 54));
        lbSampleNb3->setFont(font);
        lbSampleNb3->setStyleSheet(QStringLiteral(""));
        lbSampleNb3->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lbSampleNb3);

        checkBox_3 = new QCheckBox(frameSample3);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setMinimumSize(QSize(37, 54));
        checkBox_3->setMaximumSize(QSize(37, 54));

        horizontalLayout_6->addWidget(checkBox_3);

        pbSample3 = new QPushButton(frameSample3);
        pbSample3->setObjectName(QStringLiteral("pbSample3"));
        sizePolicy.setHeightForWidth(pbSample3->sizePolicy().hasHeightForWidth());
        pbSample3->setSizePolicy(sizePolicy);
        pbSample3->setMinimumSize(QSize(336, 54));
        pbSample3->setMaximumSize(QSize(336, 54));
        pbSample3->setFont(font);
        pbSample3->setStyleSheet(QStringLiteral(""));

        horizontalLayout_6->addWidget(pbSample3);

        horizontalSpacer_6 = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        soundPitchFrame3 = new QFrame(frameSample3);
        soundPitchFrame3->setObjectName(QStringLiteral("soundPitchFrame3"));
        soundPitchFrame3->setMinimumSize(QSize(0, 54));
        soundPitchFrame3->setMaximumSize(QSize(16777215, 54));
        gridLayout_5 = new QGridLayout(soundPitchFrame3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(1);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_10 = new QSpacerItem(140, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_10, 0, 0, 1, 2);

        pbKeyMinus3 = new QPushButton(soundPitchFrame3);
        pbKeyMinus3->setObjectName(QStringLiteral("pbKeyMinus3"));
        pbKeyMinus3->setMinimumSize(QSize(67, 26));
        pbKeyMinus3->setMaximumSize(QSize(67, 26));
        pbKeyMinus3->setFont(font);
        pbKeyMinus3->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(pbKeyMinus3, 1, 0, 1, 1);

        pbKeyPlus3 = new QPushButton(soundPitchFrame3);
        pbKeyPlus3->setObjectName(QStringLiteral("pbKeyPlus3"));
        pbKeyPlus3->setMinimumSize(QSize(67, 26));
        pbKeyPlus3->setMaximumSize(QSize(67, 26));
        pbKeyPlus3->setFont(font);
        pbKeyPlus3->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(pbKeyPlus3, 1, 1, 1, 1);

        pbOCTMinus3 = new QPushButton(soundPitchFrame3);
        pbOCTMinus3->setObjectName(QStringLiteral("pbOCTMinus3"));
        pbOCTMinus3->setMinimumSize(QSize(67, 26));
        pbOCTMinus3->setMaximumSize(QSize(67, 26));
        pbOCTMinus3->setFont(font);
        pbOCTMinus3->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(pbOCTMinus3, 2, 0, 1, 1);

        pbOCTPlus3 = new QPushButton(soundPitchFrame3);
        pbOCTPlus3->setObjectName(QStringLiteral("pbOCTPlus3"));
        pbOCTPlus3->setMinimumSize(QSize(67, 26));
        pbOCTPlus3->setMaximumSize(QSize(67, 26));
        pbOCTPlus3->setFont(font);
        pbOCTPlus3->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(pbOCTPlus3, 2, 1, 1, 1);


        horizontalLayout_6->addWidget(soundPitchFrame3);


        gridLayout->addWidget(frameSample3, 4, 0, 1, 1);

        frameSample4 = new QFrame(mainFrame);
        frameSample4->setObjectName(QStringLiteral("frameSample4"));
        frameSample4->setMinimumSize(QSize(0, 54));
        frameSample4->setMaximumSize(QSize(16777215, 54));
        frameSample4->setStyleSheet(QStringLiteral(""));
        horizontalLayout_7 = new QHBoxLayout(frameSample4);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        lbSampleNb4 = new QLabel(frameSample4);
        lbSampleNb4->setObjectName(QStringLiteral("lbSampleNb4"));
        lbSampleNb4->setMinimumSize(QSize(33, 54));
        lbSampleNb4->setMaximumSize(QSize(33, 54));
        lbSampleNb4->setFont(font);
        lbSampleNb4->setStyleSheet(QStringLiteral(""));
        lbSampleNb4->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lbSampleNb4);

        checkBox_4 = new QCheckBox(frameSample4);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setMinimumSize(QSize(37, 54));
        checkBox_4->setMaximumSize(QSize(37, 54));

        horizontalLayout_7->addWidget(checkBox_4);

        pbSample4 = new QPushButton(frameSample4);
        pbSample4->setObjectName(QStringLiteral("pbSample4"));
        sizePolicy.setHeightForWidth(pbSample4->sizePolicy().hasHeightForWidth());
        pbSample4->setSizePolicy(sizePolicy);
        pbSample4->setMinimumSize(QSize(336, 54));
        pbSample4->setMaximumSize(QSize(336, 54));
        pbSample4->setFont(font);
        pbSample4->setStyleSheet(QStringLiteral(""));

        horizontalLayout_7->addWidget(pbSample4);

        horizontalSpacer_7 = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        soundPitchFrame4 = new QFrame(frameSample4);
        soundPitchFrame4->setObjectName(QStringLiteral("soundPitchFrame4"));
        soundPitchFrame4->setMinimumSize(QSize(0, 54));
        soundPitchFrame4->setMaximumSize(QSize(16777215, 54));
        soundPitchFrame4->setStyleSheet(QStringLiteral(""));
        gridLayout_6 = new QGridLayout(soundPitchFrame4);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setVerticalSpacing(1);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        pbKeyMinus4 = new QPushButton(soundPitchFrame4);
        pbKeyMinus4->setObjectName(QStringLiteral("pbKeyMinus4"));
        pbKeyMinus4->setMinimumSize(QSize(67, 26));
        pbKeyMinus4->setMaximumSize(QSize(67, 27));
        pbKeyMinus4->setFont(font);
        pbKeyMinus4->setStyleSheet(QStringLiteral(""));

        gridLayout_6->addWidget(pbKeyMinus4, 1, 0, 1, 1);

        pbKeyPlus4 = new QPushButton(soundPitchFrame4);
        pbKeyPlus4->setObjectName(QStringLiteral("pbKeyPlus4"));
        pbKeyPlus4->setMinimumSize(QSize(67, 26));
        pbKeyPlus4->setMaximumSize(QSize(67, 27));
        pbKeyPlus4->setFont(font);
        pbKeyPlus4->setStyleSheet(QStringLiteral(""));

        gridLayout_6->addWidget(pbKeyPlus4, 1, 1, 1, 1);

        pbOCTPlus4 = new QPushButton(soundPitchFrame4);
        pbOCTPlus4->setObjectName(QStringLiteral("pbOCTPlus4"));
        pbOCTPlus4->setMinimumSize(QSize(67, 26));
        pbOCTPlus4->setMaximumSize(QSize(67, 27));
        pbOCTPlus4->setFont(font);
        pbOCTPlus4->setStyleSheet(QStringLiteral(""));

        gridLayout_6->addWidget(pbOCTPlus4, 2, 1, 1, 1);

        pbOCTMinus4 = new QPushButton(soundPitchFrame4);
        pbOCTMinus4->setObjectName(QStringLiteral("pbOCTMinus4"));
        pbOCTMinus4->setMinimumSize(QSize(67, 26));
        pbOCTMinus4->setMaximumSize(QSize(67, 27));
        pbOCTMinus4->setFont(font);
        pbOCTMinus4->setStyleSheet(QStringLiteral(""));

        gridLayout_6->addWidget(pbOCTMinus4, 2, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(140, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_11, 0, 0, 1, 2);


        horizontalLayout_7->addWidget(soundPitchFrame4);


        gridLayout->addWidget(frameSample4, 5, 0, 1, 1);

        frameSample1 = new QFrame(mainFrame);
        frameSample1->setObjectName(QStringLiteral("frameSample1"));
        frameSample1->setMinimumSize(QSize(0, 54));
        frameSample1->setMaximumSize(QSize(16777215, 54));
        hbLayout = new QHBoxLayout(frameSample1);
        hbLayout->setSpacing(0);
        hbLayout->setObjectName(QStringLiteral("hbLayout"));
        hbLayout->setSizeConstraint(QLayout::SetFixedSize);
        hbLayout->setContentsMargins(0, 0, 0, 0);
        lbSampleNb1 = new QLabel(frameSample1);
        lbSampleNb1->setObjectName(QStringLiteral("lbSampleNb1"));
        lbSampleNb1->setMinimumSize(QSize(33, 54));
        lbSampleNb1->setMaximumSize(QSize(33, 54));
        lbSampleNb1->setFont(font);
        lbSampleNb1->setStyleSheet(QStringLiteral(""));
        lbSampleNb1->setAlignment(Qt::AlignCenter);

        hbLayout->addWidget(lbSampleNb1);

        checkBox = new QCheckBox(frameSample1);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setMinimumSize(QSize(37, 54));
        checkBox->setMaximumSize(QSize(37, 54));
        checkBox->setStyleSheet(QStringLiteral(""));

        hbLayout->addWidget(checkBox);

        pbSample1 = new QPushButton(frameSample1);
        pbSample1->setObjectName(QStringLiteral("pbSample1"));
        sizePolicy.setHeightForWidth(pbSample1->sizePolicy().hasHeightForWidth());
        pbSample1->setSizePolicy(sizePolicy);
        pbSample1->setMinimumSize(QSize(336, 54));
        pbSample1->setMaximumSize(QSize(336, 54));
        pbSample1->setFont(font);
        pbSample1->setStyleSheet(QStringLiteral(""));

        hbLayout->addWidget(pbSample1);

        horizontalSpacer_4 = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hbLayout->addItem(horizontalSpacer_4);

        soundPitchFrame1 = new QFrame(frameSample1);
        soundPitchFrame1->setObjectName(QStringLiteral("soundPitchFrame1"));
        soundPitchFrame1->setMinimumSize(QSize(0, 54));
        soundPitchFrame1->setMaximumSize(QSize(16777215, 54));
        gridLayout_2 = new QGridLayout(soundPitchFrame1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(1);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pbKeyPlus1 = new QPushButton(soundPitchFrame1);
        pbKeyPlus1->setObjectName(QStringLiteral("pbKeyPlus1"));
        pbKeyPlus1->setMinimumSize(QSize(67, 26));
        pbKeyPlus1->setMaximumSize(QSize(67, 26));
        pbKeyPlus1->setFont(font);
        pbKeyPlus1->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbKeyPlus1, 1, 1, 1, 1);

        pbKeyMinus1 = new QPushButton(soundPitchFrame1);
        pbKeyMinus1->setObjectName(QStringLiteral("pbKeyMinus1"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pbKeyMinus1->sizePolicy().hasHeightForWidth());
        pbKeyMinus1->setSizePolicy(sizePolicy5);
        pbKeyMinus1->setMinimumSize(QSize(67, 26));
        pbKeyMinus1->setMaximumSize(QSize(67, 26));
        pbKeyMinus1->setFont(font);
        pbKeyMinus1->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbKeyMinus1, 1, 0, 1, 1);

        pbOCTMinus1 = new QPushButton(soundPitchFrame1);
        pbOCTMinus1->setObjectName(QStringLiteral("pbOCTMinus1"));
        pbOCTMinus1->setMinimumSize(QSize(67, 26));
        pbOCTMinus1->setMaximumSize(QSize(67, 26));
        pbOCTMinus1->setFont(font);
        pbOCTMinus1->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbOCTMinus1, 2, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(140, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 0, 0, 1, 2);

        pbOCTPlus1 = new QPushButton(soundPitchFrame1);
        pbOCTPlus1->setObjectName(QStringLiteral("pbOCTPlus1"));
        pbOCTPlus1->setMinimumSize(QSize(67, 26));
        pbOCTPlus1->setMaximumSize(QSize(67, 26));
        pbOCTPlus1->setFont(font);
        pbOCTPlus1->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbOCTPlus1, 2, 1, 1, 1);


        hbLayout->addWidget(soundPitchFrame1);


        gridLayout->addWidget(frameSample1, 1, 0, 2, 1);


        gridLayout_9->addLayout(gridLayout, 2, 0, 1, 1);


        gridLayout_8->addWidget(mainFrame, 0, 0, 1, 1);


        retranslateUi(SplitBankForm);

        QMetaObject::connectSlotsByName(SplitBankForm);
    } // setupUi

    void retranslateUi(QWidget *SplitBankForm)
    {
        SplitBankForm->setWindowTitle(QApplication::translate("SplitBankForm", "Form", 0));
        pbBankB->setText(QApplication::translate("SplitBankForm", "BANK B", 0));
        pbBankA->setText(QApplication::translate("SplitBankForm", "BANK A", 0));
        lbWidgetTitle->setText(QApplication::translate("SplitBankForm", "SPLIT BANK  A", 0));
        pbFactory->setText(QApplication::translate("SplitBankForm", "FACTORY", 0));
        pbBankD->setText(QApplication::translate("SplitBankForm", "BANK D", 0));
        pbBankC->setText(QApplication::translate("SplitBankForm", "BANK C", 0));
        lbCategory->setText(QApplication::translate("SplitBankForm", "CATEGORY", 0));
        lbCategoryNb->setText(QApplication::translate("SplitBankForm", "001", 0));
        lbCategoryName->setText(QApplication::translate("SplitBankForm", "Master Ensemble", 0));
        pbSoundSplit->setText(QApplication::translate("SplitBankForm", "SOUND SPLIT", 0));
        pbPitch->setText(QApplication::translate("SplitBankForm", "PITCH", 0));
        pbFilterEdit->setText(QApplication::translate("SplitBankForm", "FILTER EDIT", 0));
        pbEqualizer->setText(QApplication::translate("SplitBankForm", "EQUALIZER", 0));
        pbEffects->setText(QApplication::translate("SplitBankForm", "EFFECTS", 0));
        lbSectionName3->setText(QApplication::translate("SplitBankForm", "SOUND LIST", 0));
        lbSectionName2->setText(QApplication::translate("SplitBankForm", "SOUND PITCH", 0));
        lbSectionName1->setText(QApplication::translate("SplitBankForm", "SOUND LEVEL", 0));
        lbSampleNb2->setText(QApplication::translate("SplitBankForm", "2", 0));
        checkBox_2->setText(QString());
        pbSample2->setText(QApplication::translate("SplitBankForm", "002:  Melodic Accordion", 0));
        pbOCTPlus2->setText(QApplication::translate("SplitBankForm", "OCT+", 0));
        pbKeyMinus2->setText(QApplication::translate("SplitBankForm", "KEY-", 0));
        pbKeyPlus2->setText(QApplication::translate("SplitBankForm", "KEY+", 0));
        pbOCTMinus2->setText(QApplication::translate("SplitBankForm", "OCT-", 0));
        lbSampleNb3->setText(QApplication::translate("SplitBankForm", "3", 0));
        checkBox_3->setText(QString());
        pbSample3->setText(QApplication::translate("SplitBankForm", "001:  String Ensemble", 0));
        pbKeyMinus3->setText(QApplication::translate("SplitBankForm", "KEY-", 0));
        pbKeyPlus3->setText(QApplication::translate("SplitBankForm", "KEY+", 0));
        pbOCTMinus3->setText(QApplication::translate("SplitBankForm", "OCT-", 0));
        pbOCTPlus3->setText(QApplication::translate("SplitBankForm", "OCT+", 0));
        lbSampleNb4->setText(QApplication::translate("SplitBankForm", "4", 0));
        checkBox_4->setText(QString());
        pbSample4->setText(QApplication::translate("SplitBankForm", "009:  Bright Trumpet", 0));
        pbKeyMinus4->setText(QApplication::translate("SplitBankForm", "KEY-", 0));
        pbKeyPlus4->setText(QApplication::translate("SplitBankForm", "KEY+", 0));
        pbOCTPlus4->setText(QApplication::translate("SplitBankForm", "OCT+", 0));
        pbOCTMinus4->setText(QApplication::translate("SplitBankForm", "OCT-", 0));
        lbSampleNb1->setText(QApplication::translate("SplitBankForm", "1", 0));
        checkBox->setText(QString());
        pbSample1->setText(QApplication::translate("SplitBankForm", "001:  Grand Piano", 0));
        pbKeyPlus1->setText(QApplication::translate("SplitBankForm", "KEY+", 0));
        pbKeyMinus1->setText(QApplication::translate("SplitBankForm", "KEY-", 0));
        pbOCTMinus1->setText(QApplication::translate("SplitBankForm", "OCT-", 0));
        pbOCTPlus1->setText(QApplication::translate("SplitBankForm", "OCT+", 0));
    } // retranslateUi

};

namespace Ui {
    class SplitBankForm: public Ui_SplitBankForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLITBANKFORM_H
