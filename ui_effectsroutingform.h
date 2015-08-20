/********************************************************************************
** Form generated from reading UI file 'effectsroutingform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EFFECTSROUTINGFORM_H
#define UI_EFFECTSROUTINGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EffectsRoutingForm
{
public:
    QGridLayout *gridLayout;
    QFrame *mainFrame;
    QGridLayout *gridLayout_2;
    QFrame *frameTop;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *lbWidgetTitle;
    QSpacerItem *verticalSpacer_3;
    QFrame *frameCategory;
    QGridLayout *gridLayout_28;
    QLabel *lbCategoryNb;
    QLabel *lbCategoryName;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_2;
    QFrame *pbFrame;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbInsertEFX;
    QPushButton *pbMasterEFX;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbCancel;
    QPushButton *pbSave;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_25;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *EffectsRoutingForm)
    {
        if (EffectsRoutingForm->objectName().isEmpty())
            EffectsRoutingForm->setObjectName(QStringLiteral("EffectsRoutingForm"));
        EffectsRoutingForm->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EffectsRoutingForm->sizePolicy().hasHeightForWidth());
        EffectsRoutingForm->setSizePolicy(sizePolicy);
        EffectsRoutingForm->setMinimumSize(QSize(800, 480));
        EffectsRoutingForm->setMaximumSize(QSize(800, 480));
        EffectsRoutingForm->setStyleSheet(QLatin1String("QWidget{\n"
"    font-family : \"Open Sans\";\n"
"    font-weight : 550;\n"
"    font-size:14pt;\n"
"}\n"
"\n"
"#mainFrame{\n"
"border: 2px solid white;\n"
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
"outline:none;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	color: grey;\n"
"}\n"
"\n"
"QPushButton:focus{ background-color: rgb(239, 159, 31);}\n"
"\n"
"QPushButton:focus:selected{ background-color: rgb(239, 159, 31);}\n"
"\n"
"\n"
"#lbWidgetTitle{\n"
"  "
                        "  border: 1px solid black;\n"
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
"border: none;\n"
"color : white;\n"
"}\n"
"\n"
"#frameMasterEffect, #frameOutput,#frameCentral{\n"
"border:none;\n"
"background-color: transparent;\n"
"}\n"
"\n"
"#frameMasterEffect1, #frameMasterEffect2, #frameMasterEffect3, #frameMasterEffect4,\n"
"#frameEffect1, #frameEffect2, #frameEffect3, #frameEffect4{\n"
"border:1px solid white;\n"
"background-color: rgb(16, 97, 114);\n"
"}\n"
"\n"
"#pbEffect1, #pbEffect2, #pbEffect3, #pbEffect4{\n"
"border: 1px solid white;\n"
"background-color:qlineargradient(spread:pad"
                        ", x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
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
"\n"
"QCheckBox{\n"
"    background-color    : transparent;\n"
"	border:1px solid black;\n"
"    outline:none;\n"
"}\n"
"\n"
"QCheckBox::i"
                        "ndicator { \n"
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
"#lbEffectName1, #lbEffectName2, #lbEffectName3, #lbEffectName4,\n"
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
"back"
                        "ground: transparent;\n"
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
"QScrollBar::handle:horizontal"
                        " {    \n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"min-width              :   20px;\n"
"margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal,QScrollBar::sub-line:horizontal  {\n"
"border                  :   none;\n"
"background              :   transparent;\n"
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
"#pbEffectLink1,#pbEffectLink2,#pbEffectLink3,#pbEffectLink4,\n"
"#pbMasterEffectLink1,#pbMasterEffectLink2,#pbMasterEffectLink3{\n"
"background-color: rgb(239, 159, 31);\n"
"margin-left: 1px;\n"
"}"));
        gridLayout = new QGridLayout(EffectsRoutingForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(EffectsRoutingForm);
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
        gridLayout_2 = new QGridLayout(mainFrame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frameTop = new QFrame(mainFrame);
        frameTop->setObjectName(QStringLiteral("frameTop"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frameTop->sizePolicy().hasHeightForWidth());
        frameTop->setSizePolicy(sizePolicy2);
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

        frameCategory = new QFrame(frameTop);
        frameCategory->setObjectName(QStringLiteral("frameCategory"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frameCategory->sizePolicy().hasHeightForWidth());
        frameCategory->setSizePolicy(sizePolicy3);
        frameCategory->setFrameShape(QFrame::StyledPanel);
        frameCategory->setFrameShadow(QFrame::Raised);
        gridLayout_28 = new QGridLayout(frameCategory);
        gridLayout_28->setSpacing(0);
        gridLayout_28->setObjectName(QStringLiteral("gridLayout_28"));
        gridLayout_28->setContentsMargins(0, 0, 0, 0);
        lbCategoryNb = new QLabel(frameCategory);
        lbCategoryNb->setObjectName(QStringLiteral("lbCategoryNb"));
        lbCategoryNb->setMinimumSize(QSize(55, 30));
        lbCategoryNb->setMaximumSize(QSize(55, 30));
        lbCategoryNb->setFont(font);
        lbCategoryNb->setStyleSheet(QStringLiteral(""));
        lbCategoryNb->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(lbCategoryNb, 0, 0, 1, 1);

        lbCategoryName = new QLabel(frameCategory);
        lbCategoryName->setObjectName(QStringLiteral("lbCategoryName"));
        lbCategoryName->setMinimumSize(QSize(0, 30));
        lbCategoryName->setMaximumSize(QSize(16777215, 30));
        lbCategoryName->setStyleSheet(QStringLiteral(""));
        lbCategoryName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_28->addWidget(lbCategoryName, 0, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_28->addItem(verticalSpacer_9, 1, 1, 1, 1);


        gridLayout_7->addWidget(frameCategory, 0, 1, 1, 1);


        gridLayout_2->addWidget(frameTop, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        pbFrame = new QFrame(mainFrame);
        pbFrame->setObjectName(QStringLiteral("pbFrame"));
        pbFrame->setMinimumSize(QSize(778, 0));
        pbFrame->setMaximumSize(QSize(778, 16777215));
        pbFrame->setStyleSheet(QStringLiteral(""));
        horizontalLayout_3 = new QHBoxLayout(pbFrame);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pbInsertEFX = new QPushButton(pbFrame);
        pbInsertEFX->setObjectName(QStringLiteral("pbInsertEFX"));
        pbInsertEFX->setEnabled(true);
        sizePolicy.setHeightForWidth(pbInsertEFX->sizePolicy().hasHeightForWidth());
        pbInsertEFX->setSizePolicy(sizePolicy);
        pbInsertEFX->setMinimumSize(QSize(126, 58));
        pbInsertEFX->setMaximumSize(QSize(126, 58));
        pbInsertEFX->setFont(font);
        pbInsertEFX->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbInsertEFX);

        pbMasterEFX = new QPushButton(pbFrame);
        pbMasterEFX->setObjectName(QStringLiteral("pbMasterEFX"));
        pbMasterEFX->setEnabled(true);
        sizePolicy.setHeightForWidth(pbMasterEFX->sizePolicy().hasHeightForWidth());
        pbMasterEFX->setSizePolicy(sizePolicy);
        pbMasterEFX->setMinimumSize(QSize(126, 58));
        pbMasterEFX->setMaximumSize(QSize(126, 58));
        pbMasterEFX->setFont(font);
        pbMasterEFX->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbMasterEFX);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pbCancel = new QPushButton(pbFrame);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));
        sizePolicy.setHeightForWidth(pbCancel->sizePolicy().hasHeightForWidth());
        pbCancel->setSizePolicy(sizePolicy);
        pbCancel->setMinimumSize(QSize(126, 58));
        pbCancel->setMaximumSize(QSize(126, 58));
        pbCancel->setFont(font);
        pbCancel->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbCancel);

        pbSave = new QPushButton(pbFrame);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        sizePolicy.setHeightForWidth(pbSave->sizePolicy().hasHeightForWidth());
        pbSave->setSizePolicy(sizePolicy);
        pbSave->setMinimumSize(QSize(126, 58));
        pbSave->setMaximumSize(QSize(126, 58));
        pbSave->setFont(font);
        pbSave->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbSave);


        gridLayout_2->addWidget(pbFrame, 3, 0, 1, 1);

        scrollArea = new QScrollArea(mainFrame);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 0));
        scrollArea->setStyleSheet(QStringLiteral(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1470, 312));
        gridLayout_25 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_25->setSpacing(0);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        gridLayout_25->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(scrollAreaWidgetContents);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setMinimumSize(QSize(1470, 312));
        graphicsView->setMaximumSize(QSize(1470, 312));

        gridLayout_25->addWidget(graphicsView, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 2, 0, 1, 2);


        gridLayout->addWidget(mainFrame, 0, 0, 1, 1);


        retranslateUi(EffectsRoutingForm);

        QMetaObject::connectSlotsByName(EffectsRoutingForm);
    } // setupUi

    void retranslateUi(QWidget *EffectsRoutingForm)
    {
        EffectsRoutingForm->setWindowTitle(QApplication::translate("EffectsRoutingForm", "Form", 0));
        lbWidgetTitle->setText(QApplication::translate("EffectsRoutingForm", " EFFECTS ROUTING", 0));
        lbCategoryNb->setText(QApplication::translate("EffectsRoutingForm", "001", 0));
        lbCategoryName->setText(QApplication::translate("EffectsRoutingForm", "Piano Layers & Strings", 0));
        pbInsertEFX->setText(QApplication::translate("EffectsRoutingForm", "INSERT EFX", 0));
        pbMasterEFX->setText(QApplication::translate("EffectsRoutingForm", "MASTER EFX", 0));
        pbCancel->setText(QApplication::translate("EffectsRoutingForm", "CANCEL", 0));
        pbSave->setText(QApplication::translate("EffectsRoutingForm", "SAVE", 0));
    } // retranslateUi

};

namespace Ui {
    class EffectsRoutingForm: public Ui_EffectsRoutingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EFFECTSROUTINGFORM_H
