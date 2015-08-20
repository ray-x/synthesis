/********************************************************************************
** Form generated from reading UI file 'soundbankform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOUNDBANKFORM_H
#define UI_SOUNDBANKFORM_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SoundBankForm
{
public:
    QGridLayout *gridLayout;
    QFrame *mainFrame;
    QGridLayout *gridLayout_2;
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
    QSpacerItem *horizontalSpacer;
    QPushButton *pbCancel;
    QPushButton *pbSelect;
    QTableView *tvSoundBank;

    void setupUi(QWidget *SoundBankForm)
    {
        if (SoundBankForm->objectName().isEmpty())
            SoundBankForm->setObjectName(QStringLiteral("SoundBankForm"));
        SoundBankForm->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SoundBankForm->sizePolicy().hasHeightForWidth());
        SoundBankForm->setSizePolicy(sizePolicy);
        SoundBankForm->setMinimumSize(QSize(800, 480));
        SoundBankForm->setMaximumSize(QSize(800, 480));
        SoundBankForm->setStyleSheet(QLatin1String("QWidget{\n"
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
"/*------ QtableView ------*/\n"
"QTableView{\n"
"    border                  :   none;\n"
"    border-top              :   1px solid black;  \n"
"    border-left             :   1px solid black;   \n"
"    background-color        :   transparent;/*rgb(16, 97, 114);*/\n"
"    \n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding-left            :   20px;\n"
"    height                  :   75px;\n"
"    color                   :   white;  \n"
"    background-color        :   rgb(16, 97, 114);\n"
" "
                        "   border                  :   1px solid black;\n"
"    border-top              :   1px solid transparent;\n"
"    /*border-right            :   1px solid transparent;*/\n"
"}\n"
"\n"
"QTableView::item:selected{\n"
"    /*background-color        : rgb(244, 118, 75);*/\n"
"    background-color        :   qlineargradient(spread:reflect, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(244, 131, 0, 255), stop:0.5 rgba(160, 86, 0, 255), stop:1 rgba(244, 131, 0, 255));\n"
"\n"
"}\n"
"\n"
"\n"
"/*------ QHeaderView ------*/\n"
"QHeaderView{\n"
"    border                  :   none;\n"
"    background-color        :   rgb(65, 151, 48);\n"
"}\n"
"\n"
"QHeaderView::section:vertical{\n"
"    margin-top              :   0px;\n"
"    margin-bottom           :   0px;\n"
"    border                  :   none;\n"
"    border-bottom           :   1px solid black;\n"
"    background-color        :   rgb(65, 151, 48);\n"
"    color                   :   white;\n"
"    font-weight             :   550;\n"
"    font-size                   : 14"
                        "pt;\n"
"    width                   :   50px;\n"
"}\n"
"\n"
"\n"
"/*------ QScrollbar ------*/\n"
"QScrollBar:vertical {\n"
"    border                  :   1px solid black;\n"
"    background              :   black;\n"
"    width                   :   35px;\n"
"    margin                  :   0 0 0 15px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background              :   rgb(16, 97, 114);\n"
"    min-height              :   20px;\n"
"    margin: 1px 1px 1px 1px;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:vertical,QScrollBar::sub-line:vertical  {\n"
"    border                  :   none;\n"
"    background              :   transparent;\n"
"    height                  :   0px;\n"
"    margin                  :   0 0 0 10px;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"    border                  :   none;\n"
"    width                   :   0px;\n"
"    height                  :   0px;\n"
"    background              :   white;\n"
"    margin                  : "
                        "  0 0 0 10px;\n"
