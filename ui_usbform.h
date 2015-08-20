/********************************************************************************
** Form generated from reading UI file 'usbform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USBFORM_H
#define UI_USBFORM_H

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

class Ui_USBForm
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
    QPushButton *pbLoadAll;
    QPushButton *pbDeleteALL;
    QPushButton *pbUpdate;
    QPushButton *pbFormat;
    QPushButton *pbLoad;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pbScan;
    QSpacerItem *verticalSpacer;
    QPushButton *pbSave;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbCopy;
    QPushButton *pbSaveAll;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *USBForm)
    {
        if (USBForm->objectName().isEmpty())
            USBForm->setObjectName(QStringLiteral("USBForm"));
        USBForm->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(USBForm->sizePolicy().hasHeightForWidth());
        USBForm->setSizePolicy(sizePolicy);
        USBForm->setMinimumSize(QSize(800, 480));
        USBForm->setMaximumSize(QSize(800, 480));
        USBForm->setStyleSheet(QLatin1String("QWidget{\n"
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
""));
        gridLayout = new QGridLayout(USBForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(USBForm);
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
        pbLoadAll = new QPushButton(mainFrame);
        pbLoadAll->setObjectName(QStringLiteral("pbLoadAll"));
        sizePolicy.setHeightForWidth(pbLoadAll->sizePolicy().hasHeightForWidth());
        pbLoadAll->setSizePolicy(sizePolicy);
        pbLoadAll->setMinimumSize(QSize(180, 80));
        pbLoadAll->setMaximumSize(QSize(180, 80));
        pbLoadAll->setFont(font);
        pbLoadAll->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbLoadAll, 4, 1, 1, 1);

        pbDeleteALL = new QPushButton(mainFrame);
        pbDeleteALL->setObjectName(QStringLiteral("pbDeleteALL"));
        sizePolicy.setHeightForWidth(pbDeleteALL->sizePolicy().hasHeightForWidth());
        pbDeleteALL->setSizePolicy(sizePolicy);
        pbDeleteALL->setMinimumSize(QSize(180, 80));
        pbDeleteALL->setMaximumSize(QSize(180, 80));
        pbDeleteALL->setFont(font);
        pbDeleteALL->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbDeleteALL, 4, 5, 1, 1);

        pbUpdate = new QPushButton(mainFrame);
        pbUpdate->setObjectName(QStringLiteral("pbUpdate"));
        sizePolicy.setHeightForWidth(pbUpdate->sizePolicy().hasHeightForWidth());
        pbUpdate->setSizePolicy(sizePolicy);
        pbUpdate->setMinimumSize(QSize(180, 80));
        pbUpdate->setMaximumSize(QSize(180, 80));
        pbUpdate->setFont(font);
        pbUpdate->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbUpdate, 7, 5, 1, 1);

        pbFormat = new QPushButton(mainFrame);
        pbFormat->setObjectName(QStringLiteral("pbFormat"));
        sizePolicy.setHeightForWidth(pbFormat->sizePolicy().hasHeightForWidth());
        pbFormat->setSizePolicy(sizePolicy);
        pbFormat->setMinimumSize(QSize(180, 80));
        pbFormat->setMaximumSize(QSize(180, 80));
        pbFormat->setFont(font);
        pbFormat->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbFormat, 1, 5, 1, 1);

        pbLoad = new QPushButton(mainFrame);
        pbLoad->setObjectName(QStringLiteral("pbLoad"));
        sizePolicy.setHeightForWidth(pbLoad->sizePolicy().hasHeightForWidth());
        pbLoad->setSizePolicy(sizePolicy);
        pbLoad->setMinimumSize(QSize(180, 80));
        pbLoad->setMaximumSize(QSize(180, 80));
        pbLoad->setFont(font);
        pbLoad->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbLoad, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 4, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 4, 6, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 0, 3, 1, 1);

        pbScan = new QPushButton(mainFrame);
        pbScan->setObjectName(QStringLiteral("pbScan"));
        sizePolicy.setHeightForWidth(pbScan->sizePolicy().hasHeightForWidth());
        pbScan->setSizePolicy(sizePolicy);
        pbScan->setMinimumSize(QSize(180, 80));
        pbScan->setMaximumSize(QSize(180, 80));
        pbScan->setFont(font);
        pbScan->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbScan, 7, 1, 1, 1);

        verticalSpacer = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 2, 3, 1, 1);

        pbSave = new QPushButton(mainFrame);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        sizePolicy.setHeightForWidth(pbSave->sizePolicy().hasHeightForWidth());
        pbSave->setSizePolicy(sizePolicy);
        pbSave->setMinimumSize(QSize(180, 80));
        pbSave->setMaximumSize(QSize(180, 80));
        pbSave->setFont(font);
        pbSave->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbSave, 1, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 6, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        pbCopy = new QPushButton(mainFrame);
        pbCopy->setObjectName(QStringLiteral("pbCopy"));
        sizePolicy.setHeightForWidth(pbCopy->sizePolicy().hasHeightForWidth());
        pbCopy->setSizePolicy(sizePolicy);
        pbCopy->setMinimumSize(QSize(180, 80));
        pbCopy->setMaximumSize(QSize(180, 80));
        pbCopy->setFont(font);
        pbCopy->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbCopy, 7, 3, 1, 1);

        pbSaveAll = new QPushButton(mainFrame);
        pbSaveAll->setObjectName(QStringLiteral("pbSaveAll"));
        sizePolicy.setHeightForWidth(pbSaveAll->sizePolicy().hasHeightForWidth());
        pbSaveAll->setSizePolicy(sizePolicy);
        pbSaveAll->setMinimumSize(QSize(180, 80));
        pbSaveAll->setMaximumSize(QSize(180, 80));
        pbSaveAll->setFont(font);
        pbSaveAll->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbSaveAll, 4, 3, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 2, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 3, 0, 1, 1);


        gridLayout->addWidget(mainFrame, 0, 0, 1, 1);


        retranslateUi(USBForm);

        QMetaObject::connectSlotsByName(USBForm);
    } // setupUi

    void retranslateUi(QWidget *USBForm)
    {
        USBForm->setWindowTitle(QApplication::translate("USBForm", "Form", 0));
        lbCategory->setText(QApplication::translate("USBForm", "USB 1", 0));
        lbCategoryName->setText(QApplication::translate("USBForm", "USB UTILITIES", 0));
        lbWidgetTitle->setText(QApplication::translate("USBForm", "USB", 0));
        pbLoadAll->setText(QApplication::translate("USBForm", "LOAD ALL", 0));
        pbDeleteALL->setText(QApplication::translate("USBForm", "DELETE ALL", 0));
        pbUpdate->setText(QApplication::translate("USBForm", "UPDATE", 0));
        pbFormat->setText(QApplication::translate("USBForm", "FORMAT USB", 0));
        pbLoad->setText(QApplication::translate("USBForm", "LOAD SOUNDS", 0));
        pbScan->setText(QApplication::translate("USBForm", "SCAN USB", 0));
        pbSave->setText(QApplication::translate("USBForm", "SAVE SOUNDS", 0));
        pbCopy->setText(QApplication::translate("USBForm", "COPY USB", 0));
        pbSaveAll->setText(QApplication::translate("USBForm", "SAVE ALL", 0));
    } // retranslateUi

};

namespace Ui {
    class USBForm: public Ui_USBForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USBFORM_H
