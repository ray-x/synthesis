/********************************************************************************
** Form generated from reading UI file 'effectseditform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EFFECTSEDITFORM_H
#define UI_EFFECTSEDITFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
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

class Ui_EffectsEditForm
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *mainFrame;
    QGridLayout *gridLayout_5;
    QFrame *framecontrolButtons;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_5;
    QFrame *frameEqualizer;
    QGridLayout *gridLayout_3;
    QFrame *frameLevel;
    QGridLayout *gridLayout;
    QLabel *lb32;
    QLabel *lb63;
    QLabel *lb125;
    QLabel *lb250;
    QLabel *lb500;
    QLabel *lb1K;
    QLabel *lb8K;
    QLabel *lb16K;
    QSpacerItem *horizontalSpacer_14;
    VerticalLevelBar *bar32;
    QSpacerItem *horizontalSpacer_10;
    VerticalLevelBar *bar63;
    QSpacerItem *horizontalSpacer_5;
    VerticalLevelBar *bar125;
    QSpacerItem *horizontalSpacer_6;
    VerticalLevelBar *bar250;
    QSpacerItem *horizontalSpacer_7;
    VerticalLevelBar *bar500;
    QSpacerItem *horizontalSpacer_8;
    VerticalLevelBar *bar1K;
    QSpacerItem *horizontalSpacer_9;
    VerticalLevelBar *bar8K;
    QSpacerItem *horizontalSpacer_11;
    VerticalLevelBar *bar16K;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *lb8;
    QLabel *lb9;
    QLabel *lb10;
    QLabel *lb11;
    QLabel *lb12;
    QLabel *lb13;
    QLabel *lb14;
    QVBoxLayout *verticalLayout_6;
    QLabel *lb8_;
    QLabel *lb9_;
    QLabel *lb10_;
    QLabel *lb11_;
    QLabel *lb12_;
    QLabel *lb13_;
    QLabel *lb14_;
    QVBoxLayout *verticalLayout_7;
    QLabel *lb1;
    QLabel *lb2;
    QLabel *lb3;
    QLabel *lb4;
    QLabel *lb5;
    QLabel *lb6;
    QLabel *lb7;
    QVBoxLayout *verticalLayout_8;
    QLabel *lb1_;
    QLabel *lb2_;
    QLabel *lb3_;
    QLabel *lb4_;
    QLabel *lb5_;
    QLabel *lb6_;
    QLabel *lb7_;
    QFrame *frameKnob;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbKnobNameInput;
    QDial *dialInput;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbKnobNameOutput;
    QDial *dialOutput;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbCancel;
    QPushButton *pbSave;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbCategory;
    QLabel *lbCategoryName;
    QFrame *frameTop;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *lbWidgetTitle;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_12;

    void setupUi(QWidget *EffectsEditForm)
    {
        if (EffectsEditForm->objectName().isEmpty())
            EffectsEditForm->setObjectName(QStringLiteral("EffectsEditForm"));
        EffectsEditForm->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EffectsEditForm->sizePolicy().hasHeightForWidth());
        EffectsEditForm->setSizePolicy(sizePolicy);
        EffectsEditForm->setMinimumSize(QSize(800, 480));
        EffectsEditForm->setMaximumSize(QSize(800, 480));
        EffectsEditForm->setStyleSheet(QLatin1String("QWidget{\n"
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
"QPushButton:focus{ background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(212, 114, 0, 255), stop:0.5 rgba(255, 137, 0, 255), stop:1 rgba(212, 114, 0, 255));}\n"
"\n"
"QPushButton:focus:selected{ background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(212, 114, 0, 255), stop:0.5 rgba(255, 137, 0, 255), stop:1 rgba(212, 114, 0, 255));}\n"
"\n"
"#lbWidgetTitle{\n"
"    border: 1px solid black;\n"
""
                        "    background-color:rgb(16, 97, 114);\n"
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
"VerticalLevelBar QWidget{\n"
"background-color: black;\n"
"border: 2px solid rgb(167, 174, 169);\n"
"}\n"
"\n"
"#bar32,#bar63,#bar125,#bar250,#bar500,#bar1K,#bar8K,#bar16K{\n"
"background-color: black;\n"
"border: 2px solid rgb(167, 174, 169);\n"
"}\n"
"\n"
"#lb1,#lb2,#lb3,#lb4,#lb5,#lb6,#lb7,#lb8,#lb9,#lb10,#lb11,#lb12,#lb13,#lb14{\n"
"color : white;\n"
"font-family: \"Electron\";\n"
"font-size:11pt;\n"
"}\n"
"\n"
"#lb1_,#lb2_,#lb3_,#lb4_,#lb5_,#lb6_,#lb7_,#lb8_,#lb9_,#lb10_,#lb11_,#lb12_,#lb13_,#lb14_{\n"
"color : white;\n"
"font-family: \"Electron\";\n"
"}\n"
"\n"
"#lb32,#lb63,#lb250,#lb500,#lb1K,#lb8K,#lb16K,#lb125{\n"
"color : white;\n"
"font-family: \""
                        "Electron\";\n"
"font-size:10pt;\n"
"}\n"
"\n"
"#frameLevel{\n"
"border:none;\n"
"background-color:rgb(49, 51, 48);\n"
"}\n"
"\n"
"#frameEqualizer{\n"
"background-color:rgb(49, 51, 48);\n"
"border: 1px solid rgb(110, 110, 110);\n"
"}\n"
"\n"
"#framecontrolButtons{\n"
"background-color:rgb(16, 97, 114);\n"
"border: 1px solid black;\n"
"}\n"
"\n"
"#lbKnobNameOutput, #lbKnobNameInput{\n"
"color: white;\n"
"border: none;\n"
"font-size:12pt;\n"
"}\n"
"\n"
"#frameKnob{\n"
"border:none;\n"
"border-bottom: 1px solid rgb(74, 76, 74);\n"
"background-color:rgb(49, 51, 48)\n"
"}"));
        horizontalLayout = new QHBoxLayout(EffectsEditForm);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(EffectsEditForm);
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
        gridLayout_5 = new QGridLayout(mainFrame);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(6);
        framecontrolButtons = new QFrame(mainFrame);
        framecontrolButtons->setObjectName(QStringLiteral("framecontrolButtons"));
        framecontrolButtons->setStyleSheet(QStringLiteral(""));
        framecontrolButtons->setFrameShape(QFrame::StyledPanel);
        framecontrolButtons->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(framecontrolButtons);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_13 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_13, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(32, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer, 3, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 1, 3, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_16, 2, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_5, 6, 1, 1, 1);

        frameEqualizer = new QFrame(framecontrolButtons);
        frameEqualizer->setObjectName(QStringLiteral("frameEqualizer"));
        frameEqualizer->setStyleSheet(QStringLiteral(""));
        frameEqualizer->setFrameShape(QFrame::StyledPanel);
        frameEqualizer->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frameEqualizer);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 5, 0, 0);
        frameLevel = new QFrame(frameEqualizer);
        frameLevel->setObjectName(QStringLiteral("frameLevel"));
        frameLevel->setMinimumSize(QSize(0, 200));
        frameLevel->setMaximumSize(QSize(16777215, 200));
        frameLevel->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(frameLevel);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(4);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 18);
        lb32 = new QLabel(frameLevel);
        lb32->setObjectName(QStringLiteral("lb32"));
        lb32->setMaximumSize(QSize(22, 22));
        QFont font1;
        font1.setFamily(QStringLiteral("Electron"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(68);
        lb32->setFont(font1);
        lb32->setStyleSheet(QStringLiteral(""));
        lb32->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb32, 0, 3, 1, 1);

        lb63 = new QLabel(frameLevel);
        lb63->setObjectName(QStringLiteral("lb63"));
        lb63->setMaximumSize(QSize(22, 22));
        lb63->setFont(font1);
        lb63->setStyleSheet(QStringLiteral(""));
        lb63->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb63, 0, 5, 1, 1);

        lb125 = new QLabel(frameLevel);
        lb125->setObjectName(QStringLiteral("lb125"));
        lb125->setMaximumSize(QSize(22, 22));
        lb125->setFont(font1);
        lb125->setStyleSheet(QStringLiteral(""));
        lb125->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb125, 0, 7, 1, 1);

        lb250 = new QLabel(frameLevel);
        lb250->setObjectName(QStringLiteral("lb250"));
        lb250->setMaximumSize(QSize(22, 22));
        lb250->setFont(font1);
        lb250->setStyleSheet(QStringLiteral(""));
        lb250->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb250, 0, 9, 1, 1);

        lb500 = new QLabel(frameLevel);
        lb500->setObjectName(QStringLiteral("lb500"));
        lb500->setMaximumSize(QSize(22, 22));
        lb500->setFont(font1);
        lb500->setStyleSheet(QStringLiteral(""));
        lb500->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb500, 0, 11, 1, 1);

        lb1K = new QLabel(frameLevel);
        lb1K->setObjectName(QStringLiteral("lb1K"));
        lb1K->setMaximumSize(QSize(22, 22));
        lb1K->setFont(font1);
        lb1K->setStyleSheet(QStringLiteral(""));
        lb1K->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb1K, 0, 13, 1, 1);

        lb8K = new QLabel(frameLevel);
        lb8K->setObjectName(QStringLiteral("lb8K"));
        lb8K->setMaximumSize(QSize(22, 22));
        lb8K->setFont(font1);
        lb8K->setStyleSheet(QStringLiteral(""));
        lb8K->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb8K, 0, 15, 1, 1);

        lb16K = new QLabel(frameLevel);
        lb16K->setObjectName(QStringLiteral("lb16K"));
        lb16K->setMaximumSize(QSize(22, 22));
        lb16K->setFont(font1);
        lb16K->setStyleSheet(QStringLiteral(""));
        lb16K->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb16K, 0, 17, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(90, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 1, 0, 1, 1);

        bar32 = new VerticalLevelBar(frameLevel);
        bar32->setObjectName(QStringLiteral("bar32"));
        bar32->setMinimumSize(QSize(24, 0));
        bar32->setMaximumSize(QSize(45, 159));
        bar32->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(bar32, 1, 3, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(21, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 1, 4, 1, 1);

        bar63 = new VerticalLevelBar(frameLevel);
        bar63->setObjectName(QStringLiteral("bar63"));
        bar63->setMinimumSize(QSize(24, 0));
        bar63->setMaximumSize(QSize(45, 159));
        bar63->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(bar63, 1, 5, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(21, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 6, 1, 1);

        bar125 = new VerticalLevelBar(frameLevel);
        bar125->setObjectName(QStringLiteral("bar125"));
        bar125->setMinimumSize(QSize(24, 0));
        bar125->setMaximumSize(QSize(45, 159));
        bar125->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(bar125, 1, 7, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(21, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 8, 1, 1);

        bar250 = new VerticalLevelBar(frameLevel);
        bar250->setObjectName(QStringLiteral("bar250"));
        bar250->setMinimumSize(QSize(24, 0));
        bar250->setMaximumSize(QSize(45, 159));
        bar250->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(bar250, 1, 9, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(21, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 10, 1, 1);

        bar500 = new VerticalLevelBar(frameLevel);
        bar500->setObjectName(QStringLiteral("bar500"));
        bar500->setMinimumSize(QSize(24, 0));
        bar500->setMaximumSize(QSize(45, 159));
        bar500->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(bar500, 1, 11, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(21, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 1, 12, 1, 1);

        bar1K = new VerticalLevelBar(frameLevel);
        bar1K->setObjectName(QStringLiteral("bar1K"));
        bar1K->setMinimumSize(QSize(24, 0));
        bar1K->setMaximumSize(QSize(45, 159));
        bar1K->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(bar1K, 1, 13, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(21, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 1, 14, 1, 1);

        bar8K = new VerticalLevelBar(frameLevel);
        bar8K->setObjectName(QStringLiteral("bar8K"));
        bar8K->setMinimumSize(QSize(24, 0));
        bar8K->setMaximumSize(QSize(45, 159));
        bar8K->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(bar8K, 1, 15, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(21, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 1, 16, 1, 1);

        bar16K = new VerticalLevelBar(frameLevel);
        bar16K->setObjectName(QStringLiteral("bar16K"));
        bar16K->setMinimumSize(QSize(24, 0));
        bar16K->setMaximumSize(QSize(45, 159));
        bar16K->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(bar16K, 1, 17, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(90, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 20, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lb8 = new QLabel(frameLevel);
        lb8->setObjectName(QStringLiteral("lb8"));
        lb8->setMaximumSize(QSize(45, 16777215));
        QFont font2;
        font2.setFamily(QStringLiteral("Electron"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(68);
        lb8->setFont(font2);
        lb8->setStyleSheet(QStringLiteral(""));
        lb8->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lb8);

        lb9 = new QLabel(frameLevel);
        lb9->setObjectName(QStringLiteral("lb9"));
        lb9->setMaximumSize(QSize(45, 16777215));
        lb9->setFont(font2);
        lb9->setStyleSheet(QStringLiteral(""));
        lb9->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lb9);

        lb10 = new QLabel(frameLevel);
        lb10->setObjectName(QStringLiteral("lb10"));
        lb10->setMaximumSize(QSize(45, 16777215));
        lb10->setFont(font2);
        lb10->setStyleSheet(QStringLiteral(""));
        lb10->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lb10);

        lb11 = new QLabel(frameLevel);
        lb11->setObjectName(QStringLiteral("lb11"));
        lb11->setMaximumSize(QSize(45, 16777215));
        lb11->setFont(font2);
        lb11->setStyleSheet(QStringLiteral(""));
        lb11->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lb11);

        lb12 = new QLabel(frameLevel);
        lb12->setObjectName(QStringLiteral("lb12"));
        lb12->setMaximumSize(QSize(45, 16777215));
        lb12->setFont(font2);
        lb12->setStyleSheet(QStringLiteral(""));
        lb12->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lb12);

        lb13 = new QLabel(frameLevel);
        lb13->setObjectName(QStringLiteral("lb13"));
        lb13->setMaximumSize(QSize(45, 16777215));
        lb13->setFont(font2);
        lb13->setStyleSheet(QStringLiteral(""));
        lb13->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lb13);

        lb14 = new QLabel(frameLevel);
        lb14->setObjectName(QStringLiteral("lb14"));
        lb14->setMaximumSize(QSize(45, 16777215));
        lb14->setFont(font2);
        lb14->setStyleSheet(QStringLiteral(""));
        lb14->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lb14);


        gridLayout->addLayout(verticalLayout_5, 1, 19, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        lb8_ = new QLabel(frameLevel);
        lb8_->setObjectName(QStringLiteral("lb8_"));
        lb8_->setMaximumSize(QSize(10, 16777215));
        QFont font3;
        font3.setFamily(QStringLiteral("Electron"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(68);
        lb8_->setFont(font3);
        lb8_->setStyleSheet(QStringLiteral(""));

        verticalLayout_6->addWidget(lb8_);

        lb9_ = new QLabel(frameLevel);
        lb9_->setObjectName(QStringLiteral("lb9_"));
        lb9_->setMaximumSize(QSize(10, 16777215));
        lb9_->setFont(font3);
        lb9_->setStyleSheet(QStringLiteral(""));

        verticalLayout_6->addWidget(lb9_);

        lb10_ = new QLabel(frameLevel);
        lb10_->setObjectName(QStringLiteral("lb10_"));
        lb10_->setMaximumSize(QSize(10, 16777215));
        lb10_->setFont(font3);
        lb10_->setStyleSheet(QStringLiteral(""));

        verticalLayout_6->addWidget(lb10_);

        lb11_ = new QLabel(frameLevel);
        lb11_->setObjectName(QStringLiteral("lb11_"));
        lb11_->setMaximumSize(QSize(10, 16777215));
        lb11_->setFont(font3);
        lb11_->setStyleSheet(QStringLiteral(""));

        verticalLayout_6->addWidget(lb11_);

        lb12_ = new QLabel(frameLevel);
        lb12_->setObjectName(QStringLiteral("lb12_"));
        lb12_->setMaximumSize(QSize(10, 16777215));
        lb12_->setFont(font3);
        lb12_->setStyleSheet(QStringLiteral(""));

        verticalLayout_6->addWidget(lb12_);

        lb13_ = new QLabel(frameLevel);
        lb13_->setObjectName(QStringLiteral("lb13_"));
        lb13_->setMaximumSize(QSize(10, 16777215));
        lb13_->setFont(font3);
        lb13_->setStyleSheet(QStringLiteral(""));

        verticalLayout_6->addWidget(lb13_);

        lb14_ = new QLabel(frameLevel);
        lb14_->setObjectName(QStringLiteral("lb14_"));
        lb14_->setMaximumSize(QSize(10, 16777215));
        lb14_->setFont(font3);
        lb14_->setStyleSheet(QStringLiteral(""));

        verticalLayout_6->addWidget(lb14_);


        gridLayout->addLayout(verticalLayout_6, 1, 18, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        lb1 = new QLabel(frameLevel);
        lb1->setObjectName(QStringLiteral("lb1"));
        lb1->setMaximumSize(QSize(45, 16777215));
        lb1->setFont(font2);
        lb1->setStyleSheet(QStringLiteral(""));
        lb1->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lb1);

        lb2 = new QLabel(frameLevel);
        lb2->setObjectName(QStringLiteral("lb2"));
        lb2->setMaximumSize(QSize(45, 16777215));
        lb2->setFont(font2);
        lb2->setStyleSheet(QStringLiteral(""));
        lb2->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lb2);

        lb3 = new QLabel(frameLevel);
        lb3->setObjectName(QStringLiteral("lb3"));
        lb3->setMaximumSize(QSize(45, 16777215));
        lb3->setFont(font2);
        lb3->setStyleSheet(QStringLiteral(""));
        lb3->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lb3);

        lb4 = new QLabel(frameLevel);
        lb4->setObjectName(QStringLiteral("lb4"));
        lb4->setMaximumSize(QSize(45, 16777215));
        lb4->setFont(font2);
        lb4->setStyleSheet(QStringLiteral(""));
        lb4->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lb4);

        lb5 = new QLabel(frameLevel);
        lb5->setObjectName(QStringLiteral("lb5"));
        lb5->setMaximumSize(QSize(45, 16777215));
        lb5->setFont(font2);
        lb5->setStyleSheet(QStringLiteral(""));
        lb5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lb5);

        lb6 = new QLabel(frameLevel);
        lb6->setObjectName(QStringLiteral("lb6"));
        lb6->setMaximumSize(QSize(45, 16777215));
        lb6->setFont(font2);
        lb6->setStyleSheet(QStringLiteral(""));
        lb6->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lb6);

        lb7 = new QLabel(frameLevel);
        lb7->setObjectName(QStringLiteral("lb7"));
        lb7->setMaximumSize(QSize(45, 16777215));
        lb7->setFont(font2);
        lb7->setStyleSheet(QStringLiteral(""));
        lb7->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lb7);


        gridLayout->addLayout(verticalLayout_7, 1, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        lb1_ = new QLabel(frameLevel);
        lb1_->setObjectName(QStringLiteral("lb1_"));
        lb1_->setMaximumSize(QSize(10, 16777215));
        lb1_->setFont(font3);
        lb1_->setStyleSheet(QStringLiteral(""));
        lb1_->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(lb1_);

        lb2_ = new QLabel(frameLevel);
        lb2_->setObjectName(QStringLiteral("lb2_"));
        lb2_->setMaximumSize(QSize(10, 16777215));
        lb2_->setFont(font3);
        lb2_->setStyleSheet(QStringLiteral(""));
        lb2_->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(lb2_);

        lb3_ = new QLabel(frameLevel);
        lb3_->setObjectName(QStringLiteral("lb3_"));
        lb3_->setMaximumSize(QSize(10, 16777215));
        lb3_->setFont(font3);
        lb3_->setStyleSheet(QStringLiteral(""));
        lb3_->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(lb3_);

        lb4_ = new QLabel(frameLevel);
        lb4_->setObjectName(QStringLiteral("lb4_"));
        lb4_->setMaximumSize(QSize(10, 16777215));
        lb4_->setFont(font3);
        lb4_->setStyleSheet(QStringLiteral(""));
        lb4_->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(lb4_);

        lb5_ = new QLabel(frameLevel);
        lb5_->setObjectName(QStringLiteral("lb5_"));
        lb5_->setMaximumSize(QSize(10, 16777215));
        lb5_->setFont(font3);
        lb5_->setStyleSheet(QStringLiteral(""));
        lb5_->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(lb5_);

        lb6_ = new QLabel(frameLevel);
        lb6_->setObjectName(QStringLiteral("lb6_"));
        lb6_->setMaximumSize(QSize(10, 16777215));
        lb6_->setFont(font3);
        lb6_->setStyleSheet(QStringLiteral(""));
        lb6_->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(lb6_);

        lb7_ = new QLabel(frameLevel);
        lb7_->setObjectName(QStringLiteral("lb7_"));
        lb7_->setMaximumSize(QSize(10, 16777215));
        lb7_->setFont(font3);
        lb7_->setStyleSheet(QStringLiteral(""));
        lb7_->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(lb7_);


        gridLayout->addLayout(verticalLayout_8, 1, 2, 1, 1);

        lb63->raise();
        lb16K->raise();
        bar32->raise();
        bar1K->raise();
        bar63->raise();
        lb500->raise();
        bar500->raise();
        lb1K->raise();
        bar125->raise();
        lb125->raise();
        lb8K->raise();
        bar250->raise();
        lb32->raise();
        bar16K->raise();
        lb250->raise();
        bar8K->raise();

        gridLayout_3->addWidget(frameLevel, 1, 0, 1, 1);

        frameKnob = new QFrame(frameEqualizer);
        frameKnob->setObjectName(QStringLiteral("frameKnob"));
        frameKnob->setMinimumSize(QSize(0, 80));
        frameKnob->setMaximumSize(QSize(16777215, 80));
        frameKnob->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(frameKnob);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(3, 0, 3, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lbKnobNameInput = new QLabel(frameKnob);
        lbKnobNameInput->setObjectName(QStringLiteral("lbKnobNameInput"));
        QFont font4;
        font4.setFamily(QStringLiteral("Open Sans"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(68);
        lbKnobNameInput->setFont(font4);
        lbKnobNameInput->setStyleSheet(QStringLiteral(""));
        lbKnobNameInput->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbKnobNameInput);

        dialInput = new QDial(frameKnob);
        dialInput->setObjectName(QStringLiteral("dialInput"));
        dialInput->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(dialInput);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lbKnobNameOutput = new QLabel(frameKnob);
        lbKnobNameOutput->setObjectName(QStringLiteral("lbKnobNameOutput"));
        lbKnobNameOutput->setFont(font4);
        lbKnobNameOutput->setStyleSheet(QStringLiteral(""));
        lbKnobNameOutput->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lbKnobNameOutput);

        dialOutput = new QDial(frameKnob);
        dialOutput->setObjectName(QStringLiteral("dialOutput"));
        dialOutput->setTracking(true);

        verticalLayout_3->addWidget(dialOutput);


        gridLayout_2->addLayout(verticalLayout_3, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);


        gridLayout_3->addWidget(frameKnob, 0, 0, 1, 1);


        gridLayout_4->addWidget(frameEqualizer, 1, 1, 5, 1);

        pbCancel = new QPushButton(framecontrolButtons);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));
        sizePolicy.setHeightForWidth(pbCancel->sizePolicy().hasHeightForWidth());
        pbCancel->setSizePolicy(sizePolicy);
        pbCancel->setMinimumSize(QSize(126, 58));
        pbCancel->setMaximumSize(QSize(126, 58));
        pbCancel->setFont(font);
        pbCancel->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(pbCancel, 4, 3, 1, 1);

        pbSave = new QPushButton(framecontrolButtons);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        sizePolicy.setHeightForWidth(pbSave->sizePolicy().hasHeightForWidth());
        pbSave->setSizePolicy(sizePolicy);
        pbSave->setMinimumSize(QSize(126, 58));
        pbSave->setMaximumSize(QSize(126, 58));
        pbSave->setFont(font);
        pbSave->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(pbSave, 2, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 5, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_6, 0, 1, 1, 1);


        gridLayout_5->addWidget(framecontrolButtons, 2, 0, 1, 1);

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

        lbCategoryName = new QLabel(mainFrame);
        lbCategoryName->setObjectName(QStringLiteral("lbCategoryName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbCategoryName->sizePolicy().hasHeightForWidth());
        lbCategoryName->setSizePolicy(sizePolicy2);
        lbCategoryName->setMinimumSize(QSize(0, 42));
        lbCategoryName->setMaximumSize(QSize(16777215, 42));
        lbCategoryName->setFont(font);
        lbCategoryName->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(lbCategoryName);


        gridLayout_5->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        frameTop = new QFrame(mainFrame);
        frameTop->setObjectName(QStringLiteral("frameTop"));
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

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_12, 0, 1, 1, 1);


        gridLayout_5->addWidget(frameTop, 0, 0, 1, 1);


        horizontalLayout->addWidget(mainFrame);


        retranslateUi(EffectsEditForm);

        QMetaObject::connectSlotsByName(EffectsEditForm);
    } // setupUi

    void retranslateUi(QWidget *EffectsEditForm)
    {
        EffectsEditForm->setWindowTitle(QApplication::translate("EffectsEditForm", "Form", 0));
        lb32->setText(QApplication::translate("EffectsEditForm", "32", 0));
        lb63->setText(QApplication::translate("EffectsEditForm", "63", 0));
        lb125->setText(QApplication::translate("EffectsEditForm", "125", 0));
        lb250->setText(QApplication::translate("EffectsEditForm", "250", 0));
        lb500->setText(QApplication::translate("EffectsEditForm", "500", 0));
        lb1K->setText(QApplication::translate("EffectsEditForm", "1K", 0));
        lb8K->setText(QApplication::translate("EffectsEditForm", "8K", 0));
        lb16K->setText(QApplication::translate("EffectsEditForm", "16K", 0));
        lb8->setText(QApplication::translate("EffectsEditForm", "24", 0));
        lb9->setText(QApplication::translate("EffectsEditForm", "16", 0));
        lb10->setText(QApplication::translate("EffectsEditForm", "8", 0));
        lb11->setText(QApplication::translate("EffectsEditForm", "0", 0));
        lb12->setText(QApplication::translate("EffectsEditForm", "8", 0));
        lb13->setText(QApplication::translate("EffectsEditForm", "16", 0));
        lb14->setText(QApplication::translate("EffectsEditForm", "24", 0));
        lb8_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lb9_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lb10_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lb11_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lb12_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lb13_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lb14_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lb1->setText(QApplication::translate("EffectsEditForm", "24", 0));
        lb2->setText(QApplication::translate("EffectsEditForm", "16", 0));
        lb3->setText(QApplication::translate("EffectsEditForm", "8", 0));
        lb4->setText(QApplication::translate("EffectsEditForm", "0", 0));
        lb5->setText(QApplication::translate("EffectsEditForm", "8", 0));
        lb6->setText(QApplication::translate("EffectsEditForm", "16", 0));
        lb7->setText(QApplication::translate("EffectsEditForm", "24", 0));
        lb1_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lb2_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lb3_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lb4_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lb5_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lb6_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lb7_->setText(QApplication::translate("EffectsEditForm", "-", 0));
        lbKnobNameInput->setText(QApplication::translate("EffectsEditForm", "INPUT", 0));
        lbKnobNameOutput->setText(QApplication::translate("EffectsEditForm", "OUTPUT", 0));
        pbCancel->setText(QApplication::translate("EffectsEditForm", "CANCEL", 0));
        pbSave->setText(QApplication::translate("EffectsEditForm", "SAVE", 0));
        lbCategory->setText(QApplication::translate("EffectsEditForm", "EFFECTS", 0));
        lbCategoryName->setText(QApplication::translate("EffectsEditForm", "GRAPHIC EQUALIZER", 0));
        lbWidgetTitle->setText(QApplication::translate("EffectsEditForm", "EFFECT EDIT", 0));
    } // retranslateUi

};

namespace Ui {
    class EffectsEditForm: public Ui_EffectsEditForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EFFECTSEDITFORM_H
