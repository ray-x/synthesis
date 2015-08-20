/********************************************************************************
** Form generated from reading UI file 'frontbuttoneditform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRONTBUTTONEDITFORM_H
#define UI_FRONTBUTTONEDITFORM_H

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

class Ui_FrontButtonEditForm
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
    QPushButton *pbTBD2;
    QSpacerItem *verticalSpacer;
    QPushButton *pbDIMM;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbEqualizer;
    QPushButton *pbLevel;
    QPushButton *pbPitch;
    QPushButton *pbTBD;
    QPushButton *pbEffects;
    QPushButton *pbFilter;
    QPushButton *pbOSC;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *FrontButtonEditForm)
    {
        if (FrontButtonEditForm->objectName().isEmpty())
            FrontButtonEditForm->setObjectName(QStringLiteral("FrontButtonEditForm"));
        FrontButtonEditForm->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FrontButtonEditForm->sizePolicy().hasHeightForWidth());
        FrontButtonEditForm->setSizePolicy(sizePolicy);
        FrontButtonEditForm->setMinimumSize(QSize(800, 480));
        FrontButtonEditForm->setMaximumSize(QSize(800, 480));
        FrontButtonEditForm->setStyleSheet(QLatin1String("QWidget{\n"
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
""));
        gridLayout = new QGridLayout(FrontButtonEditForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(FrontButtonEditForm);
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
        pbTBD2 = new QPushButton(mainFrame);
        pbTBD2->setObjectName(QStringLiteral("pbTBD2"));
        sizePolicy.setHeightForWidth(pbTBD2->sizePolicy().hasHeightForWidth());
        pbTBD2->setSizePolicy(sizePolicy);
        pbTBD2->setMinimumSize(QSize(180, 80));
        pbTBD2->setMaximumSize(QSize(180, 80));
        pbTBD2->setFont(font);
        pbTBD2->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbTBD2, 7, 1, 1, 1);

        verticalSpacer = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 2, 3, 1, 1);

        pbDIMM = new QPushButton(mainFrame);
        pbDIMM->setObjectName(QStringLiteral("pbDIMM"));
        sizePolicy.setHeightForWidth(pbDIMM->sizePolicy().hasHeightForWidth());
        pbDIMM->setSizePolicy(sizePolicy);
        pbDIMM->setMinimumSize(QSize(180, 80));
        pbDIMM->setMaximumSize(QSize(180, 80));
        pbDIMM->setFont(font);
        pbDIMM->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbDIMM, 1, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 6, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        pbEqualizer = new QPushButton(mainFrame);
        pbEqualizer->setObjectName(QStringLiteral("pbEqualizer"));
        sizePolicy.setHeightForWidth(pbEqualizer->sizePolicy().hasHeightForWidth());
        pbEqualizer->setSizePolicy(sizePolicy);
        pbEqualizer->setMinimumSize(QSize(180, 80));
        pbEqualizer->setMaximumSize(QSize(180, 80));
        pbEqualizer->setFont(font);
        pbEqualizer->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbEqualizer, 7, 3, 1, 1);

        pbLevel = new QPushButton(mainFrame);
        pbLevel->setObjectName(QStringLiteral("pbLevel"));
        sizePolicy.setHeightForWidth(pbLevel->sizePolicy().hasHeightForWidth());
        pbLevel->setSizePolicy(sizePolicy);
        pbLevel->setMinimumSize(QSize(180, 80));
        pbLevel->setMaximumSize(QSize(180, 80));
        pbLevel->setFont(font);
        pbLevel->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbLevel, 4, 3, 1, 1);

        pbPitch = new QPushButton(mainFrame);
        pbPitch->setObjectName(QStringLiteral("pbPitch"));
        sizePolicy.setHeightForWidth(pbPitch->sizePolicy().hasHeightForWidth());
        pbPitch->setSizePolicy(sizePolicy);
        pbPitch->setMinimumSize(QSize(180, 80));
        pbPitch->setMaximumSize(QSize(180, 80));
        pbPitch->setFont(font);
        pbPitch->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbPitch, 4, 1, 1, 1);

        pbTBD = new QPushButton(mainFrame);
        pbTBD->setObjectName(QStringLiteral("pbTBD"));
        sizePolicy.setHeightForWidth(pbTBD->sizePolicy().hasHeightForWidth());
        pbTBD->setSizePolicy(sizePolicy);
        pbTBD->setMinimumSize(QSize(180, 80));
        pbTBD->setMaximumSize(QSize(180, 80));
        pbTBD->setFont(font);
        pbTBD->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbTBD, 4, 5, 1, 1);

        pbEffects = new QPushButton(mainFrame);
        pbEffects->setObjectName(QStringLiteral("pbEffects"));
        sizePolicy.setHeightForWidth(pbEffects->sizePolicy().hasHeightForWidth());
        pbEffects->setSizePolicy(sizePolicy);
        pbEffects->setMinimumSize(QSize(180, 80));
        pbEffects->setMaximumSize(QSize(180, 80));
        pbEffects->setFont(font);
        pbEffects->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbEffects, 7, 5, 1, 1);

        pbFilter = new QPushButton(mainFrame);
        pbFilter->setObjectName(QStringLiteral("pbFilter"));
        sizePolicy.setHeightForWidth(pbFilter->sizePolicy().hasHeightForWidth());
        pbFilter->setSizePolicy(sizePolicy);
        pbFilter->setMinimumSize(QSize(180, 80));
        pbFilter->setMaximumSize(QSize(180, 80));
        pbFilter->setFont(font);
        pbFilter->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbFilter, 1, 5, 1, 1);

        pbOSC = new QPushButton(mainFrame);
        pbOSC->setObjectName(QStringLiteral("pbOSC"));
        sizePolicy.setHeightForWidth(pbOSC->sizePolicy().hasHeightForWidth());
        pbOSC->setSizePolicy(sizePolicy);
        pbOSC->setMinimumSize(QSize(180, 80));
        pbOSC->setMaximumSize(QSize(180, 80));
        pbOSC->setFont(font);
        pbOSC->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbOSC, 1, 1, 1, 1);

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


        retranslateUi(FrontButtonEditForm);

        QMetaObject::connectSlotsByName(FrontButtonEditForm);
    } // setupUi

    void retranslateUi(QWidget *FrontButtonEditForm)
    {
        FrontButtonEditForm->setWindowTitle(QApplication::translate("FrontButtonEditForm", "Form", 0));
        lbCategory->setText(QApplication::translate("FrontButtonEditForm", "MAIN MENU", 0));
        lbCategoryName->setText(QApplication::translate("FrontButtonEditForm", "EDIT MAIN MENU", 0));
        lbWidgetTitle->setText(QApplication::translate("FrontButtonEditForm", "SOUND EDIT", 0));
        pbTBD2->setText(QApplication::translate("FrontButtonEditForm", "TBD", 0));
        pbDIMM->setText(QApplication::translate("FrontButtonEditForm", "DIMM", 0));
        pbEqualizer->setText(QApplication::translate("FrontButtonEditForm", "EQUALIZER", 0));
        pbLevel->setText(QApplication::translate("FrontButtonEditForm", "LEVEL", 0));
        pbPitch->setText(QApplication::translate("FrontButtonEditForm", "PITCH", 0));
        pbTBD->setText(QApplication::translate("FrontButtonEditForm", "TBD", 0));
        pbEffects->setText(QApplication::translate("FrontButtonEditForm", "EFFECTS", 0));
        pbFilter->setText(QApplication::translate("FrontButtonEditForm", "FILTER", 0));
        pbOSC->setText(QApplication::translate("FrontButtonEditForm", "OSC", 0));
    } // retranslateUi

};

namespace Ui {
    class FrontButtonEditForm: public Ui_FrontButtonEditForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRONTBUTTONEDITFORM_H
