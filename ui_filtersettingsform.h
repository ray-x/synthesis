/********************************************************************************
** Form generated from reading UI file 'filtersettingsform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERSETTINGSFORM_H
#define UI_FILTERSETTINGSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilterSettingsForm
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QFrame *frame_4;
    QGridLayout *gridLayout_6;
    QLabel *label_3;
    QTableWidget *twFilterEG;
    QTableWidget *twEGController;
    QTableWidget *twControllerSettings;
    QFrame *frame_3;
    QGridLayout *gridLayout_5;
    QTableWidget *twFilterLFO2;
    QTableWidget *twFilterLFO1;
    QTableWidget *twLFOController;
    QLabel *label_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QTableWidget *twResController;
    QTableWidget *twFilterSettings2;
    QTableWidget *twTypeController;
    QLabel *label;
    QTableWidget *twFilterSettings1;
    QTableWidget *twVelocityCurve;
    QTableWidget *twKeyboard;
    QFrame *frameBlank;

    void setupUi(QWidget *FilterSettingsForm)
    {
        if (FilterSettingsForm->objectName().isEmpty())
            FilterSettingsForm->setObjectName(QStringLiteral("FilterSettingsForm"));
        FilterSettingsForm->resize(590, 379);
        FilterSettingsForm->setMinimumSize(QSize(590, 379));
        FilterSettingsForm->setMaximumSize(QSize(590, 379));
        FilterSettingsForm->setStyleSheet(QLatin1String("QWidget{\n"
"font: 550 13pt \"Open Sans\";\n"
"color: white;\n"
"background-color:transparent;\n"
"border: none;\n"
"}\n"
"\n"
"QFrame{\n"
"border: none;\n"
"background-color:black;\n"
"}\n"
"\n"
"#frameBlank{\n"
"background-color : rgb(16, 97, 114);\n"
"border      : none;\n"
"border-bottom: 1px solid black;\n"
"border-right: 1px solid black;\n"
"}\n"
"\n"
"QLabel{\n"
"background-color:rgb(0, 61, 73);\n"
"padding-top : 5px;\n"
"padding-bottom:5px;\n"
"font-size: 14pt;\n"
"border-bottom:1px solid black;\n"
"}\n"
"\n"
"/**************************************************************/\n"
"QScrollArea{\n"
"background-color: transparent;\n"
"border :none;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"border :   1px solid black;\n"
"background :   black;\n"
"width : 20px;\n"
"margin : 0 0 0 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {    \n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(253, 253, 253, 255), stop:1 rgba(149, 149, 149, 255));\n"
"min-height              :   20px;\n"
""
                        "margin: 0px 1px 0px 1px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,QScrollBar::sub-line:vertical  {\n"
"border                  :   none;\n"
"background              :   transparent;\n"
"height                  :   0px;\n"
"margin                  :   0 0 0 10px;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"border                  :   none;\n"
"width                   :   0px;\n"
"height                  :   0px;\n"
"background              :   white;\n"
"margin                  :   0 0 0 10px;\n"
"}\n"
"\n"
"/**************************************************************/\n"
"QSpinBox{\n"
"background-color            : rgb(16, 97, 114);\n"
"selection-background-color  : rgb(239, 159, 31);\n"
"}\n"
"\n"
"QSpinBox:focus{\n"
"background-color            : rgb(239, 159, 31);\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"width               : 0px; \n"
"border-width        : 0px;\n"
"}\n"
"QSpinBox::down-button {\n"
"width               : 0px; \n"
"border-width        : 0px;\n"
""
                        "}\n"
