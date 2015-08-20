/********************************************************************************
** Form generated from reading UI file 'soundsplitform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOUNDSPLITFORM_H
#define UI_SOUNDSPLITFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "piano.h"

QT_BEGIN_NAMESPACE

class Ui_SoundSplitForm
{
public:
    QGridLayout *gridLayout;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_2;
    QFrame *frameTop;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *lbWidgetTitle;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_12;
    QFrame *frameSound1;
    QGridLayout *gridLayout_4;
    QFrame *frameRighttKey1;
    QGridLayout *gridLayout_3;
    QLabel *lbRightKey1;
    QFrame *frameLeftKey1;
    QGridLayout *gridLayout_2;
    QLabel *lbLeftKey1;
    QLabel *lbSoundName1;
    QLabel *lbCenterKey1;
    Piano *widget;
    QFrame *frameSound2;
    QGridLayout *gridLayout_5;
    QFrame *frameRighttKey2;
    QGridLayout *gridLayout_6;
    QLabel *lbRightKey2;
    QLabel *lbCenterKey2;
    QFrame *frameLeftKey2;
    QGridLayout *gridLayout_8;
    QLabel *lbLeftKey2;
    Piano *widget_2;
    QLabel *lbSoundName2;
    QFrame *frameSound3;
    QGridLayout *gridLayout_9;
    QFrame *frameLeftKey3;
    QGridLayout *gridLayout_11;
    QLabel *lbLeftKey3;
    QLabel *lbSoundName3;
    QFrame *frameRighttKey3;
    QGridLayout *gridLayout_10;
    QLabel *lbRightKey3;
    QLabel *lbCenterKey3;
    Piano *widget_3;
    QFrame *frameSound4;
    QGridLayout *gridLayout_12;
    QFrame *frameRighttKey4;
    QGridLayout *gridLayout_13;
    QLabel *lbRightKey4;
    QFrame *frameLeftKey4;
    QGridLayout *gridLayout_14;
    QLabel *lbLeftKey4;
    QLabel *lbSoundName4;
    QLabel *lbCenterKey4;
    Piano *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbCancel;
    QPushButton *pbSave;

    void setupUi(QWidget *SoundSplitForm)
    {
        if (SoundSplitForm->objectName().isEmpty())
            SoundSplitForm->setObjectName(QStringLiteral("SoundSplitForm"));
        SoundSplitForm->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SoundSplitForm->sizePolicy().hasHeightForWidth());
        SoundSplitForm->setSizePolicy(sizePolicy);
        SoundSplitForm->setMinimumSize(QSize(800, 480));
        SoundSplitForm->setMaximumSize(QSize(800, 480));
        SoundSplitForm->setStyleSheet(QLatin1String("QWidget{\n"
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
"#lbSoundName1, #lbSoundName2, #lbSoundName3, #lbSoundName4,\n"
"#lbCenterKey1, #lbCenterKey2, #lbCenterKey3, #lbCenterKey4{\n"
"color:white;\n"
"border-top: 1px solid rgba(255, 255, 255, 100);\n"
"font-size:12pt;\n"
"}\n"
"\n"
"#frameSound1, #frameSound2, #frameSound3, #frameSound4{\n"
"border:none;\n"
"background-color:rgb(12, 94, 111);\n"
"}\n"
"\n"
"#frameLeftKey1, #frameLeftKey2, #frameLeftKey3, #frameLeftKey4{\n"
"border-top : 1px solid rgba(255, 255, 255, 100);\n"
"border-left : 1px solid rgba(255, 255, 255"
                        ", 100);\n"
"}\n"
"\n"
"#frameRighttKey1, #frameRighttKey2, #frameRighttKey3, #frameRighttKey4{\n"
"border-top: 1px solid rgba(255, 255, 255, 100);\n"
"}\n"
"\n"
"#lbLeftKey1, #lbLeftKey2, #lbLeftKey3, #lbLeftKey4, \n"
"#lbRightKey1, #lbRightKey2, #lbRightKey3, #lbRightKey4{\n"
"border:1px solid black;\n"
"color: white;\n"
"background-color: rgb(77, 79, 78)\n"
"}\n"
""));
        gridLayout = new QGridLayout(SoundSplitForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(SoundSplitForm);
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
        verticalLayout_2 = new QVBoxLayout(mainFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
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


        verticalLayout_2->addWidget(frameTop);

        frameSound1 = new QFrame(mainFrame);
        frameSound1->setObjectName(QStringLiteral("frameSound1"));
        frameSound1->setStyleSheet(QStringLiteral(""));
        frameSound1->setFrameShape(QFrame::StyledPanel);
        frameSound1->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frameSound1);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(5, 5, 0, 20);
        frameRighttKey1 = new QFrame(frameSound1);
        frameRighttKey1->setObjectName(QStringLiteral("frameRighttKey1"));
        sizePolicy.setHeightForWidth(frameRighttKey1->sizePolicy().hasHeightForWidth());
        frameRighttKey1->setSizePolicy(sizePolicy);
        frameRighttKey1->setMinimumSize(QSize(86, 71));
        frameRighttKey1->setMaximumSize(QSize(86, 71));
        frameRighttKey1->setStyleSheet(QStringLiteral(""));
        frameRighttKey1->setFrameShape(QFrame::StyledPanel);
        frameRighttKey1->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frameRighttKey1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, 20, -1, 20);
        lbRightKey1 = new QLabel(frameRighttKey1);
        lbRightKey1->setObjectName(QStringLiteral("lbRightKey1"));
        lbRightKey1->setFont(font);
        lbRightKey1->setStyleSheet(QStringLiteral(""));
        lbRightKey1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbRightKey1, 0, 0, 1, 1);


        gridLayout_4->addWidget(frameRighttKey1, 0, 3, 3, 1);

        frameLeftKey1 = new QFrame(frameSound1);
        frameLeftKey1->setObjectName(QStringLiteral("frameLeftKey1"));
        sizePolicy.setHeightForWidth(frameLeftKey1->sizePolicy().hasHeightForWidth());
        frameLeftKey1->setSizePolicy(sizePolicy);
        frameLeftKey1->setMinimumSize(QSize(86, 71));
        frameLeftKey1->setMaximumSize(QSize(86, 71));
        frameLeftKey1->setStyleSheet(QStringLiteral(""));
        frameLeftKey1->setFrameShape(QFrame::StyledPanel);
        frameLeftKey1->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frameLeftKey1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 20, -1, 20);
        lbLeftKey1 = new QLabel(frameLeftKey1);
        lbLeftKey1->setObjectName(QStringLiteral("lbLeftKey1"));
        lbLeftKey1->setFont(font);
        lbLeftKey1->setStyleSheet(QStringLiteral(""));
        lbLeftKey1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lbLeftKey1, 0, 0, 1, 1);


        gridLayout_4->addWidget(frameLeftKey1, 0, 0, 3, 1);

        lbSoundName1 = new QLabel(frameSound1);
        lbSoundName1->setObjectName(QStringLiteral("lbSoundName1"));
        sizePolicy2.setHeightForWidth(lbSoundName1->sizePolicy().hasHeightForWidth());
        lbSoundName1->setSizePolicy(sizePolicy2);
        lbSoundName1->setMinimumSize(QSize(0, 24));
        lbSoundName1->setMaximumSize(QSize(251, 24));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(68);
        lbSoundName1->setFont(font1);
        lbSoundName1->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(lbSoundName1, 0, 1, 1, 1);

        lbCenterKey1 = new QLabel(frameSound1);
        lbCenterKey1->setObjectName(QStringLiteral("lbCenterKey1"));
        lbCenterKey1->setFont(font1);
        lbCenterKey1->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(lbCenterKey1, 0, 2, 1, 1);

        widget = new Piano(frameSound1);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        widget->setMinimumSize(QSize(0, 54));
        widget->setMaximumSize(QSize(16777215, 54));
        widget->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(widget, 2, 1, 1, 2);


        verticalLayout_2->addWidget(frameSound1);

        frameSound2 = new QFrame(mainFrame);
        frameSound2->setObjectName(QStringLiteral("frameSound2"));
        frameSound2->setStyleSheet(QStringLiteral(""));
        frameSound2->setFrameShape(QFrame::StyledPanel);
        frameSound2->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frameSound2);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(5, 5, 0, 20);
        frameRighttKey2 = new QFrame(frameSound2);
        frameRighttKey2->setObjectName(QStringLiteral("frameRighttKey2"));
        sizePolicy.setHeightForWidth(frameRighttKey2->sizePolicy().hasHeightForWidth());
        frameRighttKey2->setSizePolicy(sizePolicy);
        frameRighttKey2->setMinimumSize(QSize(86, 71));
        frameRighttKey2->setMaximumSize(QSize(86, 71));
        frameRighttKey2->setStyleSheet(QStringLiteral(""));
        frameRighttKey2->setFrameShape(QFrame::StyledPanel);
        frameRighttKey2->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frameRighttKey2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(-1, 20, -1, 20);
        lbRightKey2 = new QLabel(frameRighttKey2);
        lbRightKey2->setObjectName(QStringLiteral("lbRightKey2"));
        lbRightKey2->setFont(font);
        lbRightKey2->setStyleSheet(QStringLiteral(""));
        lbRightKey2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lbRightKey2, 0, 0, 1, 1);


        gridLayout_5->addWidget(frameRighttKey2, 0, 4, 3, 1);

        lbCenterKey2 = new QLabel(frameSound2);
        lbCenterKey2->setObjectName(QStringLiteral("lbCenterKey2"));
        lbCenterKey2->setFont(font1);
        lbCenterKey2->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(lbCenterKey2, 0, 2, 1, 1);

        frameLeftKey2 = new QFrame(frameSound2);
        frameLeftKey2->setObjectName(QStringLiteral("frameLeftKey2"));
        sizePolicy.setHeightForWidth(frameLeftKey2->sizePolicy().hasHeightForWidth());
        frameLeftKey2->setSizePolicy(sizePolicy);
        frameLeftKey2->setMinimumSize(QSize(86, 71));
        frameLeftKey2->setMaximumSize(QSize(86, 71));
        frameLeftKey2->setStyleSheet(QStringLiteral(""));
        frameLeftKey2->setFrameShape(QFrame::StyledPanel);
        frameLeftKey2->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frameLeftKey2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(-1, 20, -1, 20);
        lbLeftKey2 = new QLabel(frameLeftKey2);
        lbLeftKey2->setObjectName(QStringLiteral("lbLeftKey2"));
        lbLeftKey2->setFont(font);
        lbLeftKey2->setStyleSheet(QStringLiteral(""));
        lbLeftKey2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lbLeftKey2, 0, 0, 1, 1);


        gridLayout_5->addWidget(frameLeftKey2, 0, 0, 3, 1);

        widget_2 = new Piano(frameSound2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        widget_2->setMinimumSize(QSize(0, 54));
        widget_2->setMaximumSize(QSize(16777215, 54));
        widget_2->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(widget_2, 2, 1, 1, 2);

        lbSoundName2 = new QLabel(frameSound2);
        lbSoundName2->setObjectName(QStringLiteral("lbSoundName2"));
        sizePolicy2.setHeightForWidth(lbSoundName2->sizePolicy().hasHeightForWidth());
        lbSoundName2->setSizePolicy(sizePolicy2);
        lbSoundName2->setMinimumSize(QSize(0, 24));
        lbSoundName2->setMaximumSize(QSize(251, 24));
        lbSoundName2->setFont(font1);
        lbSoundName2->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(lbSoundName2, 0, 1, 1, 1);


        verticalLayout_2->addWidget(frameSound2);

        frameSound3 = new QFrame(mainFrame);
        frameSound3->setObjectName(QStringLiteral("frameSound3"));
        frameSound3->setStyleSheet(QStringLiteral(""));
        frameSound3->setFrameShape(QFrame::StyledPanel);
        frameSound3->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frameSound3);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(5, 5, 0, 20);
        frameLeftKey3 = new QFrame(frameSound3);
        frameLeftKey3->setObjectName(QStringLiteral("frameLeftKey3"));
        sizePolicy.setHeightForWidth(frameLeftKey3->sizePolicy().hasHeightForWidth());
        frameLeftKey3->setSizePolicy(sizePolicy);
        frameLeftKey3->setMinimumSize(QSize(86, 71));
        frameLeftKey3->setMaximumSize(QSize(86, 71));
        frameLeftKey3->setStyleSheet(QStringLiteral(""));
        frameLeftKey3->setFrameShape(QFrame::StyledPanel);
        frameLeftKey3->setFrameShadow(QFrame::Raised);
        gridLayout_11 = new QGridLayout(frameLeftKey3);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(-1, 20, -1, 20);
        lbLeftKey3 = new QLabel(frameLeftKey3);
        lbLeftKey3->setObjectName(QStringLiteral("lbLeftKey3"));
        lbLeftKey3->setFont(font);
        lbLeftKey3->setStyleSheet(QStringLiteral(""));
        lbLeftKey3->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(lbLeftKey3, 0, 0, 1, 1);


        gridLayout_9->addWidget(frameLeftKey3, 0, 0, 2, 1);

        lbSoundName3 = new QLabel(frameSound3);
        lbSoundName3->setObjectName(QStringLiteral("lbSoundName3"));
        sizePolicy2.setHeightForWidth(lbSoundName3->sizePolicy().hasHeightForWidth());
        lbSoundName3->setSizePolicy(sizePolicy2);
        lbSoundName3->setMinimumSize(QSize(0, 24));
        lbSoundName3->setMaximumSize(QSize(251, 24));
        lbSoundName3->setFont(font1);
        lbSoundName3->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(lbSoundName3, 0, 1, 1, 1);

        frameRighttKey3 = new QFrame(frameSound3);
        frameRighttKey3->setObjectName(QStringLiteral("frameRighttKey3"));
        sizePolicy.setHeightForWidth(frameRighttKey3->sizePolicy().hasHeightForWidth());
        frameRighttKey3->setSizePolicy(sizePolicy);
        frameRighttKey3->setMinimumSize(QSize(86, 71));
        frameRighttKey3->setMaximumSize(QSize(86, 71));
        frameRighttKey3->setStyleSheet(QStringLiteral(""));
        frameRighttKey3->setFrameShape(QFrame::StyledPanel);
        frameRighttKey3->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frameRighttKey3);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(-1, 20, -1, 20);
        lbRightKey3 = new QLabel(frameRighttKey3);
        lbRightKey3->setObjectName(QStringLiteral("lbRightKey3"));
        lbRightKey3->setFont(font);
        lbRightKey3->setStyleSheet(QStringLiteral(""));
        lbRightKey3->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(lbRightKey3, 0, 0, 1, 1);


        gridLayout_9->addWidget(frameRighttKey3, 0, 3, 2, 1);

        lbCenterKey3 = new QLabel(frameSound3);
        lbCenterKey3->setObjectName(QStringLiteral("lbCenterKey3"));
        lbCenterKey3->setFont(font1);
        lbCenterKey3->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(lbCenterKey3, 0, 2, 1, 1);

        widget_3 = new Piano(frameSound3);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy2.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy2);
        widget_3->setMinimumSize(QSize(0, 54));
        widget_3->setMaximumSize(QSize(16777215, 54));
        widget_3->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(widget_3, 1, 1, 1, 2);


        verticalLayout_2->addWidget(frameSound3);

        frameSound4 = new QFrame(mainFrame);
        frameSound4->setObjectName(QStringLiteral("frameSound4"));
        frameSound4->setStyleSheet(QStringLiteral(""));
        frameSound4->setFrameShape(QFrame::StyledPanel);
        frameSound4->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(frameSound4);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(5, 5, 0, 20);
        frameRighttKey4 = new QFrame(frameSound4);
        frameRighttKey4->setObjectName(QStringLiteral("frameRighttKey4"));
        sizePolicy.setHeightForWidth(frameRighttKey4->sizePolicy().hasHeightForWidth());
        frameRighttKey4->setSizePolicy(sizePolicy);
        frameRighttKey4->setMinimumSize(QSize(86, 71));
        frameRighttKey4->setMaximumSize(QSize(86, 71));
        frameRighttKey4->setStyleSheet(QStringLiteral(""));
        frameRighttKey4->setFrameShape(QFrame::StyledPanel);
        frameRighttKey4->setFrameShadow(QFrame::Raised);
        gridLayout_13 = new QGridLayout(frameRighttKey4);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(-1, 20, -1, 20);
        lbRightKey4 = new QLabel(frameRighttKey4);
        lbRightKey4->setObjectName(QStringLiteral("lbRightKey4"));
        lbRightKey4->setFont(font);
        lbRightKey4->setStyleSheet(QStringLiteral(""));
        lbRightKey4->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(lbRightKey4, 0, 1, 1, 1);


        gridLayout_12->addWidget(frameRighttKey4, 0, 3, 2, 1);

        frameLeftKey4 = new QFrame(frameSound4);
        frameLeftKey4->setObjectName(QStringLiteral("frameLeftKey4"));
        sizePolicy.setHeightForWidth(frameLeftKey4->sizePolicy().hasHeightForWidth());
        frameLeftKey4->setSizePolicy(sizePolicy);
        frameLeftKey4->setMinimumSize(QSize(86, 71));
        frameLeftKey4->setMaximumSize(QSize(86, 71));
        frameLeftKey4->setStyleSheet(QStringLiteral(""));
        frameLeftKey4->setFrameShape(QFrame::StyledPanel);
        frameLeftKey4->setFrameShadow(QFrame::Raised);
        gridLayout_14 = new QGridLayout(frameLeftKey4);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setContentsMargins(-1, 20, -1, 20);
        lbLeftKey4 = new QLabel(frameLeftKey4);
        lbLeftKey4->setObjectName(QStringLiteral("lbLeftKey4"));
        lbLeftKey4->setFont(font);
        lbLeftKey4->setStyleSheet(QStringLiteral(""));
        lbLeftKey4->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(lbLeftKey4, 0, 0, 1, 1);


        gridLayout_12->addWidget(frameLeftKey4, 0, 0, 2, 1);

        lbSoundName4 = new QLabel(frameSound4);
        lbSoundName4->setObjectName(QStringLiteral("lbSoundName4"));
        sizePolicy2.setHeightForWidth(lbSoundName4->sizePolicy().hasHeightForWidth());
        lbSoundName4->setSizePolicy(sizePolicy2);
        lbSoundName4->setMinimumSize(QSize(0, 24));
        lbSoundName4->setMaximumSize(QSize(251, 24));
        lbSoundName4->setFont(font1);
        lbSoundName4->setStyleSheet(QStringLiteral(""));

        gridLayout_12->addWidget(lbSoundName4, 0, 1, 1, 1);

        lbCenterKey4 = new QLabel(frameSound4);
        lbCenterKey4->setObjectName(QStringLiteral("lbCenterKey4"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lbCenterKey4->sizePolicy().hasHeightForWidth());
        lbCenterKey4->setSizePolicy(sizePolicy3);
        lbCenterKey4->setFont(font1);
        lbCenterKey4->setStyleSheet(QStringLiteral(""));

        gridLayout_12->addWidget(lbCenterKey4, 0, 2, 1, 1);

        widget_4 = new Piano(frameSound4);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy2.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy2);
        widget_4->setMinimumSize(QSize(0, 54));
        widget_4->setMaximumSize(QSize(16777215, 54));
        widget_4->setStyleSheet(QStringLiteral(""));

        gridLayout_12->addWidget(widget_4, 1, 1, 1, 2);


        verticalLayout_2->addWidget(frameSound4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(99, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pbCancel = new QPushButton(mainFrame);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));
        sizePolicy.setHeightForWidth(pbCancel->sizePolicy().hasHeightForWidth());
        pbCancel->setSizePolicy(sizePolicy);
        pbCancel->setMinimumSize(QSize(126, 58));
        pbCancel->setMaximumSize(QSize(126, 58));
        pbCancel->setFont(font);
        pbCancel->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbCancel);

        pbSave = new QPushButton(mainFrame);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        sizePolicy.setHeightForWidth(pbSave->sizePolicy().hasHeightForWidth());
        pbSave->setSizePolicy(sizePolicy);
        pbSave->setMinimumSize(QSize(126, 58));
        pbSave->setMaximumSize(QSize(126, 58));
        pbSave->setFont(font);
        pbSave->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbSave);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addWidget(mainFrame, 0, 0, 1, 1);


        retranslateUi(SoundSplitForm);
        QObject::connect(widget, SIGNAL(leftKeySelected(QString)), lbLeftKey1, SLOT(setText(QString)));
        QObject::connect(widget, SIGNAL(rightKeySelected(QString)), lbRightKey1, SLOT(setText(QString)));
        QObject::connect(widget_2, SIGNAL(leftKeySelected(QString)), lbLeftKey2, SLOT(setText(QString)));
        QObject::connect(widget_2, SIGNAL(rightKeySelected(QString)), lbRightKey2, SLOT(setText(QString)));
        QObject::connect(widget_3, SIGNAL(leftKeySelected(QString)), lbLeftKey3, SLOT(setText(QString)));
        QObject::connect(widget_3, SIGNAL(rightKeySelected(QString)), lbRightKey3, SLOT(setText(QString)));
        QObject::connect(widget_4, SIGNAL(leftKeySelected(QString)), lbLeftKey4, SLOT(setText(QString)));
        QObject::connect(widget_4, SIGNAL(rightKeySelected(QString)), lbRightKey4, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(SoundSplitForm);
    } // setupUi

    void retranslateUi(QWidget *SoundSplitForm)
    {
        SoundSplitForm->setWindowTitle(QApplication::translate("SoundSplitForm", "Form", 0));
        lbWidgetTitle->setText(QApplication::translate("SoundSplitForm", "SOUND SPLIT", 0));
        lbRightKey1->setText(QApplication::translate("SoundSplitForm", "C8", 0));
        lbLeftKey1->setText(QApplication::translate("SoundSplitForm", "A0", 0));
        lbSoundName1->setText(QApplication::translate("SoundSplitForm", "FIRST SOUND NAME", 0));
        lbCenterKey1->setText(QApplication::translate("SoundSplitForm", "C4", 0));
        lbRightKey2->setText(QApplication::translate("SoundSplitForm", "C8", 0));
        lbCenterKey2->setText(QApplication::translate("SoundSplitForm", "C4", 0));
        lbLeftKey2->setText(QApplication::translate("SoundSplitForm", "A0", 0));
        lbSoundName2->setText(QApplication::translate("SoundSplitForm", "SECOND SOUND NAME", 0));
        lbLeftKey3->setText(QApplication::translate("SoundSplitForm", "A0", 0));
        lbSoundName3->setText(QApplication::translate("SoundSplitForm", "THIRD SOUND NAME", 0));
        lbRightKey3->setText(QApplication::translate("SoundSplitForm", "C8", 0));
        lbCenterKey3->setText(QApplication::translate("SoundSplitForm", "C4", 0));
        lbRightKey4->setText(QApplication::translate("SoundSplitForm", "C8", 0));
        lbLeftKey4->setText(QApplication::translate("SoundSplitForm", "A0", 0));
        lbSoundName4->setText(QApplication::translate("SoundSplitForm", "FOURTH SOUND NAME", 0));
        lbCenterKey4->setText(QApplication::translate("SoundSplitForm", "C4", 0));
        pbCancel->setText(QApplication::translate("SoundSplitForm", "CANCEL", 0));
        pbSave->setText(QApplication::translate("SoundSplitForm", "SAVE", 0));
    } // retranslateUi

};

namespace Ui {
    class SoundSplitForm: public Ui_SoundSplitForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOUNDSPLITFORM_H
