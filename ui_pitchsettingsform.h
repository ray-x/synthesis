/********************************************************************************
** Form generated from reading UI file 'pitchsettingsform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PITCHSETTINGSFORM_H
#define UI_PITCHSETTINGSFORM_H

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

class Ui_PitchSettingsForm
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QTableWidget *twPitchOscillator2;
    QLabel *label_3;
    QTableWidget *twPitchOscillator1;
    QTableWidget *twController;
    QFrame *frameBlank2;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QTableWidget *twPitchSettings;
    QLabel *label_2;
    QLabel *label;
    QTableWidget *twPitchEnvelop;
    QFrame *frameBlank;

    void setupUi(QWidget *PitchSettingsForm)
    {
        if (PitchSettingsForm->objectName().isEmpty())
            PitchSettingsForm->setObjectName(QStringLiteral("PitchSettingsForm"));
        PitchSettingsForm->resize(590, 379);
        PitchSettingsForm->setMinimumSize(QSize(590, 379));
        PitchSettingsForm->setMaximumSize(QSize(590, 379));
        PitchSettingsForm->setStyleSheet(QLatin1String("QWidget{\n"
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
"#frameBlank, #frameBlank2{\n"
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
"min-height            "
                        "  :   20px;\n"
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
"border-width  "
                        "      : 0px;\n"
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
"margin-right:20"
                        "px;\n"
"margin-top:10px;\n"
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
""
                        "font-family         :  \"Open Sans\";\n"
"border               :  none;\n"
"border-bottom       : 1px solid black;\n"
"}\n"
"\n"
"#twController QHeaderView::section:verticall{\n"
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
"padding-right : 5px;\n"
"border:none;\n"
"}\n"
"\n"
"QComboBox::focus:!editable{\n"
"background-color : rgb(239, 159, 31);\n"
"}\n"
""));
        gridLayout = new QGridLayout(PitchSettingsForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(PitchSettingsForm);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 326));
        scrollArea->setStyleSheet(QStringLiteral(""));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 570, 379));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(2);
        gridLayout_3->setVerticalSpacing(10);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setMinimumSize(QSize(284, 379));
        frame_3->setMaximumSize(QSize(284, 379));
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
        frame_3->setPalette(palette);
        frame_3->setStyleSheet(QStringLiteral(""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        twPitchOscillator2 = new QTableWidget(frame_3);
        if (twPitchOscillator2->columnCount() < 1)
            twPitchOscillator2->setColumnCount(1);
        if (twPitchOscillator2->rowCount() < 1)
            twPitchOscillator2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twPitchOscillator2->setVerticalHeaderItem(0, __qtablewidgetitem);
        twPitchOscillator2->setObjectName(QStringLiteral("twPitchOscillator2"));
        twPitchOscillator2->setMinimumSize(QSize(0, 42));
        twPitchOscillator2->setMaximumSize(QSize(16777215, 42));
        twPitchOscillator2->setStyleSheet(QStringLiteral(""));
        twPitchOscillator2->setSelectionMode(QAbstractItemView::SingleSelection);
        twPitchOscillator2->setSelectionBehavior(QAbstractItemView::SelectRows);
        twPitchOscillator2->setGridStyle(Qt::NoPen);
        twPitchOscillator2->setColumnCount(1);
        twPitchOscillator2->horizontalHeader()->setVisible(false);
        twPitchOscillator2->horizontalHeader()->setStretchLastSection(true);
        twPitchOscillator2->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_2->addWidget(twPitchOscillator2, 3, 0, 1, 1);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
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

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        twPitchOscillator1 = new QTableWidget(frame_3);
        if (twPitchOscillator1->columnCount() < 1)
            twPitchOscillator1->setColumnCount(1);
        if (twPitchOscillator1->rowCount() < 3)
            twPitchOscillator1->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twPitchOscillator1->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twPitchOscillator1->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twPitchOscillator1->setVerticalHeaderItem(2, __qtablewidgetitem3);
        twPitchOscillator1->setObjectName(QStringLiteral("twPitchOscillator1"));
        twPitchOscillator1->setMaximumSize(QSize(16777215, 126));
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
        twPitchOscillator1->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(68);
        twPitchOscillator1->setFont(font1);
        twPitchOscillator1->setStyleSheet(QStringLiteral(""));
        twPitchOscillator1->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twPitchOscillator1->setProperty("showDropIndicator", QVariant(false));
        twPitchOscillator1->setSelectionMode(QAbstractItemView::SingleSelection);
        twPitchOscillator1->setSelectionBehavior(QAbstractItemView::SelectRows);
        twPitchOscillator1->setGridStyle(Qt::NoPen);
        twPitchOscillator1->setColumnCount(1);
        twPitchOscillator1->horizontalHeader()->setVisible(false);
        twPitchOscillator1->horizontalHeader()->setDefaultSectionSize(42);
        twPitchOscillator1->horizontalHeader()->setMinimumSectionSize(1);
        twPitchOscillator1->horizontalHeader()->setStretchLastSection(true);
        twPitchOscillator1->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_2->addWidget(twPitchOscillator1, 1, 0, 1, 1);

        twController = new QTableWidget(frame_3);
        if (twController->columnCount() < 1)
            twController->setColumnCount(1);
        if (twController->rowCount() < 1)
            twController->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        twController->setVerticalHeaderItem(0, __qtablewidgetitem4);
        twController->setObjectName(QStringLiteral("twController"));
        twController->setMaximumSize(QSize(16777215, 42));
        twController->setStyleSheet(QStringLiteral(""));
        twController->setFrameShape(QFrame::NoFrame);
        twController->setSelectionMode(QAbstractItemView::SingleSelection);
        twController->setSelectionBehavior(QAbstractItemView::SelectRows);
        twController->setGridStyle(Qt::NoPen);
        twController->setColumnCount(1);
        twController->horizontalHeader()->setVisible(false);
        twController->horizontalHeader()->setStretchLastSection(true);
        twController->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_2->addWidget(twController, 2, 0, 1, 1);

        frameBlank2 = new QFrame(frame_3);
        frameBlank2->setObjectName(QStringLiteral("frameBlank2"));
        frameBlank2->setStyleSheet(QStringLiteral(""));
        frameBlank2->setFrameShape(QFrame::StyledPanel);
        frameBlank2->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frameBlank2, 4, 0, 1, 1);


        gridLayout_3->addWidget(frame_3, 0, 1, 1, 1);

        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(284, 326));
        frame_2->setMaximumSize(QSize(284, 379));
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
        frame_2->setPalette(palette2);
        frame_2->setStyleSheet(QStringLiteral(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        twPitchSettings = new QTableWidget(frame_2);
        if (twPitchSettings->columnCount() < 1)
            twPitchSettings->setColumnCount(1);
        if (twPitchSettings->rowCount() < 4)
            twPitchSettings->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        twPitchSettings->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        twPitchSettings->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        twPitchSettings->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        twPitchSettings->setVerticalHeaderItem(3, __qtablewidgetitem8);
        twPitchSettings->setObjectName(QStringLiteral("twPitchSettings"));
        twPitchSettings->setMaximumSize(QSize(16777215, 168));
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
        twPitchSettings->setPalette(palette3);
        twPitchSettings->setFont(font1);
        twPitchSettings->setStyleSheet(QStringLiteral(""));
        twPitchSettings->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twPitchSettings->setProperty("showDropIndicator", QVariant(false));
        twPitchSettings->setSelectionMode(QAbstractItemView::SingleSelection);
        twPitchSettings->setSelectionBehavior(QAbstractItemView::SelectRows);
        twPitchSettings->setGridStyle(Qt::NoPen);
        twPitchSettings->setColumnCount(1);
        twPitchSettings->horizontalHeader()->setVisible(false);
        twPitchSettings->horizontalHeader()->setDefaultSectionSize(42);
        twPitchSettings->horizontalHeader()->setMinimumSectionSize(1);
        twPitchSettings->horizontalHeader()->setStretchLastSection(true);
        twPitchSettings->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_4->addWidget(twPitchSettings, 1, 0, 1, 1);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 37));
        label_2->setMaximumSize(QSize(16777215, 37));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 37));
        label->setMaximumSize(QSize(16777215, 37));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        twPitchEnvelop = new QTableWidget(frame_2);
        if (twPitchEnvelop->columnCount() < 1)
            twPitchEnvelop->setColumnCount(1);
        if (twPitchEnvelop->rowCount() < 2)
            twPitchEnvelop->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        twPitchEnvelop->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        twPitchEnvelop->setVerticalHeaderItem(1, __qtablewidgetitem10);
        twPitchEnvelop->setObjectName(QStringLiteral("twPitchEnvelop"));
        twPitchEnvelop->setMaximumSize(QSize(16777215, 84));
        twPitchEnvelop->setStyleSheet(QStringLiteral(""));
        twPitchEnvelop->setSelectionMode(QAbstractItemView::SingleSelection);
        twPitchEnvelop->setSelectionBehavior(QAbstractItemView::SelectRows);
        twPitchEnvelop->setGridStyle(Qt::NoPen);
        twPitchEnvelop->setColumnCount(1);
        twPitchEnvelop->horizontalHeader()->setVisible(false);
        twPitchEnvelop->horizontalHeader()->setStretchLastSection(true);
        twPitchEnvelop->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_4->addWidget(twPitchEnvelop, 3, 0, 1, 1);

        frameBlank = new QFrame(frame_2);
        frameBlank->setObjectName(QStringLiteral("frameBlank"));
        frameBlank->setStyleSheet(QStringLiteral(""));
        frameBlank->setFrameShape(QFrame::StyledPanel);
        frameBlank->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(frameBlank, 4, 0, 1, 1);


        gridLayout_3->addWidget(frame_2, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(PitchSettingsForm);

        QMetaObject::connectSlotsByName(PitchSettingsForm);
    } // setupUi

    void retranslateUi(QWidget *PitchSettingsForm)
    {
        PitchSettingsForm->setWindowTitle(QApplication::translate("PitchSettingsForm", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = twPitchOscillator2->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PitchSettingsForm", "Sync", 0));
        label_3->setText(QApplication::translate("PitchSettingsForm", "Pitch Oscillator", 0));
        QTableWidgetItem *___qtablewidgetitem1 = twPitchOscillator1->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("PitchSettingsForm", "Frequency", 0));
        QTableWidgetItem *___qtablewidgetitem2 = twPitchOscillator1->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("PitchSettingsForm", "Internal Depth", 0));
        QTableWidgetItem *___qtablewidgetitem3 = twPitchOscillator1->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("PitchSettingsForm", "Control Depth", 0));
        QTableWidgetItem *___qtablewidgetitem4 = twController->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("PitchSettingsForm", "Ctrler", 0));
        QTableWidgetItem *___qtablewidgetitem5 = twPitchSettings->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("PitchSettingsForm", "Fine Tune", 0));
        QTableWidgetItem *___qtablewidgetitem6 = twPitchSettings->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("PitchSettingsForm", "Key Tune", 0));
        QTableWidgetItem *___qtablewidgetitem7 = twPitchSettings->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("PitchSettingsForm", "Octave Tune", 0));
        QTableWidgetItem *___qtablewidgetitem8 = twPitchSettings->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("PitchSettingsForm", "Pitch Track", 0));
        label_2->setText(QApplication::translate("PitchSettingsForm", "Basic Pitch Envelop", 0));
        label->setText(QApplication::translate("PitchSettingsForm", "General Pitch Settings", 0));
        QTableWidgetItem *___qtablewidgetitem9 = twPitchEnvelop->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("PitchSettingsForm", "Attack           ", 0));
        QTableWidgetItem *___qtablewidgetitem10 = twPitchEnvelop->verticalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("PitchSettingsForm", "Depth", 0));
    } // retranslateUi

};

namespace Ui {
    class PitchSettingsForm: public Ui_PitchSettingsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PITCHSETTINGSFORM_H
