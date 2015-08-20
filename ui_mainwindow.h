/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 480));
        MainWindow->setMaximumSize(QSize(800, 480));
        MainWindow->setStyleSheet(QLatin1String("#PresetBank{\n"
"	background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(22, 68, 115, 255), stop:1 rgba(21, 51, 83, 255))\n"
"}\n"
"\n"
"QLabel{\n"
"	color:white;\n"
"}\n"
"\n"
"#label{\n"
"	background-color:rgb(21, 68, 26);\n"
"	color: white;\n"
"}\n"
"\n"
"#lbBank1{\n"
"	background-color:rgb(131, 15, 29);\n"
"	color: white\n"
"}\n"
"\n"
"#lbBank2{\n"
"	background-color : rgb(131, 15, 29);\n"
"	color : white\n"
"}\n"
"\n"
"#lbKey{\n"
"	background-color : transparent;\n"
"	color : white\n"
"}\n"
"\n"
"#lbOctave{\n"
"	background-color : transparent;\n"
"	color : white\n"
"}\n"
"\n"
"#lbCategory{\n"
"	background-color : rgb(131, 15, 29);\n"
"	color: white\n"
"}\n"
"\n"
"#lbCatNb{\n"
"	background-color : rgb(131, 15, 29);\n"
"	color: white\n"
"}\n"
"\n"
"#lbCatName{\n"
"	background-color : transparent;\n"
"	color: white;\n"
"}\n"
"\n"
"#lbSelect_1{\n"
"	background-color : rgb(21, 68, 26);\n"
"}\n"
"\n"
"#lbSelect_2{\n"
"	background-color : rgb(21, 68, 26);\n"
"}\n"
"\n"
"#lbSelect_3{\n"
""
                        "	background-color : rgb(21, 68, 26);\n"
"}\n"
"\n"
"#lbSelect_4{\n"
"	background-color : rgb(21, 68, 26);\n"
"}\n"
"\n"
"#lbInstrName_1{\n"
"	background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(4, 14, 24, 255), stop:0.5 rgba(26, 68, 113, 255), stop:1 rgba(7, 18, 30, 255))\n"
"}\n"
"\n"
"#lbInstrName_2{\n"
"	background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(4, 14, 24, 255), stop:0.5 rgba(26, 68, 113, 255), stop:1 rgba(7, 18, 30, 255))\n"
"}\n"
"\n"
"#lbInstrName_3{\n"
"	background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(4, 14, 24, 255), stop:0.5 rgba(26, 68, 113, 255), stop:1 rgba(7, 18, 30, 255))\n"
"}\n"
"\n"
"#lbInstrName_4{\n"
"	background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(4, 14, 24, 255), stop:0.5 rgba(26, 68, 113, 255), stop:1 rgba(7, 18, 30, 255));\n"
"}\n"
"\n"
"#frame_Select{\n"
"	background-color: rgb(18, 22, 29);\n"
"}\n"
"\n"
"#frame_Eff{\n"
"	background-color"
                        ": rgb(18, 22, 29);\n"
"}\n"
"\n"
"#lbOpt_SEdit{\n"
"	background-color: rgb(18, 22, 29);\n"
"}\n"
"\n"
"#lbOpt_FEdit{\n"
"	background-color: rgb(18, 22, 29);\n"
"}\n"
"\n"
"#lbOpt_EQ{\n"
"	background-color:rgb(10, 23, 15);\n"
"}\n"
"\n"
"#lbOpt_Eff{\n"
"  background-color:rgb(10, 23, 15);\n"
"}\n"
"\n"
"#lbProg{\n"
"	background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.112403 rgba(14, 38, 63, 255), stop:0.143411 rgba(52, 144, 239, 255), stop:0.162791 rgba(37, 100, 166, 255), stop:0.79845 rgba(38, 100, 165, 255), stop:0.817829 rgba(53, 141, 233, 255), stop:0.848837 rgba(17, 46, 77, 255), stop:1 rgba(0, 0, 0, 255))\n"
"}\n"
"\n"
"#lbEQ_Prog_1{\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:1, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.112403 rgba(14, 38, 63, 255), stop:0.143411 rgba(52, 144, 239, 255), stop:0.162791 rgba(37, 100, 166, 255), stop:0.79845 rgba(38, 100, 165, 255), stop:0.817829 rgba(53, 141, 233, 255), stop:0.848837 rgba(17, "
                        "46, 77, 255), stop:1 rgba(0, 0, 0, 255))\n"
"}\n"
"\n"
"#lbEQ_Prog_2{\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:1, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.112403 rgba(14, 38, 63, 255), stop:0.143411 rgba(52, 144, 239, 255), stop:0.162791 rgba(37, 100, 166, 255), stop:0.79845 rgba(38, 100, 165, 255), stop:0.817829 rgba(53, 141, 233, 255), stop:0.848837 rgba(17, 46, 77, 255), stop:1 rgba(0, 0, 0, 255))\n"
"}\n"
"\n"
"#lbEQ_Prog_3{\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:1, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.112403 rgba(14, 38, 63, 255), stop:0.143411 rgba(52, 144, 239, 255), stop:0.162791 rgba(37, 100, 166, 255), stop:0.79845 rgba(38, 100, 165, 255), stop:0.817829 rgba(53, 141, 233, 255), stop:0.848837 rgba(17, 46, 77, 255), stop:1 rgba(0, 0, 0, 255))\n"
"}\n"
"\n"
"#lbEQ_Prog_4{\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:1, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.112403 rgba(14, 38, 63, 255), stop:0.143411 rgba(52, 144, 23"
                        "9, 255), stop:0.162791 rgba(37, 100, 166, 255), stop:0.79845 rgba(38, 100, 165, 255), stop:0.817829 rgba(53, 141, 233, 255), stop:0.848837 rgba(17, 46, 77, 255), stop:1 rgba(0, 0, 0, 255))\n"
"}\n"
"\n"
"#lbProg_text{\n"
"	background-color:transparent;\n"
"	border: 0px solid transparent;\n"
"	color:white;\n"
"}"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextOnly);
        MainWindow->setAnimated(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Synthetizer", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