"\n"
"/**************************************************************/\n"
"QDoubleSpinBox{\n"
"background-color    : rgb(16, 97, 114);\n"
"selection-background-color  : rgb(239, 159, 31);\n"
"}\n"
"\n"
"QDoubleSpinBox:focus{\n"
"background-color    : rgb(239, 159, 31);\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button {\n"
"width          : 0px; \n"
"border-width   : 0px;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"width: 0px; \n"
"border-width: 0px;\n"
"}\n"
"\n"
"/**************************************************************/\n"
"QCheckBox::indicator { \n"
"width  : 36px; \n"
"height : 15px; \n"
"border : none;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"background-color : white;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"background-color : rgb(84, 189, 58);\n"
"}\n"
"\n"
"QCheckBox:focus { \n"
"border     : none;\n"
"color      : transparent;\n"
"}\n"
"\n"
"QCheckBox{\n"
"background-color    : rgb(216, 146, 1);\n"
"padding-left:3px;\n"
"margin-left:21px;\n"
"margin-right:20px;\n"
"margin-to"
                        "p:10px;\n"
"margin-bottom:10px;\n"
"}\n"
"\n"
"/**************************************************************/\n"
"QTableView{\n"
"background-color           : transparent;\n"
"selection-background-color : rgb(239, 159, 31);\n"
"border:none;\n"
"}\n"
"\n"
"QTableView::item {\n"
"color               :    white;  \n"
"font-weight         :    550;\n"
"background-color    :    rgb(16, 97, 114);\n"
"border:none;\n"
"padding:0px;\n"
"}\n"
"\n"
"QTableWidget::item:selected{\n"
"background-color    : rgb(239, 159, 31);\n"
"}\n"
"\n"
"/**************************************************************/\n"
"QHeaderView{\n"
"border:none;\n"
"selection-background-color: rgb(239, 159, 31);\n"
"}\n"
"\n"
"QHeaderView::section:vertical{\n"
"background-color    :  rgb(16, 97, 114);\n"
"color               :  white;\n"
"font-size           :  12pt;\n"
"font-weight         :  550;\n"
"padding-left        :  5px;\n"
"padding-top         :  0px;\n"
"padding-bottom      :  0px;\n"
"width               :  195px;\n"
"font-family      "
                        "   :  \"Open Sans\";\n"
"border               :  none;\n"
"border-bottom       : 1px solid black;\n"
"}\n"
"\n"
"#twTypeController QHeaderView::section:vertical,\n"
"#twVelocityCurve QHeaderView::section:vertical,\n"
"#twResController QHeaderView::section:vertical,\n"
"#twLFOController QHeaderView::section:vertical,\n"
"#twEGController QHeaderView::section:vertical{\n"
"width        : 120px;\n"
"border-right: 1px solid black;\n"
"}\n"
"\n"
"QHeaderView::section:checked{\n"
"background-color    : rgb(239, 159, 31);\n"
"}\n"
"\n"
"/**************************************************************/\n"
"QComboBox{\n"
"selection-background-color: rgb(239, 159, 31);\n"
"color   : white;\n"
"padding : 1px 0px 1px 3px;\n"
"background-color :  rgb(16, 97, 114);\n"
"}\n"
"\n"
"QComboBox QListView{\n"
"background-color : rgb(16, 97, 114);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item{\n"
"  border-bottom : 1px solid white;\n"
"  padding:0px;\n"
"}\n"
"\n"
"QComboBox:!editable  {\n"
"width         :200px;\n"
"padding-righ"
                        "t : 5px;\n"
