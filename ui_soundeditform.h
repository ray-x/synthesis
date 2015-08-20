/********************************************************************************
** Form generated from reading UI file 'soundeditform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOUNDEDITFORM_H
#define UI_SOUNDEDITFORM_H

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

QT_BEGIN_NAMESPACE

class Ui_SoundEditForm
{
public:
    QGridLayout *gridLayout;
    QFrame *mainFrame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *lbCategoryNb;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frameTop;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *lbWidgetTitle;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_12;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_5;
    QFrame *framMultiSample;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lbSectionName;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frameSample1;
    QGridLayout *gridLayout_4;
    QLabel *lbSampleNb1;
    QLabel *lbSampleName1;
    QCheckBox *chkActvatedSample1;
    QFrame *frameSample2;
    QGridLayout *gridLayout_6;
    QLabel *lbSampleNb2;
    QLabel *lbSampleName2;
    QCheckBox *chkActvatedSample2;
    QFrame *frameSample3;
    QGridLayout *gridLayout_8;
    QLabel *lbSampleNb3;
    QLabel *lbSampleName3;
    QCheckBox *chkActvatedSample3;
    QFrame *frameSample4;
    QGridLayout *gridLayout_9;
    QLabel *lbSampleNb4;
    QLabel *lbSampleName4;
    QCheckBox *chkActvatedSample4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QFrame *pbFrame;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbAmpEdit;
    QPushButton *pbFilterEdit;
    QPushButton *pbPitchEdit;
    QPushButton *pbMiscEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbCancel;
    QPushButton *pbSave;

    void setupUi(QWidget *SoundEditForm)
    {
        if (SoundEditForm->objectName().isEmpty())
            SoundEditForm->setObjectName(QStringLiteral("SoundEditForm"));
        SoundEditForm->resize(800, 480);
        SoundEditForm->setMinimumSize(QSize(800, 480));
        SoundEditForm->setMaximumSize(QSize(800, 480));
        SoundEditForm->setStyleSheet(QLatin1String("QWidget{\n"
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
"#lbSectionName{\n"
"border: 1px solid black;\n"
"background-color:rgb(77, 79, 78);\n"
"color: white;\n"
"font-size : 12pt;\n"
"}\n"
"\n"
"#lbSampleName1, #lbSampleName2, #lbSampleName3, #lbSampleName4{\n"
"background: transparent;\n"
"border:none;\n"
"} \n"
"#lbSampleNb1, #lbSampleNb2, #lbSampleNb3, #lbSampleNb4{\n"
"background: transparent;\n"
"padding-left:50px;\n"
"border:none;\n"
"}\n"
"\n"
"#frameSample1, #frameSample2, #frameSample3, #frameSample4{\n"
"border:1px solid white;\n"
"backgrou"
                        "nd-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"color: back;\n"
"}\n"
"\n"
"QCheckBox{\n"
"    background-color    : transparent;\n"
"	border:1px solid black;\n"
"    outline:none;\n"
"}\n"
"\n"
"QCheckBox::indicator { \n"
"    width               : 48px; \n"
"    height              : 21px; \n"
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
        gridLayout = new QGridLayout(SoundEditForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(SoundEditForm);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainFrame->sizePolicy().hasHeightForWidth());
        mainFrame->setSizePolicy(sizePolicy);
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
        gridLayout_2 = new QGridLayout(mainFrame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frame_2 = new QFrame(mainFrame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(126, 42));
        frame_2->setMaximumSize(QSize(126, 42));
        frame_2->setStyleSheet(QLatin1String("border: 1px solid black;\n"
"color : white;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(68);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("font-size: 12pt;\n"
"border : none;\n"
"background-color:rgb(77, 79, 78);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font-size:12pt;\n"
"border : none;\n"
"background-color: rgb(16, 97, 114);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout_2->addWidget(frame_2);

        lbCategoryNb = new QLabel(mainFrame);
        lbCategoryNb->setObjectName(QStringLiteral("lbCategoryNb"));
        lbCategoryNb->setMinimumSize(QSize(55, 42));
        lbCategoryNb->setMaximumSize(QSize(55, 42));
        lbCategoryNb->setFont(font);
        lbCategoryNb->setStyleSheet(QStringLiteral(""));
        lbCategoryNb->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbCategoryNb);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 3);

        frameTop = new QFrame(mainFrame);
        frameTop->setObjectName(QStringLiteral("frameTop"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameTop->sizePolicy().hasHeightForWidth());
        frameTop->setSizePolicy(sizePolicy1);
        frameTop->setMinimumSize(QSize(0, 58));
        frameTop->setMaximumSize(QSize(16777215, 58));
        frameTop->setFont(font);
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
        lbWidgetTitle->setMinimumSize(QSize(181, 30));
        lbWidgetTitle->setMaximumSize(QSize(181, 30));
        lbWidgetTitle->setFont(font);
        lbWidgetTitle->setStyleSheet(QStringLiteral(""));
        lbWidgetTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbWidgetTitle);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        gridLayout_7->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_12, 0, 1, 1, 1);


        gridLayout_2->addWidget(frameTop, 1, 0, 1, 3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(3);
        horizontalSpacer_5 = new QSpacerItem(596, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(6);
        gridLayout_5->setContentsMargins(-1, 1, -1, -1);
        framMultiSample = new QFrame(mainFrame);
        framMultiSample->setObjectName(QStringLiteral("framMultiSample"));
        framMultiSample->setMaximumSize(QSize(16777215, 32));
        framMultiSample->setFont(font);
        framMultiSample->setStyleSheet(QStringLiteral(""));
        framMultiSample->setFrameShape(QFrame::NoFrame);
        horizontalLayout = new QHBoxLayout(framMultiSample);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lbSectionName = new QLabel(framMultiSample);
        lbSectionName->setObjectName(QStringLiteral("lbSectionName"));
        lbSectionName->setMinimumSize(QSize(165, 24));
        lbSectionName->setMaximumSize(QSize(165, 24));
        lbSectionName->setFont(font1);
        lbSectionName->setStyleSheet(QStringLiteral(""));
        lbSectionName->setScaledContents(false);
        lbSectionName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbSectionName);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_5->addWidget(framMultiSample, 0, 0, 1, 1);

        frameSample1 = new QFrame(mainFrame);
        frameSample1->setObjectName(QStringLiteral("frameSample1"));
        frameSample1->setMinimumSize(QSize(0, 54));
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

        chkActvatedSample1 = new QCheckBox(frameSample1);
        chkActvatedSample1->setObjectName(QStringLiteral("chkActvatedSample1"));
        chkActvatedSample1->setMaximumSize(QSize(50, 16777215));
        chkActvatedSample1->setStyleSheet(QStringLiteral(""));
        chkActvatedSample1->setCheckable(false);

        gridLayout_4->addWidget(chkActvatedSample1, 0, 1, 1, 1);


        gridLayout_5->addWidget(frameSample1, 1, 0, 1, 1);

        frameSample2 = new QFrame(mainFrame);
        frameSample2->setObjectName(QStringLiteral("frameSample2"));
        frameSample2->setMinimumSize(QSize(0, 54));
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

        chkActvatedSample2 = new QCheckBox(frameSample2);
        chkActvatedSample2->setObjectName(QStringLiteral("chkActvatedSample2"));
        chkActvatedSample2->setMaximumSize(QSize(50, 16777215));
        chkActvatedSample2->setStyleSheet(QStringLiteral(""));
        chkActvatedSample2->setCheckable(false);

        gridLayout_6->addWidget(chkActvatedSample2, 0, 1, 1, 1);


        gridLayout_5->addWidget(frameSample2, 4, 0, 1, 1);

        frameSample3 = new QFrame(mainFrame);
        frameSample3->setObjectName(QStringLiteral("frameSample3"));
        frameSample3->setMinimumSize(QSize(0, 54));
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

        chkActvatedSample3 = new QCheckBox(frameSample3);
        chkActvatedSample3->setObjectName(QStringLiteral("chkActvatedSample3"));
        chkActvatedSample3->setMaximumSize(QSize(50, 16777215));
        chkActvatedSample3->setStyleSheet(QStringLiteral(""));
        chkActvatedSample3->setCheckable(false);

        gridLayout_8->addWidget(chkActvatedSample3, 0, 1, 1, 1);


        gridLayout_5->addWidget(frameSample3, 5, 0, 1, 1);

        frameSample4 = new QFrame(mainFrame);
        frameSample4->setObjectName(QStringLiteral("frameSample4"));
        frameSample4->setMinimumSize(QSize(0, 54));
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

        chkActvatedSample4 = new QCheckBox(frameSample4);
        chkActvatedSample4->setObjectName(QStringLiteral("chkActvatedSample4"));
        chkActvatedSample4->setMaximumSize(QSize(50, 16777215));
        chkActvatedSample4->setStyleSheet(QStringLiteral(""));
        chkActvatedSample4->setCheckable(false);

        gridLayout_9->addWidget(chkActvatedSample4, 0, 1, 1, 1);


        gridLayout_5->addWidget(frameSample4, 6, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_5, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(360, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 3, 0, 2, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 2, 1, 1);

        pbFrame = new QFrame(mainFrame);
        pbFrame->setObjectName(QStringLiteral("pbFrame"));
        pbFrame->setMinimumSize(QSize(778, 0));
        pbFrame->setMaximumSize(QSize(778, 16777215));
        pbFrame->setStyleSheet(QStringLiteral(""));
        horizontalLayout_3 = new QHBoxLayout(pbFrame);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pbAmpEdit = new QPushButton(pbFrame);
        pbAmpEdit->setObjectName(QStringLiteral("pbAmpEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pbAmpEdit->sizePolicy().hasHeightForWidth());
        pbAmpEdit->setSizePolicy(sizePolicy2);
        pbAmpEdit->setMinimumSize(QSize(126, 58));
        pbAmpEdit->setMaximumSize(QSize(126, 58));
        pbAmpEdit->setFont(font);
        pbAmpEdit->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbAmpEdit);

        pbFilterEdit = new QPushButton(pbFrame);
        pbFilterEdit->setObjectName(QStringLiteral("pbFilterEdit"));
        sizePolicy2.setHeightForWidth(pbFilterEdit->sizePolicy().hasHeightForWidth());
        pbFilterEdit->setSizePolicy(sizePolicy2);
        pbFilterEdit->setMinimumSize(QSize(126, 58));
        pbFilterEdit->setMaximumSize(QSize(126, 58));
        pbFilterEdit->setFont(font);
        pbFilterEdit->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbFilterEdit);

        pbPitchEdit = new QPushButton(pbFrame);
        pbPitchEdit->setObjectName(QStringLiteral("pbPitchEdit"));
        sizePolicy2.setHeightForWidth(pbPitchEdit->sizePolicy().hasHeightForWidth());
        pbPitchEdit->setSizePolicy(sizePolicy2);
        pbPitchEdit->setMinimumSize(QSize(126, 58));
        pbPitchEdit->setMaximumSize(QSize(126, 58));
        pbPitchEdit->setFont(font);
        pbPitchEdit->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbPitchEdit);

        pbMiscEdit = new QPushButton(pbFrame);
        pbMiscEdit->setObjectName(QStringLiteral("pbMiscEdit"));
        sizePolicy2.setHeightForWidth(pbMiscEdit->sizePolicy().hasHeightForWidth());
        pbMiscEdit->setSizePolicy(sizePolicy2);
        pbMiscEdit->setMinimumSize(QSize(126, 58));
        pbMiscEdit->setMaximumSize(QSize(126, 58));
        pbMiscEdit->setFont(font);
        pbMiscEdit->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbMiscEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pbCancel = new QPushButton(pbFrame);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));
        sizePolicy2.setHeightForWidth(pbCancel->sizePolicy().hasHeightForWidth());
        pbCancel->setSizePolicy(sizePolicy2);
        pbCancel->setMinimumSize(QSize(126, 58));
        pbCancel->setMaximumSize(QSize(126, 58));
        pbCancel->setFont(font);
        pbCancel->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbCancel);

        pbSave = new QPushButton(pbFrame);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        sizePolicy2.setHeightForWidth(pbSave->sizePolicy().hasHeightForWidth());
        pbSave->setSizePolicy(sizePolicy2);
        pbSave->setMinimumSize(QSize(126, 58));
        pbSave->setMaximumSize(QSize(126, 58));
        pbSave->setFont(font);
        pbSave->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbSave);


        gridLayout_2->addWidget(pbFrame, 6, 0, 1, 3);


        gridLayout->addWidget(mainFrame, 0, 0, 1, 1);


        retranslateUi(SoundEditForm);

        QMetaObject::connectSlotsByName(SoundEditForm);
    } // setupUi

    void retranslateUi(QWidget *SoundEditForm)
    {
        SoundEditForm->setWindowTitle(QApplication::translate("SoundEditForm", "Form", 0));
        label->setText(QApplication::translate("SoundEditForm", "CATEGORY", 0));
        label_2->setText(QApplication::translate("SoundEditForm", "PIANO", 0));
        lbCategoryNb->setText(QApplication::translate("SoundEditForm", "001", 0));
        lbWidgetTitle->setText(QApplication::translate("SoundEditForm", "AMP EDIT", 0));
        lbSectionName->setText(QApplication::translate("SoundEditForm", "MULTISAMPLES", 0));
        lbSampleNb1->setText(QApplication::translate("SoundEditForm", "1", 0));
        lbSampleName1->setText(QApplication::translate("SoundEditForm", "White Grand Piano", 0));
        chkActvatedSample1->setText(QString());
        lbSampleNb2->setText(QApplication::translate("SoundEditForm", "2", 0));
        lbSampleName2->setText(QApplication::translate("SoundEditForm", "Piano Strings", 0));
        chkActvatedSample2->setText(QString());
        lbSampleNb3->setText(QApplication::translate("SoundEditForm", "3", 0));
        lbSampleName3->setText(QApplication::translate("SoundEditForm", "String Ensemble", 0));
        chkActvatedSample3->setText(QString());
        lbSampleNb4->setText(QApplication::translate("SoundEditForm", "4", 0));
        lbSampleName4->setText(QApplication::translate("SoundEditForm", "Analog Waves", 0));
        chkActvatedSample4->setText(QString());
        pbAmpEdit->setText(QApplication::translate("SoundEditForm", "AMP EDIT", 0));
        pbFilterEdit->setText(QApplication::translate("SoundEditForm", "FILTER EDIT", 0));
        pbPitchEdit->setText(QApplication::translate("SoundEditForm", "PITCH EDIT", 0));
        pbMiscEdit->setText(QApplication::translate("SoundEditForm", "MISC", 0));
        pbCancel->setText(QApplication::translate("SoundEditForm", "CANCEL", 0));
        pbSave->setText(QApplication::translate("SoundEditForm", "SAVE", 0));
    } // retranslateUi

};

namespace Ui {
    class SoundEditForm: public Ui_SoundEditForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOUNDEDITFORM_H
