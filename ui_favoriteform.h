/********************************************************************************
** Form generated from reading UI file 'favoriteform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAVORITEFORM_H
#define UI_FAVORITEFORM_H

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

class Ui_FavoriteForm
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
    QPushButton *pbSet5;
    QVBoxLayout *verticalLayout;
    QLabel *lbWidgetTitle;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pbSet3;
    QPushButton *pbSet1;
    QPushButton *pbSet4;
    QPushButton *pbSet2;
    QSpacerItem *horizontalSpacer_12;
    QGridLayout *gridLayout_2;
    QPushButton *pbFav7;
    QSpacerItem *verticalSpacer;
    QPushButton *pbFav2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbFav8;
    QPushButton *pbFav5;
    QPushButton *pbFav4;
    QPushButton *pbFav6;
    QPushButton *pbFav9;
    QPushButton *pbFav3;
    QPushButton *pbFav1;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *FavoriteForm)
    {
        if (FavoriteForm->objectName().isEmpty())
            FavoriteForm->setObjectName(QStringLiteral("FavoriteForm"));
        FavoriteForm->resize(800, 480);
        FavoriteForm->setMinimumSize(QSize(800, 480));
        FavoriteForm->setMaximumSize(QSize(800, 480));
        FavoriteForm->setStyleSheet(QLatin1String("QWidget{\n"
"    font-family : \"Open Sans\";\n"
"    font-weight : 550;\n"
"    font-size:14pt;\n"
"}\n"
"\n"
"#mainFrame{\n"
"    background-color : qlineargradient(spread:reflect, x1:0, y1:0.006, x2:0, y2:1, stop:0 rgba(223, 223, 223, 255), stop:1 rgba(159, 159, 159, 255));\n"
"border: 1px solid white;\n"
"}\n"
"\n"
"QPushButton, #pbSave, #pbCancel, #pbSelect{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"border: 2px solid white;\n"
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
        gridLayout = new QGridLayout(FavoriteForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(FavoriteForm);
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
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbCategory->sizePolicy().hasHeightForWidth());
        lbCategory->setSizePolicy(sizePolicy1);
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
        pbSet5 = new QPushButton(frameTop);
        pbSet5->setObjectName(QStringLiteral("pbSet5"));
        sizePolicy1.setHeightForWidth(pbSet5->sizePolicy().hasHeightForWidth());
        pbSet5->setSizePolicy(sizePolicy1);
        pbSet5->setMinimumSize(QSize(102, 55));
        pbSet5->setMaximumSize(QSize(102, 55));
        pbSet5->setFont(font);
        pbSet5->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbSet5, 0, 6, 1, 1);

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

        pbSet3 = new QPushButton(frameTop);
        pbSet3->setObjectName(QStringLiteral("pbSet3"));
        sizePolicy1.setHeightForWidth(pbSet3->sizePolicy().hasHeightForWidth());
        pbSet3->setSizePolicy(sizePolicy1);
        pbSet3->setMinimumSize(QSize(102, 55));
        pbSet3->setMaximumSize(QSize(102, 55));
        pbSet3->setFont(font);
        pbSet3->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbSet3, 0, 4, 1, 1);

        pbSet1 = new QPushButton(frameTop);
        pbSet1->setObjectName(QStringLiteral("pbSet1"));
        sizePolicy1.setHeightForWidth(pbSet1->sizePolicy().hasHeightForWidth());
        pbSet1->setSizePolicy(sizePolicy1);
        pbSet1->setMinimumSize(QSize(102, 55));
        pbSet1->setMaximumSize(QSize(102, 55));
        pbSet1->setFont(font);
        pbSet1->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbSet1, 0, 2, 1, 1);

        pbSet4 = new QPushButton(frameTop);
        pbSet4->setObjectName(QStringLiteral("pbSet4"));
        sizePolicy1.setHeightForWidth(pbSet4->sizePolicy().hasHeightForWidth());
        pbSet4->setSizePolicy(sizePolicy1);
        pbSet4->setMinimumSize(QSize(102, 55));
        pbSet4->setMaximumSize(QSize(102, 55));
        pbSet4->setFont(font);
        pbSet4->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbSet4, 0, 5, 1, 1);

        pbSet2 = new QPushButton(frameTop);
        pbSet2->setObjectName(QStringLiteral("pbSet2"));
        sizePolicy1.setHeightForWidth(pbSet2->sizePolicy().hasHeightForWidth());
        pbSet2->setSizePolicy(sizePolicy1);
        pbSet2->setMinimumSize(QSize(102, 55));
        pbSet2->setMaximumSize(QSize(102, 55));
        pbSet2->setFont(font);
        pbSet2->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(pbSet2, 0, 3, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_12, 0, 1, 1, 1);


        gridLayout_4->addWidget(frameTop, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        pbFav7 = new QPushButton(mainFrame);
        pbFav7->setObjectName(QStringLiteral("pbFav7"));
        sizePolicy1.setHeightForWidth(pbFav7->sizePolicy().hasHeightForWidth());
        pbFav7->setSizePolicy(sizePolicy1);
        pbFav7->setMinimumSize(QSize(180, 80));
        pbFav7->setMaximumSize(QSize(180, 80));
        pbFav7->setFont(font);
        pbFav7->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbFav7, 7, 1, 1, 1);

        verticalSpacer = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 2, 3, 1, 1);

        pbFav2 = new QPushButton(mainFrame);
        pbFav2->setObjectName(QStringLiteral("pbFav2"));
        sizePolicy1.setHeightForWidth(pbFav2->sizePolicy().hasHeightForWidth());
        pbFav2->setSizePolicy(sizePolicy1);
        pbFav2->setMinimumSize(QSize(180, 80));
        pbFav2->setMaximumSize(QSize(180, 80));
        pbFav2->setFont(font);
        pbFav2->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbFav2, 1, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 6, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        pbFav8 = new QPushButton(mainFrame);
        pbFav8->setObjectName(QStringLiteral("pbFav8"));
        sizePolicy1.setHeightForWidth(pbFav8->sizePolicy().hasHeightForWidth());
        pbFav8->setSizePolicy(sizePolicy1);
        pbFav8->setMinimumSize(QSize(180, 80));
        pbFav8->setMaximumSize(QSize(180, 80));
        pbFav8->setFont(font);
        pbFav8->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbFav8, 7, 3, 1, 1);

        pbFav5 = new QPushButton(mainFrame);
        pbFav5->setObjectName(QStringLiteral("pbFav5"));
        sizePolicy1.setHeightForWidth(pbFav5->sizePolicy().hasHeightForWidth());
        pbFav5->setSizePolicy(sizePolicy1);
        pbFav5->setMinimumSize(QSize(180, 80));
        pbFav5->setMaximumSize(QSize(180, 80));
        pbFav5->setFont(font);
        pbFav5->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbFav5, 4, 3, 1, 1);

        pbFav4 = new QPushButton(mainFrame);
        pbFav4->setObjectName(QStringLiteral("pbFav4"));
        sizePolicy1.setHeightForWidth(pbFav4->sizePolicy().hasHeightForWidth());
        pbFav4->setSizePolicy(sizePolicy1);
        pbFav4->setMinimumSize(QSize(180, 80));
        pbFav4->setMaximumSize(QSize(180, 80));
        pbFav4->setFont(font);
        pbFav4->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbFav4, 4, 1, 1, 1);

        pbFav6 = new QPushButton(mainFrame);
        pbFav6->setObjectName(QStringLiteral("pbFav6"));
        sizePolicy1.setHeightForWidth(pbFav6->sizePolicy().hasHeightForWidth());
        pbFav6->setSizePolicy(sizePolicy1);
        pbFav6->setMinimumSize(QSize(180, 80));
        pbFav6->setMaximumSize(QSize(180, 80));
        pbFav6->setFont(font);
        pbFav6->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbFav6, 4, 5, 1, 1);

        pbFav9 = new QPushButton(mainFrame);
        pbFav9->setObjectName(QStringLiteral("pbFav9"));
        sizePolicy1.setHeightForWidth(pbFav9->sizePolicy().hasHeightForWidth());
        pbFav9->setSizePolicy(sizePolicy1);
        pbFav9->setMinimumSize(QSize(180, 80));
        pbFav9->setMaximumSize(QSize(180, 80));
        pbFav9->setFont(font);
        pbFav9->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbFav9, 7, 5, 1, 1);

        pbFav3 = new QPushButton(mainFrame);
        pbFav3->setObjectName(QStringLiteral("pbFav3"));
        sizePolicy1.setHeightForWidth(pbFav3->sizePolicy().hasHeightForWidth());
        pbFav3->setSizePolicy(sizePolicy1);
        pbFav3->setMinimumSize(QSize(180, 80));
        pbFav3->setMaximumSize(QSize(180, 80));
        pbFav3->setFont(font);
        pbFav3->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbFav3, 1, 5, 1, 1);

        pbFav1 = new QPushButton(mainFrame);
        pbFav1->setObjectName(QStringLiteral("pbFav1"));
        sizePolicy1.setHeightForWidth(pbFav1->sizePolicy().hasHeightForWidth());
        pbFav1->setSizePolicy(sizePolicy1);
        pbFav1->setMinimumSize(QSize(180, 80));
        pbFav1->setMaximumSize(QSize(180, 80));
        pbFav1->setFont(font);
        pbFav1->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pbFav1, 1, 1, 1, 1);

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

        QWidget::setTabOrder(pbSet1, pbSet2);
        QWidget::setTabOrder(pbSet2, pbSet3);
        QWidget::setTabOrder(pbSet3, pbSet4);
        QWidget::setTabOrder(pbSet4, pbSet5);
        QWidget::setTabOrder(pbSet5, pbFav1);
        QWidget::setTabOrder(pbFav1, pbFav2);
        QWidget::setTabOrder(pbFav2, pbFav3);
        QWidget::setTabOrder(pbFav3, pbFav4);
        QWidget::setTabOrder(pbFav4, pbFav5);
        QWidget::setTabOrder(pbFav5, pbFav6);
        QWidget::setTabOrder(pbFav6, pbFav7);
        QWidget::setTabOrder(pbFav7, pbFav8);
        QWidget::setTabOrder(pbFav8, pbFav9);

        retranslateUi(FavoriteForm);

        QMetaObject::connectSlotsByName(FavoriteForm);
    } // setupUi

    void retranslateUi(QWidget *FavoriteForm)
    {
        FavoriteForm->setWindowTitle(QApplication::translate("FavoriteForm", "Form", 0));
        lbCategory->setText(QApplication::translate("FavoriteForm", "FAVORITES", 0));
        lbCategoryName->setText(QApplication::translate("FavoriteForm", "MY FAVORITES SOUNDS", 0));
        pbSet5->setText(QApplication::translate("FavoriteForm", "SET 5", 0));
        lbWidgetTitle->setText(QApplication::translate("FavoriteForm", "FAVORITES", 0));
        pbSet3->setText(QApplication::translate("FavoriteForm", "SET 3", 0));
        pbSet1->setText(QApplication::translate("FavoriteForm", "SET 1", 0));
        pbSet4->setText(QApplication::translate("FavoriteForm", "SET 4", 0));
        pbSet2->setText(QApplication::translate("FavoriteForm", "SET 2", 0));
        pbFav7->setText(QApplication::translate("FavoriteForm", "PIANO GRANDE", 0));
        pbFav2->setText(QApplication::translate("FavoriteForm", "TROMBONE", 0));
        pbFav8->setText(QApplication::translate("FavoriteForm", "SAXOPHONE", 0));
        pbFav5->setText(QApplication::translate("FavoriteForm", "TRUMPET", 0));
        pbFav4->setText(QApplication::translate("FavoriteForm", "VIOLIN", 0));
        pbFav6->setText(QApplication::translate("FavoriteForm", "GUITAR", 0));
        pbFav9->setText(QApplication::translate("FavoriteForm", "BIG STRINGS", 0));
        pbFav3->setText(QApplication::translate("FavoriteForm", "ACCORDION", 0));
        pbFav1->setText(QApplication::translate("FavoriteForm", "SWEET  FLUTE", 0));
    } // retranslateUi

};

namespace Ui {
    class FavoriteForm: public Ui_FavoriteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAVORITEFORM_H