"border:none;\n"
"}\n"
"\n"
"QComboBox::focus:!editable{\n"
"background-color : rgb(239, 159, 31);\n"
"}\n"
""));
        gridLayout = new QGridLayout(FilterSettingsForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(FilterSettingsForm);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QStringLiteral(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -205, 570, 830));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(2);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setMinimumSize(QSize(284, 541));
        frame_4->setMaximumSize(QSize(284, 541));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        frame_4->setPalette(palette);
        frame_4->setStyleSheet(QStringLiteral(""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_4);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 37));
        label_3->setMaximumSize(QSize(16777215, 37));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(68);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_3, 0, 0, 1, 1);

        twFilterEG = new QTableWidget(frame_4);
        if (twFilterEG->columnCount() < 1)
            twFilterEG->setColumnCount(1);
        if (twFilterEG->rowCount() < 7)
            twFilterEG->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twFilterEG->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twFilterEG->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twFilterEG->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twFilterEG->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        twFilterEG->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        twFilterEG->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        twFilterEG->setVerticalHeaderItem(6, __qtablewidgetitem6);
        twFilterEG->setObjectName(QStringLiteral("twFilterEG"));
        twFilterEG->setMaximumSize(QSize(16777215, 294));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(0, 0, 0, 0));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush4(QColor(239, 159, 31, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        twFilterEG->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(68);
        twFilterEG->setFont(font1);
        twFilterEG->setStyleSheet(QStringLiteral(""));
        twFilterEG->setFrameShape(QFrame::NoFrame);
        twFilterEG->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twFilterEG->setProperty("showDropIndicator", QVariant(false));
        twFilterEG->setSelectionMode(QAbstractItemView::SingleSelection);
        twFilterEG->setSelectionBehavior(QAbstractItemView::SelectRows);
        twFilterEG->setGridStyle(Qt::NoPen);
        twFilterEG->setColumnCount(1);
        twFilterEG->horizontalHeader()->setVisible(false);
        twFilterEG->horizontalHeader()->setDefaultSectionSize(42);
        twFilterEG->horizontalHeader()->setMinimumSectionSize(1);
        twFilterEG->horizontalHeader()->setStretchLastSection(true);
        twFilterEG->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_6->addWidget(twFilterEG, 1, 0, 1, 1);

        twEGController = new QTableWidget(frame_4);
        if (twEGController->columnCount() < 1)
            twEGController->setColumnCount(1);
        if (twEGController->rowCount() < 1)
            twEGController->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        twEGController->setVerticalHeaderItem(0, __qtablewidgetitem7);
        twEGController->setObjectName(QStringLiteral("twEGController"));
        twEGController->setMaximumSize(QSize(16777215, 42));
        twEGController->setStyleSheet(QStringLiteral(""));
        twEGController->setSelectionMode(QAbstractItemView::SingleSelection);
        twEGController->setSelectionBehavior(QAbstractItemView::SelectRows);
        twEGController->setGridStyle(Qt::NoPen);
        twEGController->setColumnCount(1);
        twEGController->horizontalHeader()->setVisible(false);
        twEGController->horizontalHeader()->setStretchLastSection(true);
        twEGController->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_6->addWidget(twEGController, 2, 0, 1, 1);

        twControllerSettings = new QTableWidget(frame_4);
        if (twControllerSettings->columnCount() < 1)
            twControllerSettings->setColumnCount(1);
        if (twControllerSettings->rowCount() < 4)
            twControllerSettings->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        twControllerSettings->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        twControllerSettings->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        twControllerSettings->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        twControllerSettings->setVerticalHeaderItem(3, __qtablewidgetitem11);
        twControllerSettings->setObjectName(QStringLiteral("twControllerSettings"));
        twControllerSettings->setMaximumSize(QSize(16777215, 168));
        twControllerSettings->setStyleSheet(QStringLiteral(""));
        twControllerSettings->setSelectionMode(QAbstractItemView::SingleSelection);
        twControllerSettings->setSelectionBehavior(QAbstractItemView::SelectRows);
        twControllerSettings->setGridStyle(Qt::NoPen);
        twControllerSettings->setColumnCount(1);
        twControllerSettings->horizontalHeader()->setVisible(false);
        twControllerSettings->horizontalHeader()->setStretchLastSection(true);
        twControllerSettings->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_6->addWidget(twControllerSettings, 3, 0, 1, 1);


        gridLayout_2->addWidget(frame_4, 0, 1, 1, 1);

        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setMinimumSize(QSize(284, 289));
        frame_3->setMaximumSize(QSize(284, 289));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        frame_3->setPalette(palette2);
        frame_3->setStyleSheet(QStringLiteral(""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_3);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        twFilterLFO2 = new QTableWidget(frame_3);
        if (twFilterLFO2->columnCount() < 1)
            twFilterLFO2->setColumnCount(1);
        if (twFilterLFO2->rowCount() < 2)
            twFilterLFO2->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        twFilterLFO2->setVerticalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        twFilterLFO2->setVerticalHeaderItem(1, __qtablewidgetitem13);
        twFilterLFO2->setObjectName(QStringLiteral("twFilterLFO2"));
        twFilterLFO2->setMaximumSize(QSize(16777215, 84));
        twFilterLFO2->setStyleSheet(QStringLiteral(""));
        twFilterLFO2->setFrameShape(QFrame::NoFrame);
        twFilterLFO2->setSelectionMode(QAbstractItemView::SingleSelection);
        twFilterLFO2->setSelectionBehavior(QAbstractItemView::SelectRows);
        twFilterLFO2->setGridStyle(Qt::NoPen);
        twFilterLFO2->setColumnCount(1);
        twFilterLFO2->horizontalHeader()->setVisible(false);
        twFilterLFO2->horizontalHeader()->setStretchLastSection(true);
        twFilterLFO2->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_5->addWidget(twFilterLFO2, 3, 0, 1, 1);

        twFilterLFO1 = new QTableWidget(frame_3);
        if (twFilterLFO1->columnCount() < 1)
            twFilterLFO1->setColumnCount(1);
        if (twFilterLFO1->rowCount() < 3)
            twFilterLFO1->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        twFilterLFO1->setVerticalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        twFilterLFO1->setVerticalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        twFilterLFO1->setVerticalHeaderItem(2, __qtablewidgetitem16);
        twFilterLFO1->setObjectName(QStringLiteral("twFilterLFO1"));
        twFilterLFO1->setMaximumSize(QSize(16777215, 126));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush9(QColor(0, 0, 0, 255));
        brush9.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        twFilterLFO1->setPalette(palette3);
        twFilterLFO1->setFont(font1);
        twFilterLFO1->setStyleSheet(QStringLiteral(""));
        twFilterLFO1->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twFilterLFO1->setProperty("showDropIndicator", QVariant(false));
        twFilterLFO1->setSelectionMode(QAbstractItemView::SingleSelection);
        twFilterLFO1->setSelectionBehavior(QAbstractItemView::SelectRows);
        twFilterLFO1->setGridStyle(Qt::NoPen);
        twFilterLFO1->setColumnCount(1);
        twFilterLFO1->horizontalHeader()->setVisible(false);
        twFilterLFO1->horizontalHeader()->setDefaultSectionSize(42);
        twFilterLFO1->horizontalHeader()->setMinimumSectionSize(1);
        twFilterLFO1->horizontalHeader()->setStretchLastSection(true);
        twFilterLFO1->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_5->addWidget(twFilterLFO1, 1, 0, 1, 1);

        twLFOController = new QTableWidget(frame_3);
        if (twLFOController->columnCount() < 1)
            twLFOController->setColumnCount(1);
        if (twLFOController->rowCount() < 1)
            twLFOController->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        twLFOController->setVerticalHeaderItem(0, __qtablewidgetitem17);
        twLFOController->setObjectName(QStringLiteral("twLFOController"));
        twLFOController->setMinimumSize(QSize(0, 42));
        twLFOController->setMaximumSize(QSize(16777215, 42));
        twLFOController->setStyleSheet(QStringLiteral(""));
        twLFOController->setFrameShape(QFrame::NoFrame);
        twLFOController->setSelectionMode(QAbstractItemView::SingleSelection);
        twLFOController->setSelectionBehavior(QAbstractItemView::SelectRows);
        twLFOController->setGridStyle(Qt::NoPen);
        twLFOController->setColumnCount(1);
        twLFOController->horizontalHeader()->setVisible(false);
        twLFOController->horizontalHeader()->setStretchLastSection(true);
        twLFOController->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_5->addWidget(twLFOController, 2, 0, 1, 1);

        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 37));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame_3, 1, 0, 1, 1);

        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(284, 541));
        frame_2->setMaximumSize(QSize(284, 541));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        frame_2->setPalette(palette4);
        frame_2->setStyleSheet(QStringLiteral(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        twResController = new QTableWidget(frame_2);
        if (twResController->columnCount() < 1)
            twResController->setColumnCount(1);
        if (twResController->rowCount() < 1)
            twResController->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        twResController->setVerticalHeaderItem(0, __qtablewidgetitem18);
        twResController->setObjectName(QStringLiteral("twResController"));
        twResController->setMinimumSize(QSize(0, 42));
        twResController->setMaximumSize(QSize(16777215, 42));
        twResController->setStyleSheet(QStringLiteral(""));
        twResController->setFrameShape(QFrame::NoFrame);
        twResController->setSelectionMode(QAbstractItemView::SingleSelection);
        twResController->setSelectionBehavior(QAbstractItemView::SelectRows);
        twResController->setGridStyle(Qt::NoPen);
        twResController->setColumnCount(1);
        twResController->horizontalHeader()->setVisible(false);
        twResController->horizontalHeader()->setStretchLastSection(true);
        twResController->verticalHeader()->setVisible(true);
        twResController->verticalHeader()->setDefaultSectionSize(42);
        twResController->verticalHeader()->setMinimumSectionSize(0);

        gridLayout_4->addWidget(twResController, 5, 0, 1, 1);

        twFilterSettings2 = new QTableWidget(frame_2);
        if (twFilterSettings2->columnCount() < 1)
            twFilterSettings2->setColumnCount(1);
        if (twFilterSettings2->rowCount() < 4)
            twFilterSettings2->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        twFilterSettings2->setVerticalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        twFilterSettings2->setVerticalHeaderItem(1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        twFilterSettings2->setVerticalHeaderItem(2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        twFilterSettings2->setVerticalHeaderItem(3, __qtablewidgetitem22);
        QBrush brush10(QColor(255, 255, 255, 255));
        brush10.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setForeground(brush10);
        twFilterSettings2->setItem(0, 0, __qtablewidgetitem23);
        QBrush brush11(QColor(255, 255, 255, 255));
        brush11.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setForeground(brush11);
        twFilterSettings2->setItem(1, 0, __qtablewidgetitem24);
        QBrush brush12(QColor(255, 255, 255, 255));
        brush12.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setForeground(brush12);
        twFilterSettings2->setItem(2, 0, __qtablewidgetitem25);
        QBrush brush13(QColor(255, 255, 255, 255));
        brush13.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setForeground(brush13);
        twFilterSettings2->setItem(3, 0, __qtablewidgetitem26);
        twFilterSettings2->setObjectName(QStringLiteral("twFilterSettings2"));
        twFilterSettings2->setMinimumSize(QSize(0, 168));
        twFilterSettings2->setMaximumSize(QSize(16777215, 168));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush14(QColor(0, 0, 0, 255));
        brush14.setStyle(Qt::NoBrush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush14);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush15(QColor(0, 0, 0, 255));
        brush15.setStyle(Qt::NoBrush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush16(QColor(0, 0, 0, 255));
        brush16.setStyle(Qt::NoBrush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        twFilterSettings2->setPalette(palette5);
        twFilterSettings2->setFont(font1);
        twFilterSettings2->setStyleSheet(QStringLiteral(""));
        twFilterSettings2->setFrameShape(QFrame::NoFrame);
        twFilterSettings2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twFilterSettings2->setProperty("showDropIndicator", QVariant(false));
        twFilterSettings2->setSelectionMode(QAbstractItemView::SingleSelection);
        twFilterSettings2->setSelectionBehavior(QAbstractItemView::SelectRows);
        twFilterSettings2->setShowGrid(true);
        twFilterSettings2->setGridStyle(Qt::NoPen);
        twFilterSettings2->setColumnCount(1);
        twFilterSettings2->horizontalHeader()->setVisible(false);
        twFilterSettings2->horizontalHeader()->setDefaultSectionSize(42);
        twFilterSettings2->horizontalHeader()->setMinimumSectionSize(1);
        twFilterSettings2->horizontalHeader()->setStretchLastSection(true);
        twFilterSettings2->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_4->addWidget(twFilterSettings2, 4, 0, 1, 1);

        twTypeController = new QTableWidget(frame_2);
        if (twTypeController->columnCount() < 1)
            twTypeController->setColumnCount(1);
        if (twTypeController->rowCount() < 2)
            twTypeController->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        twTypeController->setVerticalHeaderItem(0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        twTypeController->setVerticalHeaderItem(1, __qtablewidgetitem28);
        twTypeController->setObjectName(QStringLiteral("twTypeController"));
        twTypeController->setMinimumSize(QSize(0, 84));
        twTypeController->setMaximumSize(QSize(16777215, 84));
        twTypeController->setStyleSheet(QStringLiteral(""));
        twTypeController->setFrameShape(QFrame::NoFrame);
        twTypeController->setSelectionMode(QAbstractItemView::SingleSelection);
        twTypeController->setSelectionBehavior(QAbstractItemView::SelectRows);
        twTypeController->setGridStyle(Qt::NoPen);
        twTypeController->setColumnCount(1);
        twTypeController->horizontalHeader()->setVisible(false);
        twTypeController->horizontalHeader()->setStretchLastSection(true);
        twTypeController->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_4->addWidget(twTypeController, 1, 0, 1, 1);

        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 37));
        label->setMaximumSize(QSize(16777215, 37));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        twFilterSettings1 = new QTableWidget(frame_2);
        if (twFilterSettings1->columnCount() < 1)
            twFilterSettings1->setColumnCount(1);
        if (twFilterSettings1->rowCount() < 2)
            twFilterSettings1->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        twFilterSettings1->setVerticalHeaderItem(0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        twFilterSettings1->setVerticalHeaderItem(1, __qtablewidgetitem30);
        twFilterSettings1->setObjectName(QStringLiteral("twFilterSettings1"));
        twFilterSettings1->setMinimumSize(QSize(0, 84));
        twFilterSettings1->setMaximumSize(QSize(16777215, 84));
        twFilterSettings1->setStyleSheet(QStringLiteral(""));
        twFilterSettings1->setFrameShape(QFrame::NoFrame);
        twFilterSettings1->setFrameShadow(QFrame::Plain);
        twFilterSettings1->setSelectionMode(QAbstractItemView::SingleSelection);
        twFilterSettings1->setSelectionBehavior(QAbstractItemView::SelectRows);
        twFilterSettings1->setGridStyle(Qt::NoPen);
        twFilterSettings1->setColumnCount(1);
        twFilterSettings1->horizontalHeader()->setVisible(false);
        twFilterSettings1->horizontalHeader()->setStretchLastSection(true);
        twFilterSettings1->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_4->addWidget(twFilterSettings1, 2, 0, 1, 1);

        twVelocityCurve = new QTableWidget(frame_2);
        if (twVelocityCurve->columnCount() < 1)
            twVelocityCurve->setColumnCount(1);
        if (twVelocityCurve->rowCount() < 1)
            twVelocityCurve->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        twVelocityCurve->setVerticalHeaderItem(0, __qtablewidgetitem31);
        twVelocityCurve->setObjectName(QStringLiteral("twVelocityCurve"));
        twVelocityCurve->setMinimumSize(QSize(0, 42));
        twVelocityCurve->setMaximumSize(QSize(16777215, 42));
        twVelocityCurve->setStyleSheet(QStringLiteral(""));
        twVelocityCurve->setFrameShape(QFrame::NoFrame);
        twVelocityCurve->setFrameShadow(QFrame::Plain);
        twVelocityCurve->setSelectionMode(QAbstractItemView::SingleSelection);
        twVelocityCurve->setSelectionBehavior(QAbstractItemView::SelectRows);
        twVelocityCurve->setGridStyle(Qt::NoPen);
        twVelocityCurve->setColumnCount(1);
        twVelocityCurve->horizontalHeader()->setVisible(false);
        twVelocityCurve->horizontalHeader()->setStretchLastSection(true);
        twVelocityCurve->verticalHeader()->setDefaultSectionSize(42);
        twVelocityCurve->verticalHeader()->setMinimumSectionSize(0);

        gridLayout_4->addWidget(twVelocityCurve, 3, 0, 1, 1);

        twKeyboard = new QTableWidget(frame_2);
        if (twKeyboard->columnCount() < 1)
            twKeyboard->setColumnCount(1);
        if (twKeyboard->rowCount() < 2)
            twKeyboard->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        twKeyboard->setVerticalHeaderItem(0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        twKeyboard->setVerticalHeaderItem(1, __qtablewidgetitem33);
        twKeyboard->setObjectName(QStringLiteral("twKeyboard"));
        twKeyboard->setMinimumSize(QSize(1, 84));
        twKeyboard->setMaximumSize(QSize(16777215, 84));
        twKeyboard->setStyleSheet(QStringLiteral(""));
        twKeyboard->setFrameShape(QFrame::NoFrame);
        twKeyboard->setSelectionMode(QAbstractItemView::SingleSelection);
        twKeyboard->setSelectionBehavior(QAbstractItemView::SelectRows);
        twKeyboard->setShowGrid(true);
        twKeyboard->setGridStyle(Qt::NoPen);
        twKeyboard->setSortingEnabled(false);
        twKeyboard->setColumnCount(1);
        twKeyboard->horizontalHeader()->setVisible(false);
        twKeyboard->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        twKeyboard->horizontalHeader()->setStretchLastSection(true);
        twKeyboard->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_4->addWidget(twKeyboard, 6, 0, 1, 1);


        gridLayout_2->addWidget(frame_2, 0, 0, 1, 1);

        frameBlank = new QFrame(scrollAreaWidgetContents);
        frameBlank->setObjectName(QStringLiteral("frameBlank"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameBlank->sizePolicy().hasHeightForWidth());
        frameBlank->setSizePolicy(sizePolicy1);
        frameBlank->setStyleSheet(QStringLiteral(""));
        frameBlank->setFrameShape(QFrame::NoFrame);
        frameBlank->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frameBlank, 1, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(FilterSettingsForm);

        QMetaObject::connectSlotsByName(FilterSettingsForm);
    } // setupUi

    void retranslateUi(QWidget *FilterSettingsForm)
    {
        FilterSettingsForm->setWindowTitle(QApplication::translate("FilterSettingsForm", "Form", 0));
        label_3->setText(QApplication::translate("FilterSettingsForm", "Filter Cutoff Envelop", 0));
        QTableWidgetItem *___qtablewidgetitem = twFilterEG->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FilterSettingsForm", "Pre-attack Level (%)", 0));
        QTableWidgetItem *___qtablewidgetitem1 = twFilterEG->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FilterSettingsForm", "Attack Time (seconds)", 0));
        QTableWidgetItem *___qtablewidgetitem2 = twFilterEG->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("FilterSettingsForm", "Decay 1 Time (seconds)", 0));
        QTableWidgetItem *___qtablewidgetitem3 = twFilterEG->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("FilterSettingsForm", "Decay 2 Time (seconds)", 0));
        QTableWidgetItem *___qtablewidgetitem4 = twFilterEG->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("FilterSettingsForm", "Infinite Sustain", 0));
        QTableWidgetItem *___qtablewidgetitem5 = twFilterEG->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("FilterSettingsForm", "Sustain Level (%)", 0));
        QTableWidgetItem *___qtablewidgetitem6 = twFilterEG->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("FilterSettingsForm", "Release Time (seconds)", 0));
        QTableWidgetItem *___qtablewidgetitem7 = twEGController->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("FilterSettingsForm", "Ctrler", 0));
        QTableWidgetItem *___qtablewidgetitem8 = twControllerSettings->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("FilterSettingsForm", "Ctrler Invert", 0));
        QTableWidgetItem *___qtablewidgetitem9 = twControllerSettings->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("FilterSettingsForm", "Ctrler Attack Influence", 0));
        QTableWidgetItem *___qtablewidgetitem10 = twControllerSettings->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("FilterSettingsForm", "Ctrler Decay Influence", 0));
        QTableWidgetItem *___qtablewidgetitem11 = twControllerSettings->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("FilterSettingsForm", "Ctrler Release Influence", 0));
        QTableWidgetItem *___qtablewidgetitem12 = twFilterLFO2->verticalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("FilterSettingsForm", "Flip Phase", 0));
        QTableWidgetItem *___qtablewidgetitem13 = twFilterLFO2->verticalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("FilterSettingsForm", "Sync", 0));
        QTableWidgetItem *___qtablewidgetitem14 = twFilterLFO1->verticalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("FilterSettingsForm", "Frequency", 0));
        QTableWidgetItem *___qtablewidgetitem15 = twFilterLFO1->verticalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("FilterSettingsForm", "Internal Depth", 0));
        QTableWidgetItem *___qtablewidgetitem16 = twFilterLFO1->verticalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("FilterSettingsForm", "Control Depth", 0));
        QTableWidgetItem *___qtablewidgetitem17 = twLFOController->verticalHeaderItem(0);
        ___qtablewidgetitem17->setText(QApplication::translate("FilterSettingsForm", "Ctrler", 0));
        label_2->setText(QApplication::translate("FilterSettingsForm", "Filter Cutoff Oscillator", 0));
        QTableWidgetItem *___qtablewidgetitem18 = twResController->verticalHeaderItem(0);
        ___qtablewidgetitem18->setText(QApplication::translate("FilterSettingsForm", "Reson. Ctrler", 0));
        QTableWidgetItem *___qtablewidgetitem19 = twFilterSettings2->verticalHeaderItem(0);
        ___qtablewidgetitem19->setText(QApplication::translate("FilterSettingsForm", "Velocity Scale", 0));
        QTableWidgetItem *___qtablewidgetitem20 = twFilterSettings2->verticalHeaderItem(1);
        ___qtablewidgetitem20->setText(QApplication::translate("FilterSettingsForm", "Velocity Dynamic Range", 0));
        QTableWidgetItem *___qtablewidgetitem21 = twFilterSettings2->verticalHeaderItem(2);
        ___qtablewidgetitem21->setText(QApplication::translate("FilterSettingsForm", "Resonance", 0));
        QTableWidgetItem *___qtablewidgetitem22 = twFilterSettings2->verticalHeaderItem(3);
        ___qtablewidgetitem22->setText(QApplication::translate("FilterSettingsForm", "Resonance Dynamic", 0));

        const bool __sortingEnabled = twFilterSettings2->isSortingEnabled();
        twFilterSettings2->setSortingEnabled(false);
        twFilterSettings2->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem23 = twTypeController->verticalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("FilterSettingsForm", "Filter Type", 0));
        QTableWidgetItem *___qtablewidgetitem24 = twTypeController->verticalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("FilterSettingsForm", "Cutoff Ctrler", 0));
        label->setText(QApplication::translate("FilterSettingsForm", "Basic Filter Settings", 0));
        QTableWidgetItem *___qtablewidgetitem25 = twFilterSettings1->verticalHeaderItem(0);
        ___qtablewidgetitem25->setText(QApplication::translate("FilterSettingsForm", "Cutoff Ctrler Invert", 0));
        QTableWidgetItem *___qtablewidgetitem26 = twFilterSettings1->verticalHeaderItem(1);
        ___qtablewidgetitem26->setText(QApplication::translate("FilterSettingsForm", "Cutoff", 0));
        QTableWidgetItem *___qtablewidgetitem27 = twVelocityCurve->verticalHeaderItem(0);
        ___qtablewidgetitem27->setText(QApplication::translate("FilterSettingsForm", "Velocity Curve", 0));
        QTableWidgetItem *___qtablewidgetitem28 = twKeyboard->verticalHeaderItem(0);
        ___qtablewidgetitem28->setText(QApplication::translate("FilterSettingsForm", "Kbd Tracking", 0));
        QTableWidgetItem *___qtablewidgetitem29 = twKeyboard->verticalHeaderItem(1);
        ___qtablewidgetitem29->setText(QApplication::translate("FilterSettingsForm", "Kbd Tracking breakpoint", 0));
    } // retranslateUi

};

namespace Ui {
    class FilterSettingsForm: public Ui_FilterSettingsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERSETTINGSFORM_H
