/********************************************************************************
** Form generated from reading UI file 'displayform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYFORM_H
#define UI_DISPLAYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayForm
{
public:
    QGridLayout *gridLayout_16;
    QFrame *mainFrame;
    QGridLayout *gridLayout_6;
    QFrame *frameTop;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout;
    QLabel *lbWidgetTitle;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QSpinBox *sbColor;
    QGridLayout *gridLayout_9;
    QLabel *label_7;
    QLabel *label_11;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QComboBox *cbThemes;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *sbBrightness;
    QGridLayout *gridLayout_10;
    QLabel *label_8;
    QLabel *label_12;
    QGridLayout *gridLayout_8;
    QLabel *label_6;
    QLabel *label_14;
    QGridLayout *gridLayout_11;
    QLabel *label_9;
    QLabel *label_13;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QSpinBox *sbContrast;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QLabel *label_10;
    QGridLayout *gridLayout_12;
    QLabel *label_15;
    QLabel *label_16;
    QGridLayout *gridLayout_14;
    QLabel *label_17;
    QLabel *label_18;
    QGridLayout *gridLayout_15;
    QLabel *label_19;
    QLabel *label_20;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbMain;
    QPushButton *pbDisplay;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbInfo;

    void setupUi(QWidget *DisplayForm)
    {
        if (DisplayForm->objectName().isEmpty())
            DisplayForm->setObjectName(QStringLiteral("DisplayForm"));
        DisplayForm->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DisplayForm->sizePolicy().hasHeightForWidth());
        DisplayForm->setSizePolicy(sizePolicy);
        DisplayForm->setMinimumSize(QSize(800, 480));
        DisplayForm->setMaximumSize(QSize(800, 480));
        DisplayForm->setStyleSheet(QLatin1String("QWidget{\n"
"    font-family : \"Open Sans\";\n"
"    font-weight : 550;\n"
"    font-size:14pt;\n"
"}\n"
"\n"
"#mainFrame{\n"
"    background-color : qlineargradient(spread:reflect, x1:0, y1:0.006, x2:0, y2:1, stop:0 rgba(223, 223, 223, 255), stop:1 rgba(159, 159, 159, 255));\n"
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
"    color: white;\n"
"}\n"
"\n"
""
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
"QLabel{\n"
"color: white;\n"
"background-color:rgb(16, 97, 114);\n"
"border : 1px solid black;\n"
"border-right: 1px solid transparent;\n"
"}\n"
"\n"
"QSpinBox{\n"
"background-color        :   rgb(16, 97, 114);\n"
"padding-left : 5px;\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QSpinBox::up-button {\n"
"     width: 0px; \n"
"     border-width: 0px;\n"
"}\n"
"QSpinBox::down-button {\n"
"     width: 0px; \n"
"     border-width: 0px;\n"
"}\n"
"\n"
"QComboBox{\n"
"selection-background-color: rgb(239, 159, 31);\n"
"color                                            : white;\n"
"padding                                      : 1px 0px 1px 3px;\n"
"background-color                   :  rgb(16, 97, 114);\n"
"border                 "
                        "                       : 1px solid black;\n"
"}\n"
"\n"
"QComboBox QListView{\n"
"background-color                    : rgb(16, 97, 114);\n"
"}\n"
"\n"
"QComboBox:!editable  {\n"
"width :200px;\n"
"padding-right                             : 5px;\n"
"}\n"
""));
        gridLayout_16 = new QGridLayout(DisplayForm);
        gridLayout_16->setSpacing(0);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(DisplayForm);
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


        gridLayout_6->addWidget(frameTop, 0, 0, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setVerticalSpacing(0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_3 = new QLabel(mainFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 45));
        label_3->setMaximumSize(QSize(16777215, 45));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        sbColor = new QSpinBox(mainFrame);
        sbColor->setObjectName(QStringLiteral("sbColor"));
        sbColor->setMinimumSize(QSize(75, 45));
        sbColor->setMaximumSize(QSize(75, 45));
        sbColor->setFont(font);
        sbColor->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(sbColor, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_3, 2, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_7 = new QLabel(mainFrame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 45));
        label_7->setMaximumSize(QSize(16777215, 45));
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(label_7, 0, 0, 1, 1);

        label_11 = new QLabel(mainFrame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(75, 0));
        label_11->setMaximumSize(QSize(75, 16777215));
        label_11->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(label_11, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_9, 0, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_4 = new QLabel(mainFrame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 45));
        label_4->setMaximumSize(QSize(16777215, 45));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        cbThemes = new QComboBox(mainFrame);
        cbThemes->setObjectName(QStringLiteral("cbThemes"));
        cbThemes->setMinimumSize(QSize(75, 45));
        cbThemes->setMaximumSize(QSize(75, 45));
        cbThemes->setFont(font);
        cbThemes->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(cbThemes, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_4, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(mainFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 45));
        label->setMaximumSize(QSize(16777215, 45));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        sbBrightness = new QSpinBox(mainFrame);
        sbBrightness->setObjectName(QStringLiteral("sbBrightness"));
        sbBrightness->setMinimumSize(QSize(75, 45));
        sbBrightness->setMaximumSize(QSize(75, 45));
        sbBrightness->setFont(font);
        sbBrightness->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(sbBrightness, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_8 = new QLabel(mainFrame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(0, 45));
        label_8->setMaximumSize(QSize(16777215, 45));
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral(""));

        gridLayout_10->addWidget(label_8, 0, 0, 1, 1);

        label_12 = new QLabel(mainFrame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(75, 0));
        label_12->setMaximumSize(QSize(75, 16777215));
        label_12->setStyleSheet(QStringLiteral(""));

        gridLayout_10->addWidget(label_12, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_10, 1, 1, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_6 = new QLabel(mainFrame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 45));
        label_6->setMaximumSize(QSize(16777215, 45));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(label_6, 0, 0, 1, 1);

        label_14 = new QLabel(mainFrame);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(75, 0));
        label_14->setMaximumSize(QSize(75, 16777215));
        label_14->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(label_14, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_8, 5, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(0);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label_9 = new QLabel(mainFrame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 45));
        label_9->setMaximumSize(QSize(16777215, 45));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral(""));

        gridLayout_11->addWidget(label_9, 0, 0, 1, 1);

        label_13 = new QLabel(mainFrame);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(75, 0));
        label_13->setMaximumSize(QSize(75, 16777215));
        label_13->setStyleSheet(QStringLiteral(""));

        gridLayout_11->addWidget(label_13, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_11, 2, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(mainFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 45));
        label_2->setMaximumSize(QSize(16777215, 45));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        sbContrast = new QSpinBox(mainFrame);
        sbContrast->setObjectName(QStringLiteral("sbContrast"));
        sbContrast->setMinimumSize(QSize(75, 45));
        sbContrast->setMaximumSize(QSize(75, 45));
        sbContrast->setFont(font);
        sbContrast->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(sbContrast, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_5 = new QLabel(mainFrame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 45));
        label_5->setMaximumSize(QSize(16777215, 45));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        label_10 = new QLabel(mainFrame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(75, 0));
        label_10->setMaximumSize(QSize(75, 16777215));
        label_10->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(label_10, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_5, 4, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(0);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_15 = new QLabel(mainFrame);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(0, 45));
        label_15->setMaximumSize(QSize(16777215, 45));
        label_15->setFont(font);
        label_15->setStyleSheet(QStringLiteral(""));

        gridLayout_12->addWidget(label_15, 0, 0, 1, 1);

        label_16 = new QLabel(mainFrame);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(75, 0));
        label_16->setMaximumSize(QSize(75, 16777215));
        label_16->setStyleSheet(QStringLiteral(""));

        gridLayout_12->addWidget(label_16, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 3, 1, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(0);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_17 = new QLabel(mainFrame);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(0, 45));
        label_17->setMaximumSize(QSize(16777215, 45));
        label_17->setFont(font);
        label_17->setStyleSheet(QStringLiteral(""));

        gridLayout_14->addWidget(label_17, 0, 0, 1, 1);

        label_18 = new QLabel(mainFrame);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(75, 0));
        label_18->setMaximumSize(QSize(75, 16777215));
        label_18->setStyleSheet(QStringLiteral(""));

        gridLayout_14->addWidget(label_18, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_14, 4, 1, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setSpacing(0);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        label_19 = new QLabel(mainFrame);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(0, 45));
        label_19->setMaximumSize(QSize(16777215, 45));
        label_19->setFont(font);
        label_19->setStyleSheet(QStringLiteral(""));

        gridLayout_15->addWidget(label_19, 0, 0, 1, 1);

        label_20 = new QLabel(mainFrame);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(75, 0));
        label_20->setMaximumSize(QSize(75, 16777215));
        label_20->setStyleSheet(QStringLiteral(""));

        gridLayout_15->addWidget(label_20, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_15, 5, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_13, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pbMain = new QPushButton(mainFrame);
        pbMain->setObjectName(QStringLiteral("pbMain"));
        sizePolicy.setHeightForWidth(pbMain->sizePolicy().hasHeightForWidth());
        pbMain->setSizePolicy(sizePolicy);
        pbMain->setMinimumSize(QSize(126, 58));
        pbMain->setMaximumSize(QSize(126, 58));
        pbMain->setFont(font);
        pbMain->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbMain);

        pbDisplay = new QPushButton(mainFrame);
        pbDisplay->setObjectName(QStringLiteral("pbDisplay"));
        sizePolicy.setHeightForWidth(pbDisplay->sizePolicy().hasHeightForWidth());
        pbDisplay->setSizePolicy(sizePolicy);
        pbDisplay->setMinimumSize(QSize(126, 58));
        pbDisplay->setMaximumSize(QSize(126, 58));
        pbDisplay->setFont(font);
        pbDisplay->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbDisplay);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pbInfo = new QPushButton(mainFrame);
        pbInfo->setObjectName(QStringLiteral("pbInfo"));
        sizePolicy.setHeightForWidth(pbInfo->sizePolicy().hasHeightForWidth());
        pbInfo->setSizePolicy(sizePolicy);
        pbInfo->setMinimumSize(QSize(126, 58));
        pbInfo->setMaximumSize(QSize(126, 58));
        pbInfo->setFont(font);
        pbInfo->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbInfo);


        gridLayout_6->addLayout(horizontalLayout_3, 3, 0, 1, 1);


        gridLayout_16->addWidget(mainFrame, 0, 0, 1, 1);


        retranslateUi(DisplayForm);

        QMetaObject::connectSlotsByName(DisplayForm);
    } // setupUi

    void retranslateUi(QWidget *DisplayForm)
    {
        DisplayForm->setWindowTitle(QApplication::translate("DisplayForm", "Form", 0));
        lbWidgetTitle->setText(QApplication::translate("DisplayForm", "DISPLAY", 0));
        label_3->setText(QApplication::translate("DisplayForm", "Color", 0));
        label_7->setText(QApplication::translate("DisplayForm", "Default Settings", 0));
        label_11->setText(QString());
        label_4->setText(QApplication::translate("DisplayForm", "Themes", 0));
        cbThemes->setCurrentText(QString());
        label->setText(QApplication::translate("DisplayForm", "Brightness", 0));
        label_8->setText(QApplication::translate("DisplayForm", "Default Settings", 0));
        label_12->setText(QString());
        label_6->setText(QApplication::translate("DisplayForm", "Default Settings", 0));
        label_14->setText(QString());
        label_9->setText(QApplication::translate("DisplayForm", "Load Settings", 0));
        label_13->setText(QString());
        label_2->setText(QApplication::translate("DisplayForm", "Contrast", 0));
        label_5->setText(QApplication::translate("DisplayForm", "Touch Pannel Calibration", 0));
        label_10->setText(QString());
        label_15->setText(QApplication::translate("DisplayForm", "Wallpaper", 0));
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        pbMain->setText(QApplication::translate("DisplayForm", "MAIN", 0));
        pbDisplay->setText(QApplication::translate("DisplayForm", "DISPLAY", 0));
        pbInfo->setText(QApplication::translate("DisplayForm", "INFO", 0));
    } // retranslateUi

};

namespace Ui {
    class DisplayForm: public Ui_DisplayForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYFORM_H
