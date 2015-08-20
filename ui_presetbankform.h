/********************************************************************************
** Form generated from reading UI file 'presetbankform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESETBANKFORM_H
#define UI_PRESETBANKFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "doublesidedverticalbar.h"

QT_BEGIN_NAMESPACE

class Ui_PresetBankForm
{
public:
    QGridLayout *gridLayout;
    QFrame *mainFrame;
    QGridLayout *gridLayout_6;
    QFrame *frameTop;
    QGridLayout *gridLayout_7;
    QPushButton *pbFactory;
    QVBoxLayout *verticalLayout;
    QLabel *lbWidgetTitle;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pbBankC;
    QPushButton *pbBankA;
    QPushButton *pbBankD;
    QPushButton *pbBankB;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbAmpEdit;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbInsertEFX;
    QPushButton *pbMasterEFX;
    QPushButton *pbEqualizer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbCategory;
    QLabel *lbCategoryNb;
    QLabel *lbCategoryName;
    QWidget *frameVolumeMeter;
    QGridLayout *gridLayout_8;
    QWidget *wLeftVolume;
    QVBoxLayout *verticalLayout_4;
    QLabel *lb0;
    QLabel *lb1;
    QLabel *lb2;
    QLabel *lb3;
    QLabel *lb4;
    QLabel *lb5;
    QLabel *lb6;
    QLabel *lb7;
    QLabel *lb8;
    QLabel *lb9;
    QLabel *lb10;
    QLabel *lbVolumeMain;
    QWidget *wRightVolume;
    QVBoxLayout *verticalLayout_3;
    QLabel *lb11;
    QLabel *lb12;
    QLabel *lb13;
    QLabel *lb14;
    QLabel *lb15;
    QLabel *lb16;
    QLabel *lb17;
    QLabel *lb18;
    QLabel *lb19;
    QLabel *lb20;
    QLabel *lb21;
    QLabel *lbVolumeL;
    QLabel *lbVolumeR;
    QVBoxLayout *verticalLayout_2;
    QLabel *lb31;
    QLabel *lb32;
    QLabel *lb22;
    QLabel *lb23;
    QLabel *lb24;
    QLabel *lb25;
    QLabel *lb26;
    QLabel *lb27;
    QLabel *lb28;
    QLabel *lb29;
    QLabel *lb30;
    QCheckBox *chkMuteMain;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_10;
    QLabel *lbSection1;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_10;
    DoubleSidedVerticalBar *wgDimension1;
    DoubleSidedVerticalBar *wgDimension2;
    DoubleSidedVerticalBar *wgDimension3;
    DoubleSidedVerticalBar *wgDimension4;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_5;
    QFrame *framMultiSample;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lbSection3;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frameSample1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbSampleNb1;
    QCheckBox *chkSampleEnable1;
    QPushButton *pbSample1;
    QPushButton *pbSampleEdit1;
    QFrame *frameSample2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbSampleNb2;
    QCheckBox *chkSampleEnable2;
    QPushButton *pbSample2;
    QPushButton *pbSampleEdit2;
    QFrame *frameSample3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbSampleNb3;
    QCheckBox *chkSampleEnable3;
    QPushButton *pbSample3;
    QPushButton *pbSampleEdit3;
    QFrame *frameSample4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbSampleNb4;
    QCheckBox *chkSampleEnable4;
    QPushButton *pbSample4;
    QPushButton *pbSampleEdit4;
    QFrame *frameEnvelope;
    QGridLayout *gridLayout_4;
    QWidget *widget_5;
    QGridLayout *gridLayout_12;
    QGraphicsView *gv4;
    QWidget *widget_3;
    QGridLayout *gridLayout_10;
    QGraphicsView *gv2;
    QWidget *widget_4;
    QGridLayout *gridLayout_11;
    QGraphicsView *gv3;
    QWidget *widget_2;
    QGridLayout *gridLayout_9;
    QGraphicsView *gv1;
    QFrame *fameEnvelopeTitle;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QLabel *lbSection2;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *PresetBankForm)
    {
        if (PresetBankForm->objectName().isEmpty())
            PresetBankForm->setObjectName(QStringLiteral("PresetBankForm"));
        PresetBankForm->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PresetBankForm->sizePolicy().hasHeightForWidth());
        PresetBankForm->setSizePolicy(sizePolicy);
        PresetBankForm->setMinimumSize(QSize(800, 480));
        PresetBankForm->setMaximumSize(QSize(800, 480));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(68);
        PresetBankForm->setFont(font);
        PresetBankForm->setStyleSheet(QLatin1String("QWidget{\n"
"    font-family : \"Open Sans\";\n"
"    font-weight : 550;\n"
"    font-size:14pt;\n"
"	color: black;\n"
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
"    background-color:rgb"
                        "(16, 97, 114);\n"
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
"#lbCategory{\n"
"    border: 1px solid white;\n"
"    background-color:rgb(49, 51, 48);\n"
"    color: white;\n"
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
"#pbSample1,#pbSample2,#pbSample3,#pbSample4{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"border: none;\n"
"color: black;\n"
"text-align: left;\n"
"padding-left:20px;\n"
"}\n"
"\n"
"#frameSample1, #frameSample2, #frameSample3, #frameSample4{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"border: 1px so"
                        "lid white;\n"
"}\n"
"\n"
"#pbSampleEdit1, #pbSampleEdit2, #pbSampleEdit3, #pbSampleEdit4{\n"
"border:1px solid black;\n"
"background-color: rgb(16, 97, 114);\n"
"color: white;\n"
"outline :none;\n"
"}\n"
"\n"
"#lbSampleNb1, #lbSampleNb2, #lbSampleNb3, #lbSampleNb4{\n"
"\n"
"}\n"
"\n"
"#lbSection1, #lbSection2, #lbSection3, #lbSection4{\n"
"border: 1px solid black;\n"
"background-color:rgb(77, 79, 78);\n"
"color: white;\n"
"font-size:12pt;\n"
"}\n"
"\n"
"#frameEnvelope{\n"
"border:none;\n"
"background-color : transparent;\n"
"}\n"
"\n"
"#pbCategory{\n"
"border: 1px solid black;\n"
"background-color:rgb(16, 97, 114);\n"
"color: white;\n"
"\n"
"}\n"
"\n"
"QCheckBox#chkSampleEnable1,QCheckBox#chkSampleEnable2,\n"
"QCheckBox#chkSampleEnable3,QCheckBox#chkSampleEnable4{\n"
"    background-color    : transparent;\n"
"	border:none;\n"
"    outline:none;\n"
"}\n"
"\n"
"QCheckBox::indicator#chkSampleEnable1, QCheckBox::indicator#chkSampleEnable2,\n"
"QCheckBox::indicator#chkSampleEnable3, QCheckBox::indicator#chkSampleE"
                        "nable4 { \n"
"    width               : 36px; \n"
"    height              : 52px; \n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked#chkSampleEnable1, QCheckBox::indicator:unchecked#chkSampleEnable2,\n"
"QCheckBox::indicator:unchecked#chkSampleEnable3, QCheckBox::indicator:unchecked#chkSampleEnable4{\n"
"    background-color : rgb(202, 36, 36);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked#chkSampleEnable1, QCheckBox::indicator:checked#chkSampleEnable2,\n"
"QCheckBox::indicator:checked#chkSampleEnable3,QCheckBox::indicator:checked#chkSampleEnable4{\n"
"    background-color : rgb(84, 189, 58);\n"
"}\n"
"\n"
"\n"
"QCheckBox#chkMuteMain{\n"
"    background-color    : transparent;\n"
"	border:1px solid black;\n"
"    outline:none;\n"
"}\n"
"\n"
"QCheckBox::indicator#chkMuteMain { \n"
"    width               : 42px; \n"
"    height              : 14px; \n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked#chkMuteMain{\n"
"    background-color : rgb(202, 36, 36);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked#chkMuteMain{\n"
"   "
                        " background-color : rgb(84, 189, 58);\n"
"}\n"
"\n"
"#lbVolumeMain, #lbVolumeL, #lbVolumeR{\n"
"font-size : 12pt;\n"
"color: white;\n"
"}\n"
"\n"
"#lb0,#lb1,#lb2,#lb3,#lb4,#lb5,#lb6,#lb7,#lb8,#lb9,#lb10,#lb11,\n"
"#lb12,#lb13,#lb14,#lb15,#lb16,#lb17,#lb18,#lb19,#lb20,#lb21,#lb22,\n"
"#lb23,#lb24,#lb25,#lb26,#lb27,#lb28,#lb29,#lb30,#lb31,#lb32{\n"
"background-color: rgb(16, 97, 114);\n"
"color: white;\n"
"font-size : 9pt;\n"
"border:none;\n"
"}\n"
"#frameVolumeMeter{\n"
"border: 1px solid black;\n"
"background-color: rgb(16, 97, 114);\n"
"color: white;\n"
"}\n"
"\n"
"#wLeftVolume, #wRightVolume{\n"
"border: 1px solid black;\n"
"background-color: rgb(0, 226, 65);\n"
"}\n"
"\n"
"#wgDimension1, #wgDimension2, #wgDimension3, #wgDimension4{\n"
"border: 1px solid white;\n"
"background-color: transparent;\n"
"}"));
        gridLayout = new QGridLayout(PresetBankForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(PresetBankForm);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainFrame->sizePolicy().hasHeightForWidth());
        mainFrame->setSizePolicy(sizePolicy1);
        mainFrame->setMinimumSize(QSize(800, 480));
        mainFrame->setMaximumSize(QSize(800, 480));
        mainFrame->setFont(font);
        mainFrame->setStyleSheet(QStringLiteral(""));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(mainFrame);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
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
        pbFactory = new QPushButton(frameTop);
        pbFactory->setObjectName(QStringLiteral("pbFactory"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pbFactory->sizePolicy().hasHeightForWidth());
        pbFactory->setSizePolicy(sizePolicy3);
        pbFactory->setMinimumSize(QSize(102, 55));
        pbFactory->setMaximumSize(QSize(102, 55));
        pbFactory->setFont(font);
        pbFactory->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbFactory, 0, 6, 1, 1);

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

        pbBankC = new QPushButton(frameTop);
        pbBankC->setObjectName(QStringLiteral("pbBankC"));
        sizePolicy3.setHeightForWidth(pbBankC->sizePolicy().hasHeightForWidth());
        pbBankC->setSizePolicy(sizePolicy3);
        pbBankC->setMinimumSize(QSize(102, 55));
        pbBankC->setMaximumSize(QSize(102, 55));
        pbBankC->setFont(font);
        pbBankC->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbBankC, 0, 4, 1, 1);

        pbBankA = new QPushButton(frameTop);
        pbBankA->setObjectName(QStringLiteral("pbBankA"));
        sizePolicy3.setHeightForWidth(pbBankA->sizePolicy().hasHeightForWidth());
        pbBankA->setSizePolicy(sizePolicy3);
        pbBankA->setMinimumSize(QSize(102, 55));
        pbBankA->setMaximumSize(QSize(102, 55));
        pbBankA->setFont(font);
        pbBankA->setFocusPolicy(Qt::StrongFocus);
        pbBankA->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbBankA, 0, 2, 1, 1);

        pbBankD = new QPushButton(frameTop);
        pbBankD->setObjectName(QStringLiteral("pbBankD"));
        sizePolicy3.setHeightForWidth(pbBankD->sizePolicy().hasHeightForWidth());
        pbBankD->setSizePolicy(sizePolicy3);
        pbBankD->setMinimumSize(QSize(102, 55));
        pbBankD->setMaximumSize(QSize(102, 55));
        pbBankD->setFont(font);
        pbBankD->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbBankD, 0, 5, 1, 1);

        pbBankB = new QPushButton(frameTop);
        pbBankB->setObjectName(QStringLiteral("pbBankB"));
        sizePolicy3.setHeightForWidth(pbBankB->sizePolicy().hasHeightForWidth());
        pbBankB->setSizePolicy(sizePolicy3);
        pbBankB->setMinimumSize(QSize(102, 55));
        pbBankB->setMaximumSize(QSize(102, 55));
        pbBankB->setFont(font);
        pbBankB->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbBankB, 0, 3, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_12, 0, 1, 1, 1);


        gridLayout_6->addWidget(frameTop, 0, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pbAmpEdit = new QPushButton(mainFrame);
        pbAmpEdit->setObjectName(QStringLiteral("pbAmpEdit"));
        sizePolicy3.setHeightForWidth(pbAmpEdit->sizePolicy().hasHeightForWidth());
        pbAmpEdit->setSizePolicy(sizePolicy3);
        pbAmpEdit->setMinimumSize(QSize(126, 58));
        pbAmpEdit->setMaximumSize(QSize(126, 58));
        pbAmpEdit->setFont(font);
        pbAmpEdit->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbAmpEdit);

        pushButton_5 = new QPushButton(mainFrame);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(126, 58));
        pushButton_5->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(mainFrame);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(126, 58));
        pushButton_6->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pushButton_6);

        horizontalSpacer = new QSpacerItem(99, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pbInsertEFX = new QPushButton(mainFrame);
        pbInsertEFX->setObjectName(QStringLiteral("pbInsertEFX"));
        pbInsertEFX->setMinimumSize(QSize(126, 58));
        pbInsertEFX->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbInsertEFX);

        pbMasterEFX = new QPushButton(mainFrame);
        pbMasterEFX->setObjectName(QStringLiteral("pbMasterEFX"));
        sizePolicy3.setHeightForWidth(pbMasterEFX->sizePolicy().hasHeightForWidth());
        pbMasterEFX->setSizePolicy(sizePolicy3);
        pbMasterEFX->setMinimumSize(QSize(126, 58));
        pbMasterEFX->setMaximumSize(QSize(126, 58));
        pbMasterEFX->setFont(font);
        pbMasterEFX->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbMasterEFX);

        pbEqualizer = new QPushButton(mainFrame);
        pbEqualizer->setObjectName(QStringLiteral("pbEqualizer"));
        sizePolicy3.setHeightForWidth(pbEqualizer->sizePolicy().hasHeightForWidth());
        pbEqualizer->setSizePolicy(sizePolicy3);
        pbEqualizer->setMinimumSize(QSize(126, 58));
        pbEqualizer->setMaximumSize(QSize(126, 58));
        pbEqualizer->setFont(font);
        pbEqualizer->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbEqualizer);


        gridLayout_6->addLayout(horizontalLayout_3, 4, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pbCategory = new QPushButton(mainFrame);
        pbCategory->setObjectName(QStringLiteral("pbCategory"));
        pbCategory->setMinimumSize(QSize(130, 42));
        pbCategory->setMaximumSize(QSize(130, 42));
        pbCategory->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(pbCategory);

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


        gridLayout_6->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        frameVolumeMeter = new QWidget(mainFrame);
        frameVolumeMeter->setObjectName(QStringLiteral("frameVolumeMeter"));
        frameVolumeMeter->setMinimumSize(QSize(85, 0));
        frameVolumeMeter->setStyleSheet(QStringLiteral(""));
        gridLayout_8 = new QGridLayout(frameVolumeMeter);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(3);
        gridLayout_8->setVerticalSpacing(2);
        gridLayout_8->setContentsMargins(5, 0, 5, 1);
        wLeftVolume = new QWidget(frameVolumeMeter);
        wLeftVolume->setObjectName(QStringLiteral("wLeftVolume"));
        wLeftVolume->setMinimumSize(QSize(16, 0));
        wLeftVolume->setMaximumSize(QSize(16, 16777215));
        wLeftVolume->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(wLeftVolume, 3, 1, 2, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lb0 = new QLabel(frameVolumeMeter);
        lb0->setObjectName(QStringLiteral("lb0"));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(68);
        lb0->setFont(font1);

        verticalLayout_4->addWidget(lb0);

        lb1 = new QLabel(frameVolumeMeter);
        lb1->setObjectName(QStringLiteral("lb1"));
        lb1->setFont(font1);

        verticalLayout_4->addWidget(lb1);

        lb2 = new QLabel(frameVolumeMeter);
        lb2->setObjectName(QStringLiteral("lb2"));
        lb2->setFont(font1);

        verticalLayout_4->addWidget(lb2);

        lb3 = new QLabel(frameVolumeMeter);
        lb3->setObjectName(QStringLiteral("lb3"));
        lb3->setFont(font1);

        verticalLayout_4->addWidget(lb3);

        lb4 = new QLabel(frameVolumeMeter);
        lb4->setObjectName(QStringLiteral("lb4"));
        lb4->setFont(font1);

        verticalLayout_4->addWidget(lb4);

        lb5 = new QLabel(frameVolumeMeter);
        lb5->setObjectName(QStringLiteral("lb5"));
        lb5->setFont(font1);

        verticalLayout_4->addWidget(lb5);

        lb6 = new QLabel(frameVolumeMeter);
        lb6->setObjectName(QStringLiteral("lb6"));
        lb6->setFont(font1);

        verticalLayout_4->addWidget(lb6);

        lb7 = new QLabel(frameVolumeMeter);
        lb7->setObjectName(QStringLiteral("lb7"));
        lb7->setFont(font1);

        verticalLayout_4->addWidget(lb7);

        lb8 = new QLabel(frameVolumeMeter);
        lb8->setObjectName(QStringLiteral("lb8"));
        lb8->setFont(font1);

        verticalLayout_4->addWidget(lb8);

        lb9 = new QLabel(frameVolumeMeter);
        lb9->setObjectName(QStringLiteral("lb9"));
        lb9->setFont(font1);

        verticalLayout_4->addWidget(lb9);

        lb10 = new QLabel(frameVolumeMeter);
        lb10->setObjectName(QStringLiteral("lb10"));
        lb10->setFont(font1);

        verticalLayout_4->addWidget(lb10);


        gridLayout_8->addLayout(verticalLayout_4, 3, 5, 2, 1);

        lbVolumeMain = new QLabel(frameVolumeMeter);
        lbVolumeMain->setObjectName(QStringLiteral("lbVolumeMain"));
        lbVolumeMain->setMinimumSize(QSize(0, 20));
        lbVolumeMain->setMaximumSize(QSize(16777215, 20));
        lbVolumeMain->setStyleSheet(QStringLiteral(""));
        lbVolumeMain->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lbVolumeMain, 0, 1, 1, 4);

        wRightVolume = new QWidget(frameVolumeMeter);
        wRightVolume->setObjectName(QStringLiteral("wRightVolume"));
        wRightVolume->setMinimumSize(QSize(16, 0));
        wRightVolume->setMaximumSize(QSize(16, 16777215));
        wRightVolume->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(wRightVolume, 3, 3, 2, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lb11 = new QLabel(frameVolumeMeter);
        lb11->setObjectName(QStringLiteral("lb11"));
        lb11->setFont(font1);

        verticalLayout_3->addWidget(lb11);

        lb12 = new QLabel(frameVolumeMeter);
        lb12->setObjectName(QStringLiteral("lb12"));
        lb12->setFont(font1);

        verticalLayout_3->addWidget(lb12);

        lb13 = new QLabel(frameVolumeMeter);
        lb13->setObjectName(QStringLiteral("lb13"));
        lb13->setFont(font1);

        verticalLayout_3->addWidget(lb13);

        lb14 = new QLabel(frameVolumeMeter);
        lb14->setObjectName(QStringLiteral("lb14"));
        lb14->setFont(font1);

        verticalLayout_3->addWidget(lb14);

        lb15 = new QLabel(frameVolumeMeter);
        lb15->setObjectName(QStringLiteral("lb15"));
        lb15->setFont(font1);

        verticalLayout_3->addWidget(lb15);

        lb16 = new QLabel(frameVolumeMeter);
        lb16->setObjectName(QStringLiteral("lb16"));
        lb16->setFont(font1);

        verticalLayout_3->addWidget(lb16);

        lb17 = new QLabel(frameVolumeMeter);
        lb17->setObjectName(QStringLiteral("lb17"));
        lb17->setFont(font1);

        verticalLayout_3->addWidget(lb17);

        lb18 = new QLabel(frameVolumeMeter);
        lb18->setObjectName(QStringLiteral("lb18"));
        lb18->setFont(font1);

        verticalLayout_3->addWidget(lb18);

        lb19 = new QLabel(frameVolumeMeter);
        lb19->setObjectName(QStringLiteral("lb19"));
        lb19->setFont(font1);

        verticalLayout_3->addWidget(lb19);

        lb20 = new QLabel(frameVolumeMeter);
        lb20->setObjectName(QStringLiteral("lb20"));
        lb20->setFont(font1);

        verticalLayout_3->addWidget(lb20);

        lb21 = new QLabel(frameVolumeMeter);
        lb21->setObjectName(QStringLiteral("lb21"));
        lb21->setFont(font1);

        verticalLayout_3->addWidget(lb21);


        gridLayout_8->addLayout(verticalLayout_3, 3, 0, 2, 1);

        lbVolumeL = new QLabel(frameVolumeMeter);
        lbVolumeL->setObjectName(QStringLiteral("lbVolumeL"));
        lbVolumeL->setMinimumSize(QSize(0, 26));
        lbVolumeL->setMaximumSize(QSize(16777215, 26));
        lbVolumeL->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(lbVolumeL, 5, 1, 1, 1);

        lbVolumeR = new QLabel(frameVolumeMeter);
        lbVolumeR->setObjectName(QStringLiteral("lbVolumeR"));
        lbVolumeR->setMinimumSize(QSize(0, 26));
        lbVolumeR->setMaximumSize(QSize(16777215, 26));
        lbVolumeR->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(lbVolumeR, 5, 3, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lb31 = new QLabel(frameVolumeMeter);
        lb31->setObjectName(QStringLiteral("lb31"));
        lb31->setFont(font1);

        verticalLayout_2->addWidget(lb31);

        lb32 = new QLabel(frameVolumeMeter);
        lb32->setObjectName(QStringLiteral("lb32"));
        lb32->setFont(font1);

        verticalLayout_2->addWidget(lb32);

        lb22 = new QLabel(frameVolumeMeter);
        lb22->setObjectName(QStringLiteral("lb22"));
        lb22->setFont(font1);

        verticalLayout_2->addWidget(lb22);

        lb23 = new QLabel(frameVolumeMeter);
        lb23->setObjectName(QStringLiteral("lb23"));
        lb23->setFont(font1);

        verticalLayout_2->addWidget(lb23);

        lb24 = new QLabel(frameVolumeMeter);
        lb24->setObjectName(QStringLiteral("lb24"));
        lb24->setFont(font1);

        verticalLayout_2->addWidget(lb24);

        lb25 = new QLabel(frameVolumeMeter);
        lb25->setObjectName(QStringLiteral("lb25"));
        lb25->setFont(font1);

        verticalLayout_2->addWidget(lb25);

        lb26 = new QLabel(frameVolumeMeter);
        lb26->setObjectName(QStringLiteral("lb26"));
        lb26->setFont(font1);

        verticalLayout_2->addWidget(lb26);

        lb27 = new QLabel(frameVolumeMeter);
        lb27->setObjectName(QStringLiteral("lb27"));
        lb27->setFont(font1);

        verticalLayout_2->addWidget(lb27);

        lb28 = new QLabel(frameVolumeMeter);
        lb28->setObjectName(QStringLiteral("lb28"));
        lb28->setFont(font1);

        verticalLayout_2->addWidget(lb28);

        lb29 = new QLabel(frameVolumeMeter);
        lb29->setObjectName(QStringLiteral("lb29"));
        lb29->setFont(font1);

        verticalLayout_2->addWidget(lb29);

        lb30 = new QLabel(frameVolumeMeter);
        lb30->setObjectName(QStringLiteral("lb30"));
        lb30->setFont(font1);

        verticalLayout_2->addWidget(lb30);


        gridLayout_8->addLayout(verticalLayout_2, 3, 2, 2, 1);

        chkMuteMain = new QCheckBox(frameVolumeMeter);
        chkMuteMain->setObjectName(QStringLiteral("chkMuteMain"));
        chkMuteMain->setMinimumSize(QSize(0, 0));
        chkMuteMain->setMaximumSize(QSize(44, 16777215));
        chkMuteMain->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(chkMuteMain, 1, 1, 1, 4);


        gridLayout_6->addWidget(frameVolumeMeter, 1, 1, 2, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(6);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(7);
        gridLayout_2->setContentsMargins(-1, 2, -1, -1);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        lbSection1 = new QLabel(mainFrame);
        lbSection1->setObjectName(QStringLiteral("lbSection1"));
        sizePolicy3.setHeightForWidth(lbSection1->sizePolicy().hasHeightForWidth());
        lbSection1->setSizePolicy(sizePolicy3);
        lbSection1->setMinimumSize(QSize(120, 24));
        lbSection1->setMaximumSize(QSize(120, 24));
        QFont font2;
        font2.setFamily(QStringLiteral("Open Sans"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(68);
        lbSection1->setFont(font2);
        lbSection1->setStyleSheet(QStringLiteral(""));
        lbSection1->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(lbSection1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);


        gridLayout_2->addLayout(horizontalLayout_9, 0, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        wgDimension1 = new DoubleSidedVerticalBar(mainFrame);
        wgDimension1->setObjectName(QStringLiteral("wgDimension1"));
        wgDimension1->setMinimumSize(QSize(28, 0));
        wgDimension1->setMaximumSize(QSize(28, 16777215));
        wgDimension1->setStyleSheet(QStringLiteral(""));

        horizontalLayout_10->addWidget(wgDimension1);

        wgDimension2 = new DoubleSidedVerticalBar(mainFrame);
        wgDimension2->setObjectName(QStringLiteral("wgDimension2"));
        wgDimension2->setMinimumSize(QSize(28, 0));
        wgDimension2->setMaximumSize(QSize(28, 16777215));
        wgDimension2->setStyleSheet(QStringLiteral(""));

        horizontalLayout_10->addWidget(wgDimension2);

        wgDimension3 = new DoubleSidedVerticalBar(mainFrame);
        wgDimension3->setObjectName(QStringLiteral("wgDimension3"));
        wgDimension3->setMinimumSize(QSize(28, 0));
        wgDimension3->setMaximumSize(QSize(28, 16777215));
        wgDimension3->setStyleSheet(QStringLiteral(""));

        horizontalLayout_10->addWidget(wgDimension3);

        wgDimension4 = new DoubleSidedVerticalBar(mainFrame);
        wgDimension4->setObjectName(QStringLiteral("wgDimension4"));
        wgDimension4->setMinimumSize(QSize(28, 0));
        wgDimension4->setMaximumSize(QSize(28, 16777215));
        wgDimension4->setStyleSheet(QStringLiteral(""));

        horizontalLayout_10->addWidget(wgDimension4);


        gridLayout_2->addLayout(horizontalLayout_10, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 2, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(6);
        gridLayout_5->setContentsMargins(-1, 1, -1, -1);
        framMultiSample = new QFrame(mainFrame);
        framMultiSample->setObjectName(QStringLiteral("framMultiSample"));
        framMultiSample->setMaximumSize(QSize(16777215, 32));
        framMultiSample->setStyleSheet(QStringLiteral(""));
        framMultiSample->setFrameShape(QFrame::NoFrame);
        horizontalLayout = new QHBoxLayout(framMultiSample);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lbSection3 = new QLabel(framMultiSample);
        lbSection3->setObjectName(QStringLiteral("lbSection3"));
        lbSection3->setMinimumSize(QSize(165, 24));
        lbSection3->setMaximumSize(QSize(165, 24));
        lbSection3->setFont(font2);
        lbSection3->setStyleSheet(QStringLiteral(""));
        lbSection3->setScaledContents(false);
        lbSection3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbSection3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_5->addWidget(framMultiSample, 0, 0, 1, 1);

        frameSample1 = new QFrame(mainFrame);
        frameSample1->setObjectName(QStringLiteral("frameSample1"));
        frameSample1->setMinimumSize(QSize(0, 54));
        frameSample1->setMaximumSize(QSize(16777215, 54));
        frameSample1->setStyleSheet(QStringLiteral(""));
        horizontalLayout_4 = new QHBoxLayout(frameSample1);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(0, 0, -1, 0);
        lbSampleNb1 = new QLabel(frameSample1);
        lbSampleNb1->setObjectName(QStringLiteral("lbSampleNb1"));
        lbSampleNb1->setMinimumSize(QSize(33, 52));
        lbSampleNb1->setMaximumSize(QSize(33, 52));
        lbSampleNb1->setFont(font);
        lbSampleNb1->setStyleSheet(QStringLiteral(""));
        lbSampleNb1->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbSampleNb1);

        chkSampleEnable1 = new QCheckBox(frameSample1);
        chkSampleEnable1->setObjectName(QStringLiteral("chkSampleEnable1"));
        sizePolicy3.setHeightForWidth(chkSampleEnable1->sizePolicy().hasHeightForWidth());
        chkSampleEnable1->setSizePolicy(sizePolicy3);
        chkSampleEnable1->setMinimumSize(QSize(37, 52));
        chkSampleEnable1->setMaximumSize(QSize(37, 52));
        chkSampleEnable1->setFont(font);
        chkSampleEnable1->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(chkSampleEnable1);

        pbSample1 = new QPushButton(frameSample1);
        pbSample1->setObjectName(QStringLiteral("pbSample1"));
        sizePolicy3.setHeightForWidth(pbSample1->sizePolicy().hasHeightForWidth());
        pbSample1->setSizePolicy(sizePolicy3);
        pbSample1->setMinimumSize(QSize(256, 52));
        pbSample1->setMaximumSize(QSize(256, 52));
        pbSample1->setFont(font);
        pbSample1->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(pbSample1);

        pbSampleEdit1 = new QPushButton(frameSample1);
        pbSampleEdit1->setObjectName(QStringLiteral("pbSampleEdit1"));
        pbSampleEdit1->setMinimumSize(QSize(70, 36));
        pbSampleEdit1->setMaximumSize(QSize(70, 36));
        pbSampleEdit1->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(pbSampleEdit1);


        gridLayout_5->addWidget(frameSample1, 1, 0, 1, 1);

        frameSample2 = new QFrame(mainFrame);
        frameSample2->setObjectName(QStringLiteral("frameSample2"));
        frameSample2->setMinimumSize(QSize(0, 54));
        frameSample2->setMaximumSize(QSize(16777215, 54));
        frameSample2->setStyleSheet(QStringLiteral(""));
        horizontalLayout_5 = new QHBoxLayout(frameSample2);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_5->setContentsMargins(0, 0, -1, 0);
        lbSampleNb2 = new QLabel(frameSample2);
        lbSampleNb2->setObjectName(QStringLiteral("lbSampleNb2"));
        lbSampleNb2->setMinimumSize(QSize(33, 52));
        lbSampleNb2->setMaximumSize(QSize(33, 52));
        lbSampleNb2->setFont(font);
        lbSampleNb2->setStyleSheet(QStringLiteral(""));
        lbSampleNb2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lbSampleNb2);

        chkSampleEnable2 = new QCheckBox(frameSample2);
        chkSampleEnable2->setObjectName(QStringLiteral("chkSampleEnable2"));
        sizePolicy3.setHeightForWidth(chkSampleEnable2->sizePolicy().hasHeightForWidth());
        chkSampleEnable2->setSizePolicy(sizePolicy3);
        chkSampleEnable2->setMinimumSize(QSize(37, 52));
        chkSampleEnable2->setMaximumSize(QSize(37, 52));
        chkSampleEnable2->setFont(font);
        chkSampleEnable2->setStyleSheet(QStringLiteral(""));

        horizontalLayout_5->addWidget(chkSampleEnable2);

        pbSample2 = new QPushButton(frameSample2);
        pbSample2->setObjectName(QStringLiteral("pbSample2"));
        sizePolicy3.setHeightForWidth(pbSample2->sizePolicy().hasHeightForWidth());
        pbSample2->setSizePolicy(sizePolicy3);
        pbSample2->setMinimumSize(QSize(256, 52));
        pbSample2->setMaximumSize(QSize(256, 52));
        pbSample2->setFont(font);
        pbSample2->setStyleSheet(QStringLiteral(""));

        horizontalLayout_5->addWidget(pbSample2);

        pbSampleEdit2 = new QPushButton(frameSample2);
        pbSampleEdit2->setObjectName(QStringLiteral("pbSampleEdit2"));
        pbSampleEdit2->setMinimumSize(QSize(70, 36));
        pbSampleEdit2->setMaximumSize(QSize(70, 36));
        pbSampleEdit2->setStyleSheet(QStringLiteral(""));

        horizontalLayout_5->addWidget(pbSampleEdit2);


        gridLayout_5->addWidget(frameSample2, 2, 0, 1, 1);

        frameSample3 = new QFrame(mainFrame);
        frameSample3->setObjectName(QStringLiteral("frameSample3"));
        frameSample3->setMinimumSize(QSize(0, 54));
        frameSample3->setMaximumSize(QSize(16777215, 54));
        frameSample3->setStyleSheet(QStringLiteral(""));
        horizontalLayout_6 = new QHBoxLayout(frameSample3);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, -1, 0);
        lbSampleNb3 = new QLabel(frameSample3);
        lbSampleNb3->setObjectName(QStringLiteral("lbSampleNb3"));
        lbSampleNb3->setMinimumSize(QSize(33, 52));
        lbSampleNb3->setMaximumSize(QSize(33, 52));
        lbSampleNb3->setFont(font);
        lbSampleNb3->setStyleSheet(QStringLiteral(""));
        lbSampleNb3->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lbSampleNb3);

        chkSampleEnable3 = new QCheckBox(frameSample3);
        chkSampleEnable3->setObjectName(QStringLiteral("chkSampleEnable3"));
        sizePolicy3.setHeightForWidth(chkSampleEnable3->sizePolicy().hasHeightForWidth());
        chkSampleEnable3->setSizePolicy(sizePolicy3);
        chkSampleEnable3->setMinimumSize(QSize(37, 52));
        chkSampleEnable3->setMaximumSize(QSize(37, 52));
        chkSampleEnable3->setFont(font);
        chkSampleEnable3->setStyleSheet(QStringLiteral(""));

        horizontalLayout_6->addWidget(chkSampleEnable3);

        pbSample3 = new QPushButton(frameSample3);
        pbSample3->setObjectName(QStringLiteral("pbSample3"));
        sizePolicy3.setHeightForWidth(pbSample3->sizePolicy().hasHeightForWidth());
        pbSample3->setSizePolicy(sizePolicy3);
        pbSample3->setMinimumSize(QSize(256, 52));
        pbSample3->setMaximumSize(QSize(256, 52));
        pbSample3->setFont(font);
        pbSample3->setStyleSheet(QStringLiteral(""));

        horizontalLayout_6->addWidget(pbSample3);

        pbSampleEdit3 = new QPushButton(frameSample3);
        pbSampleEdit3->setObjectName(QStringLiteral("pbSampleEdit3"));
        pbSampleEdit3->setMinimumSize(QSize(70, 36));
        pbSampleEdit3->setMaximumSize(QSize(70, 36));
        pbSampleEdit3->setStyleSheet(QStringLiteral(""));

        horizontalLayout_6->addWidget(pbSampleEdit3);


        gridLayout_5->addWidget(frameSample3, 3, 0, 1, 1);

        frameSample4 = new QFrame(mainFrame);
        frameSample4->setObjectName(QStringLiteral("frameSample4"));
        frameSample4->setMinimumSize(QSize(0, 54));
        frameSample4->setMaximumSize(QSize(16777215, 54));
        frameSample4->setStyleSheet(QStringLiteral(""));
        horizontalLayout_7 = new QHBoxLayout(frameSample4);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, -1, 0);
        lbSampleNb4 = new QLabel(frameSample4);
        lbSampleNb4->setObjectName(QStringLiteral("lbSampleNb4"));
        lbSampleNb4->setMinimumSize(QSize(33, 52));
        lbSampleNb4->setMaximumSize(QSize(33, 52));
        lbSampleNb4->setFont(font);
        lbSampleNb4->setStyleSheet(QStringLiteral(""));
        lbSampleNb4->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lbSampleNb4);

        chkSampleEnable4 = new QCheckBox(frameSample4);
        chkSampleEnable4->setObjectName(QStringLiteral("chkSampleEnable4"));
        sizePolicy3.setHeightForWidth(chkSampleEnable4->sizePolicy().hasHeightForWidth());
        chkSampleEnable4->setSizePolicy(sizePolicy3);
        chkSampleEnable4->setMinimumSize(QSize(37, 52));
        chkSampleEnable4->setMaximumSize(QSize(37, 52));
        chkSampleEnable4->setFont(font);
        chkSampleEnable4->setStyleSheet(QStringLiteral(""));

        horizontalLayout_7->addWidget(chkSampleEnable4);

        pbSample4 = new QPushButton(frameSample4);
        pbSample4->setObjectName(QStringLiteral("pbSample4"));
        sizePolicy3.setHeightForWidth(pbSample4->sizePolicy().hasHeightForWidth());
        pbSample4->setSizePolicy(sizePolicy3);
        pbSample4->setMinimumSize(QSize(256, 52));
        pbSample4->setMaximumSize(QSize(256, 52));
        pbSample4->setFont(font);
        pbSample4->setStyleSheet(QStringLiteral(""));

        horizontalLayout_7->addWidget(pbSample4);

        pbSampleEdit4 = new QPushButton(frameSample4);
        pbSampleEdit4->setObjectName(QStringLiteral("pbSampleEdit4"));
        pbSampleEdit4->setMinimumSize(QSize(70, 36));
        pbSampleEdit4->setMaximumSize(QSize(70, 36));
        pbSampleEdit4->setStyleSheet(QStringLiteral(""));

        horizontalLayout_7->addWidget(pbSampleEdit4);


        gridLayout_5->addWidget(frameSample4, 4, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_5, 1, 0, 1, 1);

        frameEnvelope = new QFrame(mainFrame);
        frameEnvelope->setObjectName(QStringLiteral("frameEnvelope"));
        frameEnvelope->setMinimumSize(QSize(128, 0));
        frameEnvelope->setMaximumSize(QSize(206, 16777215));
        frameEnvelope->setStyleSheet(QStringLiteral(""));
        frameEnvelope->setFrameShape(QFrame::StyledPanel);
        frameEnvelope->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frameEnvelope);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(6);
        gridLayout_4->setContentsMargins(0, 1, 0, 0);
        widget_5 = new QWidget(frameEnvelope);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(128, 54));
        widget_5->setMaximumSize(QSize(128, 54));
        widget_5->setStyleSheet(QLatin1String("border: 1px solid white;\n"
"background-color: transparent;"));
        gridLayout_12 = new QGridLayout(widget_5);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        gv4 = new QGraphicsView(widget_5);
        gv4->setObjectName(QStringLiteral("gv4"));
        gv4->setMinimumSize(QSize(0, 54));
        gv4->setMaximumSize(QSize(16777215, 54));

        gridLayout_12->addWidget(gv4, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget_5, 4, 0, 1, 1);

        widget_3 = new QWidget(frameEnvelope);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(128, 54));
        widget_3->setMaximumSize(QSize(128, 54));
        widget_3->setStyleSheet(QLatin1String("border: 1px solid white;\n"
"background-color: transparent;"));
        gridLayout_10 = new QGridLayout(widget_3);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        gv2 = new QGraphicsView(widget_3);
        gv2->setObjectName(QStringLiteral("gv2"));
        gv2->setMinimumSize(QSize(0, 54));
        gv2->setMaximumSize(QSize(16777215, 54));

        gridLayout_10->addWidget(gv2, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget_3, 2, 0, 1, 1);

        widget_4 = new QWidget(frameEnvelope);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(128, 54));
        widget_4->setMaximumSize(QSize(128, 54));
        widget_4->setStyleSheet(QLatin1String("border: 1px solid white;\n"
"background-color: transparent;"));
        gridLayout_11 = new QGridLayout(widget_4);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setHorizontalSpacing(0);
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        gv3 = new QGraphicsView(widget_4);
        gv3->setObjectName(QStringLiteral("gv3"));
        gv3->setMinimumSize(QSize(0, 54));
        gv3->setMaximumSize(QSize(16777215, 54));

        gridLayout_11->addWidget(gv3, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget_4, 3, 0, 1, 1);

        widget_2 = new QWidget(frameEnvelope);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(128, 54));
        widget_2->setMaximumSize(QSize(128, 54));
        widget_2->setStyleSheet(QLatin1String("border: 1px solid white;\n"
"background-color: transparent;"));
        gridLayout_9 = new QGridLayout(widget_2);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gv1 = new QGraphicsView(widget_2);
        gv1->setObjectName(QStringLiteral("gv1"));
        gv1->setMinimumSize(QSize(0, 54));
        gv1->setMaximumSize(QSize(16777215, 54));
        gv1->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(gv1, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget_2, 1, 0, 1, 1);

        fameEnvelopeTitle = new QFrame(frameEnvelope);
        fameEnvelopeTitle->setObjectName(QStringLiteral("fameEnvelopeTitle"));
        fameEnvelopeTitle->setMinimumSize(QSize(0, 26));
        fameEnvelopeTitle->setMaximumSize(QSize(16777215, 26));
        fameEnvelopeTitle->setStyleSheet(QStringLiteral(""));
        horizontalLayout_8 = new QHBoxLayout(fameEnvelopeTitle);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 1, 0, 1);
        horizontalSpacer_7 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        lbSection2 = new QLabel(fameEnvelopeTitle);
        lbSection2->setObjectName(QStringLiteral("lbSection2"));
        lbSection2->setMinimumSize(QSize(120, 24));
        lbSection2->setMaximumSize(QSize(120, 24));
        lbSection2->setFont(font2);
        lbSection2->setStyleSheet(QStringLiteral(""));
        lbSection2->setFrameShadow(QFrame::Plain);
        lbSection2->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lbSection2);

        horizontalSpacer_8 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        gridLayout_4->addWidget(fameEnvelopeTitle, 0, 0, 1, 1);


        gridLayout_3->addWidget(frameEnvelope, 1, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 3, 0, 1, 1);


        gridLayout->addWidget(mainFrame, 0, 0, 1, 1);

        QWidget::setTabOrder(pbBankA, pbBankB);
        QWidget::setTabOrder(pbBankB, pbBankC);
        QWidget::setTabOrder(pbBankC, pbBankD);
        QWidget::setTabOrder(pbBankD, pbFactory);
        QWidget::setTabOrder(pbFactory, pbCategory);
        QWidget::setTabOrder(pbCategory, chkSampleEnable1);
        QWidget::setTabOrder(chkSampleEnable1, pbSample1);
        QWidget::setTabOrder(pbSample1, chkSampleEnable2);
        QWidget::setTabOrder(chkSampleEnable2, pbSample2);
        QWidget::setTabOrder(pbSample2, chkSampleEnable3);
        QWidget::setTabOrder(chkSampleEnable3, pbSample3);
        QWidget::setTabOrder(pbSample3, chkSampleEnable4);
        QWidget::setTabOrder(chkSampleEnable4, pbSample4);
        QWidget::setTabOrder(pbSample4, pbAmpEdit);
        QWidget::setTabOrder(pbAmpEdit, gv4);
        QWidget::setTabOrder(gv4, gv2);
        QWidget::setTabOrder(gv2, gv3);
        QWidget::setTabOrder(gv3, gv1);

        retranslateUi(PresetBankForm);

        QMetaObject::connectSlotsByName(PresetBankForm);
    } // setupUi

    void retranslateUi(QWidget *PresetBankForm)
    {
        PresetBankForm->setWindowTitle(QApplication::translate("PresetBankForm", "Form", 0));
        pbFactory->setText(QApplication::translate("PresetBankForm", "FACTORY", 0));
        lbWidgetTitle->setText(QApplication::translate("PresetBankForm", "BANK A", 0));
        pbBankC->setText(QApplication::translate("PresetBankForm", "BANK C", 0));
        pbBankA->setText(QApplication::translate("PresetBankForm", "BANK A", 0));
        pbBankD->setText(QApplication::translate("PresetBankForm", "BANK D", 0));
        pbBankB->setText(QApplication::translate("PresetBankForm", "BANK B", 0));
        pbAmpEdit->setText(QApplication::translate("PresetBankForm", "SOUND EDIT", 0));
        pushButton_5->setText(QApplication::translate("PresetBankForm", "LOAD ART", 0));
        pushButton_6->setText(QApplication::translate("PresetBankForm", "DIMENSION", 0));
        pbInsertEFX->setText(QApplication::translate("PresetBankForm", "INSERT EFX", 0));
        pbMasterEFX->setText(QApplication::translate("PresetBankForm", "MASTER EFX", 0));
        pbEqualizer->setText(QApplication::translate("PresetBankForm", "EQUALIZER", 0));
        pbCategory->setText(QApplication::translate("PresetBankForm", "CATEGORY", 0));
        lbCategoryNb->setText(QApplication::translate("PresetBankForm", "001", 0));
        lbCategoryName->setText(QApplication::translate("PresetBankForm", "Piano Layers & Strings", 0));
        lb0->setText(QApplication::translate("PresetBankForm", "-0", 0));
        lb1->setText(QApplication::translate("PresetBankForm", "-3", 0));
        lb2->setText(QApplication::translate("PresetBankForm", "-6", 0));
        lb3->setText(QApplication::translate("PresetBankForm", "-9", 0));
        lb4->setText(QApplication::translate("PresetBankForm", "-12", 0));
        lb5->setText(QApplication::translate("PresetBankForm", "-15", 0));
        lb6->setText(QApplication::translate("PresetBankForm", "-18", 0));
        lb7->setText(QApplication::translate("PresetBankForm", "-21", 0));
        lb8->setText(QApplication::translate("PresetBankForm", "-24", 0));
        lb9->setText(QApplication::translate("PresetBankForm", "-27", 0));
        lb10->setText(QApplication::translate("PresetBankForm", "-30", 0));
        lbVolumeMain->setText(QApplication::translate("PresetBankForm", "MAIN", 0));
        lb11->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb12->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb13->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb14->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb15->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb16->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb17->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb18->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb19->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb20->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb21->setText(QApplication::translate("PresetBankForm", "-", 0));
        lbVolumeL->setText(QApplication::translate("PresetBankForm", "L", 0));
        lbVolumeR->setText(QApplication::translate("PresetBankForm", "R", 0));
        lb31->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb32->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb22->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb23->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb24->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb25->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb26->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb27->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb28->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb29->setText(QApplication::translate("PresetBankForm", "-", 0));
        lb30->setText(QApplication::translate("PresetBankForm", "-", 0));
        chkMuteMain->setText(QString());
        lbSection1->setText(QApplication::translate("PresetBankForm", "DIMENSION", 0));
        lbSection3->setText(QApplication::translate("PresetBankForm", "MULTISAMPLES", 0));
        lbSampleNb1->setText(QApplication::translate("PresetBankForm", "1", 0));
        chkSampleEnable1->setText(QString());
        pbSample1->setText(QApplication::translate("PresetBankForm", "001: White Grand Piano", 0));
        pbSampleEdit1->setText(QApplication::translate("PresetBankForm", "EDIT", 0));
        lbSampleNb2->setText(QApplication::translate("PresetBankForm", "2", 0));
        chkSampleEnable2->setText(QString());
        pbSample2->setText(QApplication::translate("PresetBankForm", "002: Platino Strings", 0));
        pbSampleEdit2->setText(QApplication::translate("PresetBankForm", "EDIT", 0));
        lbSampleNb3->setText(QApplication::translate("PresetBankForm", "3", 0));
        chkSampleEnable3->setText(QString());
        pbSample3->setText(QApplication::translate("PresetBankForm", "001: String Ensemble", 0));
        pbSampleEdit3->setText(QApplication::translate("PresetBankForm", "EDIT", 0));
        lbSampleNb4->setText(QApplication::translate("PresetBankForm", "4", 0));
        chkSampleEnable4->setText(QString());
        pbSample4->setText(QApplication::translate("PresetBankForm", "009: Analog Wave", 0));
        pbSampleEdit4->setText(QApplication::translate("PresetBankForm", "EDIT", 0));
        lbSection2->setText(QApplication::translate("PresetBankForm", "ENVELOPE", 0));
    } // retranslateUi

};

namespace Ui {
    class PresetBankForm: public Ui_PresetBankForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESETBANKFORM_H