"}\n"
""));
        gridLayout = new QGridLayout(SoundBankForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(SoundBankForm);
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
        frameTop->setStyleSheet(QStringLiteral(""));
        gridLayout_7 = new QGridLayout(frameTop);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(8);
        gridLayout_7->setVerticalSpacing(0);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        pbFactory = new QPushButton(frameTop);
        pbFactory->setObjectName(QStringLiteral("pbFactory"));
        sizePolicy.setHeightForWidth(pbFactory->sizePolicy().hasHeightForWidth());
        pbFactory->setSizePolicy(sizePolicy);
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
        sizePolicy.setHeightForWidth(pbBankC->sizePolicy().hasHeightForWidth());
        pbBankC->setSizePolicy(sizePolicy);
        pbBankC->setMinimumSize(QSize(102, 55));
        pbBankC->setMaximumSize(QSize(102, 55));
        pbBankC->setFont(font);
        pbBankC->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbBankC, 0, 4, 1, 1);

        pbBankA = new QPushButton(frameTop);
        pbBankA->setObjectName(QStringLiteral("pbBankA"));
        sizePolicy.setHeightForWidth(pbBankA->sizePolicy().hasHeightForWidth());
        pbBankA->setSizePolicy(sizePolicy);
        pbBankA->setMinimumSize(QSize(102, 55));
        pbBankA->setMaximumSize(QSize(102, 55));
        pbBankA->setFont(font);
        pbBankA->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbBankA, 0, 2, 1, 1);

        pbBankD = new QPushButton(frameTop);
        pbBankD->setObjectName(QStringLiteral("pbBankD"));
        sizePolicy.setHeightForWidth(pbBankD->sizePolicy().hasHeightForWidth());
        pbBankD->setSizePolicy(sizePolicy);
        pbBankD->setMinimumSize(QSize(102, 55));
        pbBankD->setMaximumSize(QSize(102, 55));
        pbBankD->setFont(font);
        pbBankD->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbBankD, 0, 5, 1, 1);

        pbBankB = new QPushButton(frameTop);
        pbBankB->setObjectName(QStringLiteral("pbBankB"));
        sizePolicy.setHeightForWidth(pbBankB->sizePolicy().hasHeightForWidth());
        pbBankB->setSizePolicy(sizePolicy);
        pbBankB->setMinimumSize(QSize(102, 55));
        pbBankB->setMaximumSize(QSize(102, 55));
        pbBankB->setFont(font);
        pbBankB->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbBankB, 0, 3, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_12, 0, 1, 1, 1);


        gridLayout_2->addWidget(frameTop, 0, 0, 1, 1);

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

        pbSelect = new QPushButton(mainFrame);
        pbSelect->setObjectName(QStringLiteral("pbSelect"));
        sizePolicy.setHeightForWidth(pbSelect->sizePolicy().hasHeightForWidth());
        pbSelect->setSizePolicy(sizePolicy);
        pbSelect->setMinimumSize(QSize(126, 58));
        pbSelect->setMaximumSize(QSize(126, 58));
        pbSelect->setFont(font);
        pbSelect->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbSelect);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        tvSoundBank = new QTableView(mainFrame);
        tvSoundBank->setObjectName(QStringLiteral("tvSoundBank"));
        tvSoundBank->setFont(font);
        tvSoundBank->setStyleSheet(QStringLiteral(""));
        tvSoundBank->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvSoundBank->setProperty("showDropIndicator", QVariant(false));
        tvSoundBank->setSelectionMode(QAbstractItemView::SingleSelection);
        tvSoundBank->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvSoundBank->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tvSoundBank->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tvSoundBank->setShowGrid(false);
        tvSoundBank->setWordWrap(false);
        tvSoundBank->setCornerButtonEnabled(false);
        tvSoundBank->horizontalHeader()->setVisible(false);
        tvSoundBank->horizontalHeader()->setCascadingSectionResizes(false);
        tvSoundBank->horizontalHeader()->setStretchLastSection(true);
        tvSoundBank->verticalHeader()->setDefaultSectionSize(41);
        tvSoundBank->verticalHeader()->setHighlightSections(true);

        gridLayout_2->addWidget(tvSoundBank, 1, 0, 1, 1);


        gridLayout->addWidget(mainFrame, 0, 0, 1, 1);


        retranslateUi(SoundBankForm);

        QMetaObject::connectSlotsByName(SoundBankForm);
    } // setupUi

    void retranslateUi(QWidget *SoundBankForm)
    {
        SoundBankForm->setWindowTitle(QApplication::translate("SoundBankForm", "Form", 0));
        pbFactory->setText(QApplication::translate("SoundBankForm", "FACTORY", 0));
        lbWidgetTitle->setText(QApplication::translate("SoundBankForm", "SOUND BANKS", 0));
        pbBankC->setText(QApplication::translate("SoundBankForm", "BANK C", 0));
        pbBankA->setText(QApplication::translate("SoundBankForm", "BANK A", 0));
        pbBankD->setText(QApplication::translate("SoundBankForm", "BANK D", 0));
        pbBankB->setText(QApplication::translate("SoundBankForm", "BANK B", 0));
        pbCancel->setText(QApplication::translate("SoundBankForm", "CANCEL", 0));
        pbSelect->setText(QApplication::translate("SoundBankForm", "SELECT", 0));
    } // retranslateUi

};

namespace Ui {
    class SoundBankForm: public Ui_SoundBankForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOUNDBANKFORM_H
