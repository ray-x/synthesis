/********************************************************************************
** Form generated from reading UI file 'ampsettingsform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPSETTINGSFORM_H
#define UI_AMPSETTINGSFORM_H

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

class Ui_AmpSettingsForm
{
public:
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QFrame *frameLeft;
    QGridLayout *gridLayout_3;
    QTableWidget *twAmplitudeEnvelope;
    QTableWidget *twControllerInfluence;
    QTableWidget *twAmplitudeBasic;
    QLabel *lbGeneralSettings;
    QTableWidget *twController;
    QLabel *lbEnvelope;
    QFrame *lframeCrossfade;
    QGridLayout *gridLayout_5;
    QTableWidget *twCrossfade;
    QTableWidget *twCrossFadeController;
    QLabel *lbCrossfade;
    QFrame *frameOscillator;
    QGridLayout *gridLayout_2;
    QTableWidget *twAmpOscillator;
    QLabel *lbOscillator;
    QTableWidget *twAmpOscillator2;
    QTableWidget *twOscController;
    QFrame *frameBlank;

    void setupUi(QWidget *AmpSettingsForm)
    {
        if (AmpSettingsForm->objectName().isEmpty())
            AmpSettingsForm->setObjectName(QStringLiteral("AmpSettingsForm"));
        AmpSettingsForm->setWindowModality(Qt::NonModal);
        AmpSettingsForm->resize(590, 379);
        AmpSettingsForm->setMinimumSize(QSize(590, 379));
        AmpSettingsForm->setMaximumSize(QSize(590, 379));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(68);
        AmpSettingsForm->setFont(font);
        AmpSettingsForm->setStyleSheet(QLatin1String("QWidget{\n"
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
"#twController QHeaderView::section:vertical,\n"
"#twOscController QHeaderView::section:vertical,\n"
"#twCrossFadeController QHeaderView::section:vertical{\n"
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
"background-color : rgb(239, "
                        "159, 31);\n"
"}\n"
""));
        gridLayout_4 = new QGridLayout(AmpSettingsForm);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(AmpSettingsForm);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -367, 570, 746));
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frameLeft = new QFrame(scrollAreaWidgetContents);
        frameLeft->setObjectName(QStringLiteral("frameLeft"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameLeft->sizePolicy().hasHeightForWidth());
        frameLeft->setSizePolicy(sizePolicy);
        frameLeft->setMinimumSize(QSize(284, 746));
        frameLeft->setMaximumSize(QSize(284, 746));
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
        frameLeft->setPalette(palette);
        frameLeft->setStyleSheet(QStringLiteral(""));
        frameLeft->setFrameShape(QFrame::NoFrame);
        frameLeft->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frameLeft);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        twAmplitudeEnvelope = new QTableWidget(frameLeft);
        if (twAmplitudeEnvelope->columnCount() < 1)
            twAmplitudeEnvelope->setColumnCount(1);
        if (twAmplitudeEnvelope->rowCount() < 8)
            twAmplitudeEnvelope->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twAmplitudeEnvelope->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twAmplitudeEnvelope->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twAmplitudeEnvelope->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twAmplitudeEnvelope->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        twAmplitudeEnvelope->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        twAmplitudeEnvelope->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        twAmplitudeEnvelope->setVerticalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        twAmplitudeEnvelope->setVerticalHeaderItem(7, __qtablewidgetitem7);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setForeground(brush2);
        twAmplitudeEnvelope->setItem(0, 0, __qtablewidgetitem8);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setForeground(brush3);
        twAmplitudeEnvelope->setItem(1, 0, __qtablewidgetitem9);
        QBrush brush4(QColor(255, 255, 255, 255));
        brush4.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setForeground(brush4);
        twAmplitudeEnvelope->setItem(2, 0, __qtablewidgetitem10);
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setForeground(brush5);
        twAmplitudeEnvelope->setItem(3, 0, __qtablewidgetitem11);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setForeground(brush6);
        twAmplitudeEnvelope->setItem(4, 0, __qtablewidgetitem12);
        QBrush brush7(QColor(255, 255, 255, 255));
        brush7.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setForeground(brush7);
        twAmplitudeEnvelope->setItem(5, 0, __qtablewidgetitem13);
        QBrush brush8(QColor(255, 255, 255, 255));
        brush8.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setForeground(brush8);
        twAmplitudeEnvelope->setItem(6, 0, __qtablewidgetitem14);
        QBrush brush9(QColor(255, 255, 255, 255));
        brush9.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setForeground(brush9);
        twAmplitudeEnvelope->setItem(7, 0, __qtablewidgetitem15);
        twAmplitudeEnvelope->setObjectName(QStringLiteral("twAmplitudeEnvelope"));
        twAmplitudeEnvelope->setMinimumSize(QSize(0, 336));
        twAmplitudeEnvelope->setMaximumSize(QSize(16777215, 336));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(0, 0, 0, 0));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush11(QColor(0, 0, 0, 255));
        brush11.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        QBrush brush12(QColor(239, 159, 31, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush13(QColor(0, 0, 0, 255));
        brush13.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush14(QColor(0, 0, 0, 255));
        brush14.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush12);
        twAmplitudeEnvelope->setPalette(palette1);
        twAmplitudeEnvelope->setFont(font);
        twAmplitudeEnvelope->setStyleSheet(QStringLiteral(""));
        twAmplitudeEnvelope->setFrameShape(QFrame::NoFrame);
        twAmplitudeEnvelope->setEditTriggers(QAbstractItemView::EditKeyPressed);
        twAmplitudeEnvelope->setProperty("showDropIndicator", QVariant(false));
        twAmplitudeEnvelope->setSelectionMode(QAbstractItemView::SingleSelection);
        twAmplitudeEnvelope->setSelectionBehavior(QAbstractItemView::SelectRows);
        twAmplitudeEnvelope->setShowGrid(true);
        twAmplitudeEnvelope->setGridStyle(Qt::NoPen);
        twAmplitudeEnvelope->setColumnCount(1);
        twAmplitudeEnvelope->horizontalHeader()->setVisible(false);
        twAmplitudeEnvelope->horizontalHeader()->setDefaultSectionSize(30);
        twAmplitudeEnvelope->horizontalHeader()->setMinimumSectionSize(1);
        twAmplitudeEnvelope->horizontalHeader()->setStretchLastSection(true);
        twAmplitudeEnvelope->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_3->addWidget(twAmplitudeEnvelope, 3, 0, 1, 1);

        twControllerInfluence = new QTableWidget(frameLeft);
        if (twControllerInfluence->columnCount() < 1)
            twControllerInfluence->setColumnCount(1);
        if (twControllerInfluence->rowCount() < 4)
            twControllerInfluence->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        twControllerInfluence->setVerticalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        twControllerInfluence->setVerticalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        twControllerInfluence->setVerticalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        twControllerInfluence->setVerticalHeaderItem(3, __qtablewidgetitem19);
        twControllerInfluence->setObjectName(QStringLiteral("twControllerInfluence"));
        twControllerInfluence->setMinimumSize(QSize(0, 168));
        twControllerInfluence->setMaximumSize(QSize(16777215, 168));
        twControllerInfluence->setFont(font);
        twControllerInfluence->setStyleSheet(QStringLiteral(""));
        twControllerInfluence->setFrameShape(QFrame::NoFrame);
        twControllerInfluence->setSelectionMode(QAbstractItemView::SingleSelection);
        twControllerInfluence->setSelectionBehavior(QAbstractItemView::SelectRows);
        twControllerInfluence->setShowGrid(true);
        twControllerInfluence->setGridStyle(Qt::NoPen);
        twControllerInfluence->setColumnCount(1);
        twControllerInfluence->horizontalHeader()->setVisible(false);
        twControllerInfluence->horizontalHeader()->setStretchLastSection(true);
        twControllerInfluence->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_3->addWidget(twControllerInfluence, 5, 0, 1, 1);

        twAmplitudeBasic = new QTableWidget(frameLeft);
        if (twAmplitudeBasic->columnCount() < 1)
            twAmplitudeBasic->setColumnCount(1);
        if (twAmplitudeBasic->rowCount() < 3)
            twAmplitudeBasic->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        twAmplitudeBasic->setVerticalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        twAmplitudeBasic->setVerticalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        twAmplitudeBasic->setVerticalHeaderItem(2, __qtablewidgetitem22);
        twAmplitudeBasic->setObjectName(QStringLiteral("twAmplitudeBasic"));
        twAmplitudeBasic->setMinimumSize(QSize(0, 126));
        twAmplitudeBasic->setMaximumSize(QSize(16777215, 126));
        twAmplitudeBasic->setStyleSheet(QStringLiteral(""));
        twAmplitudeBasic->setEditTriggers(QAbstractItemView::EditKeyPressed);
        twAmplitudeBasic->setSelectionMode(QAbstractItemView::SingleSelection);
        twAmplitudeBasic->setSelectionBehavior(QAbstractItemView::SelectRows);
        twAmplitudeBasic->setGridStyle(Qt::NoPen);
        twAmplitudeBasic->setColumnCount(1);
        twAmplitudeBasic->horizontalHeader()->setVisible(false);
        twAmplitudeBasic->horizontalHeader()->setDefaultSectionSize(100);
        twAmplitudeBasic->horizontalHeader()->setStretchLastSection(true);
        twAmplitudeBasic->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_3->addWidget(twAmplitudeBasic, 1, 0, 1, 1);

        lbGeneralSettings = new QLabel(frameLeft);
        lbGeneralSettings->setObjectName(QStringLiteral("lbGeneralSettings"));
        lbGeneralSettings->setMinimumSize(QSize(0, 37));
        lbGeneralSettings->setMaximumSize(QSize(16777215, 37));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(68);
        lbGeneralSettings->setFont(font1);
        lbGeneralSettings->setStyleSheet(QStringLiteral(""));
        lbGeneralSettings->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbGeneralSettings, 0, 0, 1, 1);

        twController = new QTableWidget(frameLeft);
        if (twController->columnCount() < 1)
            twController->setColumnCount(1);
        if (twController->rowCount() < 1)
            twController->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        twController->setVerticalHeaderItem(0, __qtablewidgetitem23);
        twController->setObjectName(QStringLiteral("twController"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(twController->sizePolicy().hasHeightForWidth());
        twController->setSizePolicy(sizePolicy1);
        twController->setMinimumSize(QSize(0, 42));
        twController->setMaximumSize(QSize(16777215, 42));
        twController->setStyleSheet(QStringLiteral(""));
        twController->setEditTriggers(QAbstractItemView::EditKeyPressed);
        twController->setSelectionMode(QAbstractItemView::SingleSelection);
        twController->setSelectionBehavior(QAbstractItemView::SelectRows);
        twController->setGridStyle(Qt::NoPen);
        twController->setColumnCount(1);
        twController->horizontalHeader()->setVisible(false);
        twController->horizontalHeader()->setStretchLastSection(true);
        twController->verticalHeader()->setDefaultSectionSize(42);
        twController->verticalHeader()->setStretchLastSection(false);

        gridLayout_3->addWidget(twController, 4, 0, 1, 1);

        lbEnvelope = new QLabel(frameLeft);
        lbEnvelope->setObjectName(QStringLiteral("lbEnvelope"));
        lbEnvelope->setMinimumSize(QSize(0, 37));
        lbEnvelope->setMaximumSize(QSize(16777215, 37));
        lbEnvelope->setFont(font1);
        lbEnvelope->setStyleSheet(QStringLiteral(""));
        lbEnvelope->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbEnvelope, 2, 0, 1, 1);


        gridLayout->addWidget(frameLeft, 0, 0, 4, 1);

        lframeCrossfade = new QFrame(scrollAreaWidgetContents);
        lframeCrossfade->setObjectName(QStringLiteral("lframeCrossfade"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lframeCrossfade->sizePolicy().hasHeightForWidth());
        lframeCrossfade->setSizePolicy(sizePolicy2);
        lframeCrossfade->setMinimumSize(QSize(284, 331));
        lframeCrossfade->setMaximumSize(QSize(284, 331));
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
        lframeCrossfade->setPalette(palette2);
        lframeCrossfade->setStyleSheet(QStringLiteral(""));
        lframeCrossfade->setFrameShape(QFrame::StyledPanel);
        lframeCrossfade->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(lframeCrossfade);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        twCrossfade = new QTableWidget(lframeCrossfade);
        if (twCrossfade->columnCount() < 1)
            twCrossfade->setColumnCount(1);
        if (twCrossfade->rowCount() < 6)
            twCrossfade->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        twCrossfade->setVerticalHeaderItem(0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        twCrossfade->setVerticalHeaderItem(1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        twCrossfade->setVerticalHeaderItem(2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        twCrossfade->setVerticalHeaderItem(3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        twCrossfade->setVerticalHeaderItem(4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        twCrossfade->setVerticalHeaderItem(5, __qtablewidgetitem29);
        twCrossfade->setObjectName(QStringLiteral("twCrossfade"));
        twCrossfade->setMinimumSize(QSize(0, 252));
        twCrossfade->setMaximumSize(QSize(16777215, 252));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush15(QColor(0, 0, 0, 255));
        brush15.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush15);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush16(QColor(0, 0, 0, 255));
        brush16.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush17(QColor(0, 0, 0, 255));
        brush17.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush12);
        twCrossfade->setPalette(palette3);
        twCrossfade->setFont(font);
        twCrossfade->setFrameShape(QFrame::NoFrame);
        twCrossfade->setSelectionMode(QAbstractItemView::SingleSelection);
        twCrossfade->setSelectionBehavior(QAbstractItemView::SelectRows);
        twCrossfade->setShowGrid(true);
        twCrossfade->setGridStyle(Qt::NoPen);
        twCrossfade->setColumnCount(1);
        twCrossfade->horizontalHeader()->setVisible(false);
        twCrossfade->horizontalHeader()->setDefaultSectionSize(42);
        twCrossfade->horizontalHeader()->setMinimumSectionSize(0);
        twCrossfade->horizontalHeader()->setStretchLastSection(true);
        twCrossfade->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_5->addWidget(twCrossfade, 2, 0, 1, 1);

        twCrossFadeController = new QTableWidget(lframeCrossfade);
        if (twCrossFadeController->columnCount() < 1)
            twCrossFadeController->setColumnCount(1);
        if (twCrossFadeController->rowCount() < 1)
            twCrossFadeController->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        twCrossFadeController->setVerticalHeaderItem(0, __qtablewidgetitem30);
        twCrossFadeController->setObjectName(QStringLiteral("twCrossFadeController"));
        twCrossFadeController->setMinimumSize(QSize(0, 42));
        twCrossFadeController->setMaximumSize(QSize(16777215, 42));
        twCrossFadeController->setStyleSheet(QStringLiteral(""));
        twCrossFadeController->setFrameShape(QFrame::NoFrame);
        twCrossFadeController->setAutoScrollMargin(0);
        twCrossFadeController->setSelectionMode(QAbstractItemView::SingleSelection);
        twCrossFadeController->setSelectionBehavior(QAbstractItemView::SelectRows);
        twCrossFadeController->setGridStyle(Qt::NoPen);
        twCrossFadeController->setColumnCount(1);
        twCrossFadeController->horizontalHeader()->setVisible(false);
        twCrossFadeController->horizontalHeader()->setStretchLastSection(true);
        twCrossFadeController->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_5->addWidget(twCrossFadeController, 1, 0, 1, 1);

        lbCrossfade = new QLabel(lframeCrossfade);
        lbCrossfade->setObjectName(QStringLiteral("lbCrossfade"));
        lbCrossfade->setMinimumSize(QSize(0, 37));
        lbCrossfade->setMaximumSize(QSize(16777215, 37));
        lbCrossfade->setFont(font1);
        lbCrossfade->setStyleSheet(QStringLiteral(""));
        lbCrossfade->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lbCrossfade, 0, 0, 1, 1);


        gridLayout->addWidget(lframeCrossfade, 2, 1, 1, 1);

        frameOscillator = new QFrame(scrollAreaWidgetContents);
        frameOscillator->setObjectName(QStringLiteral("frameOscillator"));
        sizePolicy.setHeightForWidth(frameOscillator->sizePolicy().hasHeightForWidth());
        frameOscillator->setSizePolicy(sizePolicy);
        frameOscillator->setMinimumSize(QSize(284, 289));
        frameOscillator->setMaximumSize(QSize(284, 289));
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
        frameOscillator->setPalette(palette4);
        frameOscillator->setStyleSheet(QStringLiteral(""));
        frameOscillator->setFrameShape(QFrame::NoFrame);
        frameOscillator->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frameOscillator);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        twAmpOscillator = new QTableWidget(frameOscillator);
        if (twAmpOscillator->columnCount() < 1)
            twAmpOscillator->setColumnCount(1);
        if (twAmpOscillator->rowCount() < 3)
            twAmpOscillator->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        twAmpOscillator->setVerticalHeaderItem(0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        twAmpOscillator->setVerticalHeaderItem(1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        twAmpOscillator->setVerticalHeaderItem(2, __qtablewidgetitem33);
        twAmpOscillator->setObjectName(QStringLiteral("twAmpOscillator"));
        twAmpOscillator->setMinimumSize(QSize(0, 126));
        twAmpOscillator->setMaximumSize(QSize(16777215, 126));
        twAmpOscillator->setFont(font);
        twAmpOscillator->setStyleSheet(QStringLiteral(""));
        twAmpOscillator->setFrameShape(QFrame::NoFrame);
        twAmpOscillator->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twAmpOscillator->setProperty("showDropIndicator", QVariant(false));
        twAmpOscillator->setAlternatingRowColors(false);
        twAmpOscillator->setSelectionMode(QAbstractItemView::SingleSelection);
        twAmpOscillator->setSelectionBehavior(QAbstractItemView::SelectRows);
        twAmpOscillator->setShowGrid(true);
        twAmpOscillator->setGridStyle(Qt::NoPen);
        twAmpOscillator->setColumnCount(1);
        twAmpOscillator->horizontalHeader()->setVisible(false);
        twAmpOscillator->horizontalHeader()->setDefaultSectionSize(42);
        twAmpOscillator->horizontalHeader()->setMinimumSectionSize(1);
        twAmpOscillator->horizontalHeader()->setStretchLastSection(true);
        twAmpOscillator->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_2->addWidget(twAmpOscillator, 1, 0, 1, 1);

        lbOscillator = new QLabel(frameOscillator);
        lbOscillator->setObjectName(QStringLiteral("lbOscillator"));
        lbOscillator->setMinimumSize(QSize(0, 37));
        lbOscillator->setMaximumSize(QSize(16777215, 37));
        lbOscillator->setFont(font1);
        lbOscillator->setStyleSheet(QStringLiteral(""));
        lbOscillator->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lbOscillator, 0, 0, 1, 1);

        twAmpOscillator2 = new QTableWidget(frameOscillator);
        if (twAmpOscillator2->columnCount() < 1)
            twAmpOscillator2->setColumnCount(1);
        if (twAmpOscillator2->rowCount() < 2)
            twAmpOscillator2->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        twAmpOscillator2->setVerticalHeaderItem(0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        twAmpOscillator2->setVerticalHeaderItem(1, __qtablewidgetitem35);
        twAmpOscillator2->setObjectName(QStringLiteral("twAmpOscillator2"));
        twAmpOscillator2->setMinimumSize(QSize(0, 84));
        twAmpOscillator2->setMaximumSize(QSize(16777215, 84));
        twAmpOscillator2->setStyleSheet(QStringLiteral(""));
        twAmpOscillator2->setFrameShape(QFrame::NoFrame);
        twAmpOscillator2->setSelectionMode(QAbstractItemView::SingleSelection);
        twAmpOscillator2->setSelectionBehavior(QAbstractItemView::SelectRows);
        twAmpOscillator2->setShowGrid(true);
        twAmpOscillator2->setGridStyle(Qt::NoPen);
        twAmpOscillator2->setRowCount(2);
        twAmpOscillator2->setColumnCount(1);
        twAmpOscillator2->horizontalHeader()->setVisible(false);
        twAmpOscillator2->horizontalHeader()->setStretchLastSection(true);
        twAmpOscillator2->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_2->addWidget(twAmpOscillator2, 3, 0, 1, 1);

        twOscController = new QTableWidget(frameOscillator);
        if (twOscController->columnCount() < 1)
            twOscController->setColumnCount(1);
        if (twOscController->rowCount() < 1)
            twOscController->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        twOscController->setVerticalHeaderItem(0, __qtablewidgetitem36);
        twOscController->setObjectName(QStringLiteral("twOscController"));
        sizePolicy.setHeightForWidth(twOscController->sizePolicy().hasHeightForWidth());
        twOscController->setSizePolicy(sizePolicy);
        twOscController->setMinimumSize(QSize(0, 42));
        twOscController->setMaximumSize(QSize(16777215, 42));
        twOscController->setStyleSheet(QStringLiteral(""));
        twOscController->setFrameShape(QFrame::NoFrame);
        twOscController->setAutoScrollMargin(0);
        twOscController->setProperty("showDropIndicator", QVariant(true));
        twOscController->setSelectionMode(QAbstractItemView::SingleSelection);
        twOscController->setSelectionBehavior(QAbstractItemView::SelectRows);
        twOscController->setGridStyle(Qt::NoPen);
        twOscController->setColumnCount(1);
        twOscController->horizontalHeader()->setVisible(false);
        twOscController->horizontalHeader()->setStretchLastSection(true);
        twOscController->verticalHeader()->setDefaultSectionSize(42);

        gridLayout_2->addWidget(twOscController, 2, 0, 1, 1);


        gridLayout->addWidget(frameOscillator, 1, 1, 1, 1);

        frameBlank = new QFrame(scrollAreaWidgetContents);
        frameBlank->setObjectName(QStringLiteral("frameBlank"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frameBlank->sizePolicy().hasHeightForWidth());
        frameBlank->setSizePolicy(sizePolicy3);
        frameBlank->setMinimumSize(QSize(0, 0));
        frameBlank->setStyleSheet(QStringLiteral(""));
        frameBlank->setFrameShape(QFrame::NoFrame);
        frameBlank->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frameBlank, 3, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 0, 0, 1, 1);

        QWidget::setTabOrder(scrollArea, twAmplitudeBasic);
        QWidget::setTabOrder(twAmplitudeBasic, twAmplitudeEnvelope);
        QWidget::setTabOrder(twAmplitudeEnvelope, twController);
        QWidget::setTabOrder(twController, twControllerInfluence);

        retranslateUi(AmpSettingsForm);

        QMetaObject::connectSlotsByName(AmpSettingsForm);
    } // setupUi

    void retranslateUi(QWidget *AmpSettingsForm)
    {
        AmpSettingsForm->setWindowTitle(QApplication::translate("AmpSettingsForm", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = twAmplitudeEnvelope->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AmpSettingsForm", "Pre-attack Level (%)", 0));
        QTableWidgetItem *___qtablewidgetitem1 = twAmplitudeEnvelope->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AmpSettingsForm", "Attack Time (seconds)", 0));
        QTableWidgetItem *___qtablewidgetitem2 = twAmplitudeEnvelope->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("AmpSettingsForm", "Hold Attack Stage", 0));
        QTableWidgetItem *___qtablewidgetitem3 = twAmplitudeEnvelope->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("AmpSettingsForm", "Decay 1 Time (seconds)", 0));
        QTableWidgetItem *___qtablewidgetitem4 = twAmplitudeEnvelope->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("AmpSettingsForm", "Decay 2 Time (seconds)", 0));
        QTableWidgetItem *___qtablewidgetitem5 = twAmplitudeEnvelope->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("AmpSettingsForm", "Infinite Sustain", 0));
        QTableWidgetItem *___qtablewidgetitem6 = twAmplitudeEnvelope->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("AmpSettingsForm", "Sustain Level (%)", 0));
        QTableWidgetItem *___qtablewidgetitem7 = twAmplitudeEnvelope->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("AmpSettingsForm", "Release Time (seconds)", 0));

        const bool __sortingEnabled = twAmplitudeEnvelope->isSortingEnabled();
        twAmplitudeEnvelope->setSortingEnabled(false);
        twAmplitudeEnvelope->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem8 = twControllerInfluence->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("AmpSettingsForm", "Ctrler Invert", 0));
        QTableWidgetItem *___qtablewidgetitem9 = twControllerInfluence->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("AmpSettingsForm", "Ctrler Attack Influence", 0));
        QTableWidgetItem *___qtablewidgetitem10 = twControllerInfluence->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("AmpSettingsForm", "Ctrler Decay Influence", 0));
        QTableWidgetItem *___qtablewidgetitem11 = twControllerInfluence->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("AmpSettingsForm", "Ctrler Release Influence", 0));
        QTableWidgetItem *___qtablewidgetitem12 = twAmplitudeBasic->verticalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("AmpSettingsForm", "Gain", 0));
        QTableWidgetItem *___qtablewidgetitem13 = twAmplitudeBasic->verticalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("AmpSettingsForm", "Gain +6dB", 0));
        QTableWidgetItem *___qtablewidgetitem14 = twAmplitudeBasic->verticalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("AmpSettingsForm", "Pan", 0));
        lbGeneralSettings->setText(QApplication::translate("AmpSettingsForm", "General Amplitude Settings", 0));
        QTableWidgetItem *___qtablewidgetitem15 = twController->verticalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("AmpSettingsForm", "Ctrler", 0));
        lbEnvelope->setText(QApplication::translate("AmpSettingsForm", "Amplitude Envelope (EG1)", 0));
        QTableWidgetItem *___qtablewidgetitem16 = twCrossfade->verticalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("AmpSettingsForm", "Invert Atten. Ctrler", 0));
        QTableWidgetItem *___qtablewidgetitem17 = twCrossfade->verticalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("AmpSettingsForm", "Atten. Ctrler Threshold", 0));
        QTableWidgetItem *___qtablewidgetitem18 = twCrossfade->verticalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("AmpSettingsForm", "Crossfade-in Start", 0));
        QTableWidgetItem *___qtablewidgetitem19 = twCrossfade->verticalHeaderItem(3);
        ___qtablewidgetitem19->setText(QApplication::translate("AmpSettingsForm", "Crossfade-in End", 0));
        QTableWidgetItem *___qtablewidgetitem20 = twCrossfade->verticalHeaderItem(4);
        ___qtablewidgetitem20->setText(QApplication::translate("AmpSettingsForm", "Crossfade-out Start", 0));
        QTableWidgetItem *___qtablewidgetitem21 = twCrossfade->verticalHeaderItem(5);
        ___qtablewidgetitem21->setText(QApplication::translate("AmpSettingsForm", "Crossfade-out End", 0));
        QTableWidgetItem *___qtablewidgetitem22 = twCrossFadeController->verticalHeaderItem(0);
        ___qtablewidgetitem22->setText(QApplication::translate("AmpSettingsForm", "Atten. Ctrler", 0));
        lbCrossfade->setText(QApplication::translate("AmpSettingsForm", "Crossfade", 0));
        QTableWidgetItem *___qtablewidgetitem23 = twAmpOscillator->verticalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("AmpSettingsForm", "Frequency", 0));
        QTableWidgetItem *___qtablewidgetitem24 = twAmpOscillator->verticalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("AmpSettingsForm", "internal Depth", 0));
        QTableWidgetItem *___qtablewidgetitem25 = twAmpOscillator->verticalHeaderItem(2);
        ___qtablewidgetitem25->setText(QApplication::translate("AmpSettingsForm", "Control Depth", 0));
        lbOscillator->setText(QApplication::translate("AmpSettingsForm", "Amplitude Oscillator", 0));
        QTableWidgetItem *___qtablewidgetitem26 = twAmpOscillator2->verticalHeaderItem(0);
        ___qtablewidgetitem26->setText(QApplication::translate("AmpSettingsForm", "Flip Phase", 0));
        QTableWidgetItem *___qtablewidgetitem27 = twAmpOscillator2->verticalHeaderItem(1);
        ___qtablewidgetitem27->setText(QApplication::translate("AmpSettingsForm", "Sync", 0));
        QTableWidgetItem *___qtablewidgetitem28 = twOscController->verticalHeaderItem(0);
        ___qtablewidgetitem28->setText(QApplication::translate("AmpSettingsForm", "Ctrler", 0));
    } // retranslateUi

};

namespace Ui {
    class AmpSettingsForm: public Ui_AmpSettingsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPSETTINGSFORM_H
