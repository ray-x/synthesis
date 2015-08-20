/********************************************************************************
** Form generated from reading UI file 'categoriesform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORIESFORM_H
#define UI_CATEGORIESFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CategoriesForm
{
public:
    QGridLayout *gridLayout;
    QFrame *mainFrame;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *lbCategory;
    QLabel *lbCategoryName;
    QFrame *frameTop;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout;
    QLabel *lbWidgetTitle;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_2;
    QPushButton *pbString;
    QSpacerItem *verticalSpacer;
    QPushButton *pbOrgan;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbBell;
    QPushButton *pbBrass;
    QPushButton *pbPad;
    QPushButton *pbReed;
    QPushButton *pbSynth;
    QPushButton *pbChoir;
    QPushButton *pbPiano;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *CategoriesForm)
    {
        if (CategoriesForm->objectName().isEmpty())
            CategoriesForm->setObjectName(QStringLiteral("CategoriesForm"));
        CategoriesForm->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CategoriesForm->sizePolicy().hasHeightForWidth());
        CategoriesForm->setSizePolicy(sizePolicy);
        CategoriesForm->setMinimumSize(QSize(800, 480));
        CategoriesForm->setMaximumSize(QSize(800, 480));
        CategoriesForm->setStyleSheet(QLatin1String("QWidget{\n"
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
""));
        gridLayout = new QGridLayout(CategoriesForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(CategoriesForm);
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
        gridLayout_4 = new QGridLayout(mainFrame);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(6);
        gridLayout_4->setContentsMargins(-1, -1, -1, 6);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lbCategory = new QLabel(mainFrame);
        lbCategory->setObjectName(QStringLiteral("lbCategory"));
        sizePolicy.setHeightForWidth(lbCategory->sizePolicy().hasHeightForWidth());
        lbCategory->setSizePolicy(sizePolicy);
        lbCategory->setMinimumSize(QSize(130, 42));
        lbCategory->setMaximumSize(QSize(130, 42));
        lbCategory->setFont(font);
        lbCategory->setStyleSheet(QStringLiteral(""));
        lbCategory->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbCategory, 0, 0, 1, 1);

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

        gridLayout_3->addWidget(lbCategoryName, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 0, 1, 1);

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


        gridLayout_4->addWidget(frameTop, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        pbString = new QPushButton(mainFrame);
        pbString->setObjectName(QStringLiteral("pbString"));
        sizePolicy.setHeightForWidth(pbString->sizePolicy().hasHeightForWidth());
        pbString->setSizePolicy(sizePolicy);
        pbString->setMinimumSize(QSize(180, 80));
        pbString->setMaximumSize(QSize(180, 80));
        pbString->setFont(font);
        pbString->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbString, 7, 1, 1, 1);

        verticalSpacer = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 2, 3, 1, 1);

        pbOrgan = new QPushButton(mainFrame);
        pbOrgan->setObjectName(QStringLiteral("pbOrgan"));
        sizePolicy.setHeightForWidth(pbOrgan->sizePolicy().hasHeightForWidth());
        pbOrgan->setSizePolicy(sizePolicy);
        pbOrgan->setMinimumSize(QSize(180, 80));
        pbOrgan->setMaximumSize(QSize(180, 80));
        pbOrgan->setFont(font);
        pbOrgan->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbOrgan, 1, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 6, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        pbBell = new QPushButton(mainFrame);
        pbBell->setObjectName(QStringLiteral("pbBell"));
        sizePolicy.setHeightForWidth(pbBell->sizePolicy().hasHeightForWidth());
        pbBell->setSizePolicy(sizePolicy);
        pbBell->setMinimumSize(QSize(180, 80));
        pbBell->setMaximumSize(QSize(180, 80));
        pbBell->setFont(font);
        pbBell->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbBell, 7, 3, 1, 1);

        pbBrass = new QPushButton(mainFrame);
        pbBrass->setObjectName(QStringLiteral("pbBrass"));
        sizePolicy.setHeightForWidth(pbBrass->sizePolicy().hasHeightForWidth());
        pbBrass->setSizePolicy(sizePolicy);
        pbBrass->setMinimumSize(QSize(180, 80));
        pbBrass->setMaximumSize(QSize(180, 80));
        pbBrass->setFont(font);
        pbBrass->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbBrass, 4, 3, 1, 1);

        pbPad = new QPushButton(mainFrame);
        pbPad->setObjectName(QStringLiteral("pbPad"));
        sizePolicy.setHeightForWidth(pbPad->sizePolicy().hasHeightForWidth());
        pbPad->setSizePolicy(sizePolicy);
        pbPad->setMinimumSize(QSize(180, 80));
        pbPad->setMaximumSize(QSize(180, 80));
        pbPad->setFont(font);
        pbPad->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbPad, 4, 1, 1, 1);

        pbReed = new QPushButton(mainFrame);
        pbReed->setObjectName(QStringLiteral("pbReed"));
        sizePolicy.setHeightForWidth(pbReed->sizePolicy().hasHeightForWidth());
        pbReed->setSizePolicy(sizePolicy);
        pbReed->setMinimumSize(QSize(180, 80));
        pbReed->setMaximumSize(QSize(180, 80));
        pbReed->setFont(font);
        pbReed->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbReed, 4, 5, 1, 1);

        pbSynth = new QPushButton(mainFrame);
        pbSynth->setObjectName(QStringLiteral("pbSynth"));
        sizePolicy.setHeightForWidth(pbSynth->sizePolicy().hasHeightForWidth());
        pbSynth->setSizePolicy(sizePolicy);
        pbSynth->setMinimumSize(QSize(180, 80));
        pbSynth->setMaximumSize(QSize(180, 80));
        pbSynth->setFont(font);
        pbSynth->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbSynth, 7, 5, 1, 1);

        pbChoir = new QPushButton(mainFrame);
        pbChoir->setObjectName(QStringLiteral("pbChoir"));
        sizePolicy.setHeightForWidth(pbChoir->sizePolicy().hasHeightForWidth());
        pbChoir->setSizePolicy(sizePolicy);
        pbChoir->setMinimumSize(QSize(180, 80));
        pbChoir->setMaximumSize(QSize(180, 80));
        pbChoir->setFont(font);
        pbChoir->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbChoir, 1, 5, 1, 1);

        pbPiano = new QPushButton(mainFrame);
        pbPiano->setObjectName(QStringLiteral("pbPiano"));
        sizePolicy.setHeightForWidth(pbPiano->sizePolicy().hasHeightForWidth());
        pbPiano->setSizePolicy(sizePolicy);
        pbPiano->setMinimumSize(QSize(180, 80));
        pbPiano->setMaximumSize(QSize(180, 80));
        pbPiano->setFont(font);
        pbPiano->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbPiano, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 4, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 4, 6, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 0, 3, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 2, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 3, 0, 1, 1);


        gridLayout->addWidget(mainFrame, 0, 0, 1, 1);

        QWidget::setTabOrder(pbPiano, pbOrgan);
        QWidget::setTabOrder(pbOrgan, pbChoir);
        QWidget::setTabOrder(pbChoir, pbPad);
        QWidget::setTabOrder(pbPad, pbBrass);
        QWidget::setTabOrder(pbBrass, pbReed);
        QWidget::setTabOrder(pbReed, pbString);
        QWidget::setTabOrder(pbString, pbBell);
        QWidget::setTabOrder(pbBell, pbSynth);

        retranslateUi(CategoriesForm);

        QMetaObject::connectSlotsByName(CategoriesForm);
    } // setupUi

    void retranslateUi(QWidget *CategoriesForm)
    {
        CategoriesForm->setWindowTitle(QApplication::translate("CategoriesForm", "Form", 0));
        lbCategory->setText(QApplication::translate("CategoriesForm", "CATEGORIES", 0));
        lbCategoryName->setText(QApplication::translate("CategoriesForm", "CATEGORIES", 0));
        lbWidgetTitle->setText(QApplication::translate("CategoriesForm", "CATEGORIES", 0));
        pbString->setText(QApplication::translate("CategoriesForm", "STRINGS", 0));
        pbOrgan->setText(QApplication::translate("CategoriesForm", "ORGANS", 0));
        pbBell->setText(QApplication::translate("CategoriesForm", "BELLS", 0));
        pbBrass->setText(QApplication::translate("CategoriesForm", "BRASSES", 0));
        pbPad->setText(QApplication::translate("CategoriesForm", "PADS", 0));
        pbReed->setText(QApplication::translate("CategoriesForm", "REEDS", 0));
        pbSynth->setText(QApplication::translate("CategoriesForm", "SYNTHS", 0));
        pbChoir->setText(QApplication::translate("CategoriesForm", "CHOIRS", 0));
        pbPiano->setText(QApplication::translate("CategoriesForm", "PIANOS", 0));
    } // retranslateUi

};

namespace Ui {
    class CategoriesForm: public Ui_CategoriesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORIESFORM_H
