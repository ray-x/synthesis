#include "filtersettingsform.h"
#include "ui_filtersettingsform.h"

#include <QFile>
#include <QDebug>
#include <QTableWidgetItem>
#include <QListView>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QScrollBar>

FilterSettingsForm::FilterSettingsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FilterSettingsForm)
{
    ui->setupUi(this);

    // Create the widgets to be put in table widget
    m_cbFilterType = new QComboBox(this);
    m_cbFilterType->addItem("lowpass");
    m_cbFilterType->addItem("lowpassTurbo");
    m_cbFilterType->addItem("bandpass");
    m_cbFilterType->addItem("highpass");
    m_cbFilterType->addItem("bandreject");
    m_cbFilterType->installEventFilter(this);

    m_cbCutoffController = new QComboBox(this);
    m_cbCutoffController->addItem("none");
    m_cbCutoffController->addItem("none2");
    m_cbCutoffController->addItem("modWheel");
    m_cbCutoffController->addItem("effect1");
    m_cbCutoffController->addItem("effect2");
    m_cbCutoffController->addItem("breath");
    m_cbCutoffController->addItem("foor");
    m_cbCutoffController->addItem("sustainpedal");
    m_cbCutoffController->addItem("softpedal");
    m_cbCutoffController->addItem("genpurpose7");
    m_cbCutoffController->addItem("genpurpose8");
    m_cbCutoffController->addItem("aftertouch");
    m_cbCutoffController->installEventFilter(this);

    m_ckbCutoffCtrlInvert = new QCheckBox(this);
    m_ckbCutoffCtrlInvert->installEventFilter(this);

    m_sbCutoff = new QSpinBox(this);
    m_sbCutoff->setMaximum(127);
    m_sbCutoff->setMinimum(0);
    m_sbCutoff->setAlignment(Qt::AlignHCenter);
    m_sbCutoff->installEventFilter(this);
    m_sbCutoff->children().at(0)->installEventFilter(this);

    m_cbVelocityCurve = new QComboBox(this);
    m_cbVelocityCurve->addItem("nonlinear");
    m_cbVelocityCurve->addItem("linear");
    m_cbVelocityCurve->addItem("special");
    m_cbVelocityCurve->installEventFilter(this);

    m_sbVelocityScale = new QSpinBox(this);
    m_sbVelocityScale->setMaximum(127);
    m_sbVelocityScale->setMinimum(0);
    m_sbVelocityScale->setAlignment(Qt::AlignHCenter);
    m_sbVelocityScale->installEventFilter(this);
    m_sbVelocityScale->children().at(0)->installEventFilter(this);

    m_sbVelocityDynRange = new QSpinBox(this);
    m_sbVelocityDynRange->setMaximum(4);
    m_sbVelocityDynRange->setMinimum(0);
    m_sbVelocityDynRange->setAlignment(Qt::AlignHCenter);
    m_sbVelocityDynRange->installEventFilter(this);
    m_sbVelocityDynRange->children().at(0)->installEventFilter(this);

    m_sbResonance = new QSpinBox(this);
    m_sbResonance->setMaximum(127);
    m_sbResonance->setMinimum(0);
    m_sbResonance->setAlignment(Qt::AlignHCenter);
    m_sbResonance->installEventFilter(this);
    m_sbResonance->children().at(0)->installEventFilter(this);

    m_ckbResonanceDyn = new QCheckBox(this);
    m_ckbResonanceDyn->installEventFilter(this);

    m_cbResonanceCtrl = new QComboBox(this);
    m_cbResonanceCtrl->addItem("none");
    m_cbResonanceCtrl->addItem("genpurpose3");
    m_cbResonanceCtrl->addItem("genpurpose4");
    m_cbResonanceCtrl->addItem("genpurpose5");
    m_cbResonanceCtrl->addItem("genpurpose6");
    m_cbResonanceCtrl->installEventFilter(this);

    m_ckbKbdTrack = new QCheckBox(this);
    m_ckbKbdTrack->installEventFilter(this);

    m_sbKbdTrackBreakpt = new QSpinBox(this);
    m_sbKbdTrackBreakpt->setMaximum(127);
    m_sbKbdTrackBreakpt->setMinimum(0);
    m_sbKbdTrackBreakpt->setAlignment(Qt::AlignHCenter);
    m_sbKbdTrackBreakpt->installEventFilter(this);
    m_sbKbdTrackBreakpt->children().at(0)->installEventFilter(this);

    m_dsbPreAttackLevel = new QDoubleSpinBox(this);
    m_dsbPreAttackLevel->setMaximum(100.00);
    m_dsbPreAttackLevel->setMinimum(0.00);
    m_dsbPreAttackLevel->setDecimals(2);
    m_dsbPreAttackLevel->setAlignment(Qt::AlignHCenter);
    m_dsbPreAttackLevel->installEventFilter(this);
    m_dsbPreAttackLevel->children().at(0)->installEventFilter(this);

    m_dspAttackTime = new QDoubleSpinBox(this);
    m_dspAttackTime->setMaximum(60.000);
    m_dspAttackTime->setMinimum(0.000);
    m_dspAttackTime->setDecimals(3);
    m_dspAttackTime->setAlignment(Qt::AlignHCenter);
    m_dspAttackTime->installEventFilter(this);
    m_dspAttackTime->children().at(0)->installEventFilter(this);

    m_dspDecayTime1 = new QDoubleSpinBox(this);
    m_dspDecayTime1->setMaximum(60.000);
    m_dspDecayTime1->setMinimum(0.000);
    m_dspDecayTime1->setDecimals(3);
    m_dspDecayTime1->setAlignment(Qt::AlignHCenter);
    m_dspDecayTime1->installEventFilter(this);
    m_dspDecayTime1->children().at(0)->installEventFilter(this);

    m_dspDecayTime2 = new QDoubleSpinBox(this);
    m_dspDecayTime2->setMaximum(60.000);
    m_dspDecayTime2->setMinimum(0.000);
    m_dspDecayTime2->setDecimals(3);
    m_dspDecayTime2->setAlignment(Qt::AlignHCenter);
    m_dspDecayTime2->installEventFilter(this);
    m_dspDecayTime2->children().at(0)->installEventFilter(this);

    m_ckbInfiniteSustain = new QCheckBox(this);
    m_ckbInfiniteSustain->installEventFilter(this);

    m_dspSustainLevel = new QDoubleSpinBox(this);
    m_dspSustainLevel->setMaximum(100.00);
    m_dspSustainLevel->setMinimum(0.00);
    m_dspSustainLevel->setDecimals(2);
    m_dspSustainLevel->setAlignment(Qt::AlignHCenter);
    m_dspSustainLevel->installEventFilter(this);
    m_dspSustainLevel->children().at(0)->installEventFilter(this);

    m_dspReleaseTime = new QDoubleSpinBox(this);
    m_dspReleaseTime->setMaximum(60.000);
    m_dspReleaseTime->setMinimum(0.000);
    m_dspReleaseTime->setDecimals(3);
    m_dspReleaseTime->setAlignment(Qt::AlignHCenter);
    m_dspReleaseTime->installEventFilter(this);
    m_dspReleaseTime->children().at(0)->installEventFilter(this);

    m_cbEGController = new QComboBox(this);
    m_cbEGController->addItem("None");
    m_cbEGController->addItem("Channelaftertouch");
    m_cbEGController->addItem("Velocity");
    m_cbEGController->addItem("CC1: Modwheel");
    m_cbEGController->addItem("CC2: Breath");
    m_cbEGController->addItem("CC3: Undefined [EXT]");
    m_cbEGController->addItem("CC4: Foot");
    m_cbEGController->addItem("CC5: Portamentotime");
    m_cbEGController->addItem("CC6: Data Entry MSB");
    m_cbEGController->addItem("CC7: Volume");
    m_cbEGController->addItem("CC8: Balance");
    m_cbEGController->addItem("CC9: Undefined");
    m_cbEGController->installEventFilter(this);

    m_ckbControllerInvert = new QCheckBox(this);
    m_ckbControllerInvert->installEventFilter(this);

    m_sbCtrlAttackInfluence = new QSpinBox(this);
    m_sbCtrlAttackInfluence->setMaximum(3);
    m_sbCtrlAttackInfluence->setMinimum(0);
    m_sbCtrlAttackInfluence->setAlignment(Qt::AlignHCenter);
    m_sbCtrlAttackInfluence->installEventFilter(this);
    m_sbCtrlAttackInfluence->children().at(0)->installEventFilter(this);

    m_sbCtrlDecayInfluence = new QSpinBox(this);
    m_sbCtrlDecayInfluence->setMaximum(3);
    m_sbCtrlDecayInfluence->setMinimum(0);
    m_sbCtrlDecayInfluence->setAlignment(Qt::AlignHCenter);
    m_sbCtrlDecayInfluence->installEventFilter(this);
    m_sbCtrlDecayInfluence->children().at(0)->installEventFilter(this);

    m_sbCtrlReleaseInfluence = new QSpinBox(this);
    m_sbCtrlReleaseInfluence->setMaximum(3);
    m_sbCtrlReleaseInfluence->setMinimum(0);
    m_sbCtrlReleaseInfluence->setAlignment(Qt::AlignHCenter);
    m_sbCtrlReleaseInfluence->installEventFilter(this);
    m_sbCtrlReleaseInfluence->children().at(0)->installEventFilter(this);

    m_dsbFrequency = new QDoubleSpinBox(this);
    m_dsbFrequency->setMaximum(10.00);
    m_dsbFrequency->setMinimum(0.10);
    m_dsbFrequency->setDecimals(2);
    m_dsbFrequency->setAlignment(Qt::AlignHCenter);
    m_dsbFrequency->installEventFilter(this);
    m_dsbFrequency->children().at(0)->installEventFilter(this);

    m_sbInternalDepth = new QSpinBox(this);
    m_sbInternalDepth->setMaximum(1200);
    m_sbInternalDepth->setMinimum(0);
    m_sbInternalDepth->setAlignment(Qt::AlignHCenter);
    m_sbInternalDepth->installEventFilter(this);
    m_sbInternalDepth->children().at(0)->installEventFilter(this);

    m_sbControlDepth = new QSpinBox(this);
    m_sbControlDepth->setMaximum(1200);
    m_sbControlDepth->setMinimum(0);
    m_sbControlDepth->setAlignment(Qt::AlignHCenter);
    m_sbControlDepth->installEventFilter(this);
    m_sbControlDepth->children().at(0)->installEventFilter(this);

    m_cbLFOController = new QComboBox(this);
    m_cbLFOController->addItem("Internal");
    m_cbLFOController->addItem("Modwheel");
    m_cbLFOController->addItem("AfterTouch");
    m_cbLFOController->addItem("Internal+Modwheel");
    m_cbLFOController->addItem("Internal+Aftertouch");
    m_cbLFOController->installEventFilter(this);

    m_ckbFlipPhase = new QCheckBox(this);
    m_ckbFlipPhase->installEventFilter(this);

    m_ckbSync = new QCheckBox(this);
    m_ckbSync->installEventFilter(this);

    // add widgets to table widget
    ui->twTypeController->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twTypeController->verticalHeader()->setDefaultSectionSize(42);
    ui->twTypeController->setCellWidget(0,0,m_cbFilterType);
    ui->twTypeController->setCellWidget(1,0,m_cbCutoffController);
    ui->twTypeController->verticalHeader()->viewport()->installEventFilter(this);

    ui->twFilterSettings1->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twFilterSettings1->verticalHeader()->setDefaultSectionSize(42);
    ui->twFilterSettings1->setCellWidget(0,0,m_ckbCutoffCtrlInvert);
    ui->twFilterSettings1->setCellWidget(1,0,m_sbCutoff);
    ui->twFilterSettings1->verticalHeader()->viewport()->installEventFilter(this);

    ui->twVelocityCurve->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twVelocityCurve->verticalHeader()->setDefaultSectionSize(42);
    ui->twVelocityCurve->setCellWidget(0,0,m_cbVelocityCurve);
    ui->twVelocityCurve->verticalHeader()->viewport()->installEventFilter(this);

    ui->twFilterSettings2->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twFilterSettings2->verticalHeader()->setDefaultSectionSize(42);
    ui->twFilterSettings2->setCellWidget(0,0,m_sbVelocityScale);
    ui->twFilterSettings2->setCellWidget(1,0,m_sbVelocityDynRange);
    ui->twFilterSettings2->setCellWidget(2,0,m_sbResonance);
    ui->twFilterSettings2->setCellWidget(3,0,m_ckbResonanceDyn);
    ui->twFilterSettings2->verticalHeader()->viewport()->installEventFilter(this);

    ui->twResController->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twResController->verticalHeader()->setDefaultSectionSize(42);
    ui->twResController->setCellWidget(0,0,m_cbResonanceCtrl);
    ui->twResController->verticalHeader()->viewport()->installEventFilter(this);

    ui->twKeyboard->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twKeyboard->verticalHeader()->setDefaultSectionSize(42);
    ui->twKeyboard->setCellWidget(0,0,m_ckbKbdTrack);
    ui->twKeyboard->setCellWidget(1,0,m_sbKbdTrackBreakpt);
    ui->twKeyboard->verticalHeader()->viewport()->installEventFilter(this);

    // add widgets to table widget
    ui->twFilterEG->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twFilterEG->verticalHeader()->setDefaultSectionSize(42);
    ui->twFilterEG->setCellWidget(0,0,m_dsbPreAttackLevel);
    ui->twFilterEG->setCellWidget(1,0,m_dspAttackTime);
    ui->twFilterEG->setCellWidget(2,0,m_dspDecayTime1);
    ui->twFilterEG->setCellWidget(3,0,m_dspDecayTime2);
    ui->twFilterEG->setCellWidget(4,0,m_ckbInfiniteSustain);
    ui->twFilterEG->setCellWidget(5,0,m_dspSustainLevel);
    ui->twFilterEG->setCellWidget(6,0,m_dspReleaseTime);
    ui->twFilterEG->verticalHeader()->viewport()->installEventFilter(this);

    ui->twEGController->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twEGController->verticalHeader()->setDefaultSectionSize(42);
    ui->twEGController->setCellWidget(0,0,m_cbEGController);
    ui->twEGController->verticalHeader()->viewport()->installEventFilter(this);

    ui->twControllerSettings->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twControllerSettings->verticalHeader()->setDefaultSectionSize(42);
    ui->twControllerSettings->setCellWidget(0,0,m_ckbControllerInvert);
    ui->twControllerSettings->setCellWidget(1,0,m_sbCtrlAttackInfluence);
    ui->twControllerSettings->setCellWidget(2,0,m_sbCtrlDecayInfluence);
    ui->twControllerSettings->setCellWidget(3,0,m_sbCtrlReleaseInfluence);
    ui->twControllerSettings->verticalHeader()->viewport()->installEventFilter(this);

    // add widgets to table widget
    ui->twFilterLFO1->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twFilterLFO1->verticalHeader()->setDefaultSectionSize(42);
    ui->twFilterLFO1->setCellWidget(0,0,m_dsbFrequency);
    ui->twFilterLFO1->setCellWidget(1,0,m_sbInternalDepth);
    ui->twFilterLFO1->setCellWidget(2,0,m_sbControlDepth);
    ui->twFilterLFO1->verticalHeader()->viewport()->installEventFilter(this);

    ui->twLFOController->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twLFOController->verticalHeader()->setDefaultSectionSize(42);
    ui->twLFOController->setCellWidget(0,0,m_cbLFOController);
    ui->twLFOController->verticalHeader()->viewport()->installEventFilter(this);

    ui->twFilterLFO2->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twFilterLFO2->verticalHeader()->setDefaultSectionSize(42);
    ui->twFilterLFO2->setCellWidget(0,0,m_ckbFlipPhase);
    ui->twFilterLFO2->setCellWidget(1,0,m_ckbSync);
    ui->twFilterLFO2->verticalHeader()->viewport()->installEventFilter(this);

    ui->scrollArea->verticalScrollBar()->installEventFilter(this);
    ui->frameBlank->installEventFilter(this);

}

FilterSettingsForm::~FilterSettingsForm()
{
    delete ui;
}

void FilterSettingsForm::clearTableSelection()
{
    ui->twTypeController->selectionModel()->clearSelection();
    ui->twFilterSettings1->selectionModel()->clearSelection();
    ui->twVelocityCurve->selectionModel()->clearSelection();
    ui->twFilterSettings2->selectionModel()->clearSelection();
    ui->twResController->selectionModel()->clearSelection();
    ui->twKeyboard->selectionModel()->clearSelection();
    ui->twFilterLFO1->selectionModel()->clearSelection();
    ui->twLFOController->selectionModel()->clearSelection();
    ui->twFilterLFO2->selectionModel()->clearSelection();
    ui->twFilterEG->selectionModel()->clearSelection();
    ui->twEGController->selectionModel()->clearSelection();
    ui->twControllerSettings->selectionModel()->clearSelection();
}

bool FilterSettingsForm::eventFilter(QObject *obj, QEvent *event)
{
    if(event->type() == QEvent::KeyPress){
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        switch(keyEvent->key()){
        case Qt::Key_Tab: {

            clearTableSelection();

            int row = 0;
            int yRow = 0;

            //  move the scrollbar
            if(obj->parent() == ui->twTypeController->children().at(0)){
                ui->scrollArea->verticalScrollBar()->setValue(0);

            }else if(obj->parent() == ui->twFilterSettings1->children().at(0)){
                row = getRow(ui->twFilterSettings1, obj);
                yRow = (ui->twTypeController->rowCount()+row+1)*42 + 37*2;
                if(yRow < ui->scrollArea->verticalScrollBar()->value() ||
                        yRow > ui->scrollArea->verticalScrollBar()->value()+ui->scrollArea->height() - 42)
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value() + 42);

            }else if(obj->parent() == ui->twVelocityCurve->children().at(0)){
                yRow = (ui->twTypeController->rowCount()+
                        ui->twFilterSettings1->rowCount() +1)*42
                        + 37;
                if(yRow > ui->scrollArea->verticalScrollBar()->value() + ui->scrollArea->height() - 42)
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value()+42);

            }else if(obj->parent() == ui->twFilterSettings2->children().at(0)){
                row = getRow(ui->twFilterSettings2, obj);
                yRow = (ui->twTypeController->rowCount() +
                        ui->twFilterSettings1->rowCount() +
                        ui->twVelocityCurve->rowCount() + row+1)*42 +
                        37;
                if(yRow < ui->scrollArea->verticalScrollBar()->value() ||
                        yRow > ui->scrollArea->verticalScrollBar()->value()+ui->scrollArea->height() - 42)
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value() + 42);

            }else if(obj->parent() == ui->twResController->children().at(0)){
                yRow = (ui->twTypeController->rowCount() +
                        ui->twFilterSettings1->rowCount() +
                        ui->twVelocityCurve->rowCount() +
                        ui->twFilterSettings2->rowCount() + row+1)*42 +
                        37;

                if(yRow > ui->scrollArea->verticalScrollBar()->value() + ui->scrollArea->height() - 42)
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value() + 42);

            }else if(obj->parent() == ui->twKeyboard->children().at(0)){
                row = getRow(ui->twKeyboard, obj);
                yRow = (ui->twTypeController->rowCount() +
                        ui->twFilterSettings1->rowCount() +
                        ui->twVelocityCurve->rowCount() +
                        ui->twFilterSettings2->rowCount() +
                        ui->twResController->rowCount() + row+1)*42 +
                        37;
                if(yRow < ui->scrollArea->verticalScrollBar()->value()||
                        yRow > ui->scrollArea->verticalScrollBar()->value()+ui->scrollArea->height() - 42){
                    if(ui->twKeyboard->cellWidget(0,0) == obj){
                        ui->scrollArea->verticalScrollBar()->setValue(
                                    ui->scrollArea->verticalScrollBar()->value() + 42);
                    }else{
                        ui->scrollArea->verticalScrollBar()->setValue(
                                    ui->scrollArea->verticalScrollBar()->value() + 42+37);
                    }
                }
            }else if(obj->parent() == ui->twFilterLFO1->children().at(0)){
                row = getRow(ui->twFilterLFO1, obj);
                yRow = (ui->twTypeController->rowCount() +
                        ui->twFilterSettings1->rowCount() +
                        ui->twVelocityCurve->rowCount() +
                        ui->twFilterSettings2->rowCount() +
                        ui->twResController->rowCount() +
                        ui->twKeyboard->rowCount() + row+1)*42 +
                        37*2;
                if(yRow < ui->scrollArea->verticalScrollBar()->value() ||
                        yRow > ui->scrollArea->verticalScrollBar()->value()+ui->scrollArea->height() - 42)
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value() + 42);
            }else if(obj->parent() == ui->twLFOController->children().at(0)){
                yRow = (ui->twTypeController->rowCount() +
                        ui->twFilterSettings1->rowCount() +
                        ui->twVelocityCurve->rowCount() +
                        ui->twFilterSettings2->rowCount() +
                        ui->twResController->rowCount() +
                        ui->twKeyboard->rowCount() +
                        ui->twFilterLFO1->rowCount() + 1)*42 +
                        37*2;
                if(yRow < ui->scrollArea->verticalScrollBar()->value() ||
                        yRow > ui->scrollArea->verticalScrollBar()->value()+ui->scrollArea->height() - 42)
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value() + 42);

            }else if(obj->parent() == ui->twFilterLFO2->children().at(0)){
                if(ui->twFilterLFO2->cellWidget(1,0) == obj){
                    ui->scrollArea->verticalScrollBar()->setValue(0);
                }else{
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->maximum());
                }

            }else if(obj->parent() == ui->twFilterEG->children().at(0)){

            }else if(obj->parent() == ui->twEGController->children().at(0)){
                yRow = (ui->twFilterEG->rowCount() +1)*42 + 37;
                if(yRow < ui->scrollArea->verticalScrollBar()->value() ||
                        yRow > ui->scrollArea->verticalScrollBar()->value()+ui->scrollArea->height() - 42)
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value() + 42);

            }else if(obj->parent() == ui->twControllerSettings->children().at(0)){
                if(ui->twControllerSettings->cellWidget(ui->twControllerSettings->rowCount()-1,0) == obj){
                    ui->scrollArea->verticalScrollBar()->setValue(0);
                }else{
                    row = getRow(ui->twControllerSettings, obj);
                    yRow = (ui->twFilterEG->rowCount() +
                            ui->twEGController->rowCount() + row+1)*42 +
                            37;
                    if(yRow < ui->scrollArea->verticalScrollBar()->value() ||
                            yRow > ui->scrollArea->verticalScrollBar()->value()+ui->scrollArea->height() - 42)
                        ui->scrollArea->verticalScrollBar()->setValue(
                                    ui->scrollArea->verticalScrollBar()->value() + 42);
                }
            }

            if(obj == ui->twTypeController->cellWidget(ui->twTypeController->rowCount()-1,0)){
                ui->twFilterSettings1->selectRow(0);
                ui->twFilterSettings1->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twFilterSettings1->cellWidget(ui->twFilterSettings1->rowCount()-1,0)){
                ui->twVelocityCurve->selectRow(0);
                ui->twVelocityCurve->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twVelocityCurve->cellWidget(ui->twVelocityCurve->rowCount()-1,0)){
                ui->twFilterSettings2->selectRow(0);
                ui->twFilterSettings2->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twFilterSettings2->cellWidget(ui->twFilterSettings2->rowCount()-1,0)){
                ui->twResController->selectRow(0);
                ui->twResController->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twResController->cellWidget(ui->twResController->rowCount()-1,0)){
                ui->twKeyboard->selectRow(0);
                ui->twKeyboard->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twKeyboard->cellWidget(ui->twKeyboard->rowCount()-1,0)){
                ui->twFilterLFO1->selectRow(0);
                ui->twFilterLFO1->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twFilterLFO1->cellWidget(ui->twFilterLFO1->rowCount()-1,0)){
                ui->twLFOController->selectRow(0);
                ui->twLFOController->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twLFOController->cellWidget(ui->twLFOController->rowCount()-1,0)){
                ui->twFilterLFO2->selectRow(0);
                ui->twFilterLFO2->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twFilterLFO2->cellWidget(ui->twFilterLFO2->rowCount()-1,0)){
                ui->twFilterEG->selectRow(0);
                ui->twFilterEG->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twFilterEG->cellWidget(ui->twFilterEG->rowCount()-1,0)){
                ui->twEGController->selectRow(0);
                ui->twEGController->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twEGController->cellWidget(ui->twEGController->rowCount()-1,0)){
                ui->twControllerSettings->selectRow(0);
                ui->twControllerSettings->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twControllerSettings->cellWidget(ui->twControllerSettings->rowCount()-1,0)){
                ui->twTypeController->selectRow(0);
                ui->twTypeController->cellWidget(0,0)->setFocus();
                return true;
            }else{
                return QObject::eventFilter(obj, event);
            }
        }
        case Qt::Key_Backtab: {

            clearTableSelection();

            int row = 0;
            int yRow = 0;

            //  move the scrollbar
            if(obj->parent() == ui->twTypeController->children().at(0)){
                if(ui->twTypeController->cellWidget(0,0) == obj){
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->maximum());
                }else{
                    row = 1;
                    yRow = (row-1)*42+37;
                    if(yRow < ui->scrollArea->verticalScrollBar()->value())
                        ui->scrollArea->verticalScrollBar()->setValue(
                                    ui->scrollArea->verticalScrollBar()->value()-42);
                }

            }else if(obj->parent() == ui->twFilterSettings1->children().at(0)){

                row = getRow(ui->twFilterSettings1, obj);
                yRow = (ui->twTypeController->rowCount() + row-1)*42+37;
                if(yRow < ui->scrollArea->verticalScrollBar()->value())
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value()-42);


            }else if(obj->parent() == ui->twVelocityCurve->children().at(0)){
                row = getRow(ui->twFilterSettings1, obj);
                yRow = (ui->twFilterSettings1->rowCount() +
                        ui->twTypeController->rowCount() + row-1)*42 + 37;
                if(yRow < ui->scrollArea->verticalScrollBar()->value())
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value()-42);

            }else if(obj->parent() == ui->twFilterSettings2->children().at(0)){
                row = getRow(ui->twFilterSettings1, obj);
                yRow = (ui->twFilterSettings1->rowCount() +
                        ui->twTypeController->rowCount() + row-1)*42 + 37;
                if(yRow < ui->scrollArea->verticalScrollBar()->value())
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value()-42);

            }else if(obj->parent() == ui->twResController->children().at(0)){
                row = 0;
                yRow = (ui->twTypeController->rowCount() +
                        ui->twFilterSettings1->rowCount() +
                        ui->twVelocityCurve->rowCount() +
                        ui->twFilterSettings2->rowCount() + row-1)*42 + 37;
                if(yRow < ui->scrollArea->verticalScrollBar()->value())
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value()-42);

            }else if(obj->parent() == ui->twKeyboard->children().at(0)){
                if(ui->twKeyboard->cellWidget(0,0) == obj){
                    row = 0;
                    yRow = (ui->twTypeController->rowCount() +
                            ui->twFilterSettings1->rowCount() +
                            ui->twVelocityCurve->rowCount() +
                            ui->twFilterSettings2->rowCount() +
                            ui->twResController->rowCount() + row-1)*42 + 37;
                    if(yRow < ui->scrollArea->verticalScrollBar()->value())
                        ui->scrollArea->verticalScrollBar()->setValue(
                                    ui->scrollArea->verticalScrollBar()->value()-42);
                }

            }else if(obj->parent() == ui->twFilterLFO1->children().at(0)){
                row = getRow(ui->twFilterLFO1, obj);
                yRow = (ui->twTypeController->rowCount() +
                        ui->twFilterSettings1->rowCount() +
                        ui->twVelocityCurve->rowCount() +
                        ui->twFilterSettings2->rowCount() +
                        ui->twResController->rowCount() +
                        ui->twKeyboard->rowCount() + row+1)*42 +
                        37*2;
                if(yRow < ui->scrollArea->verticalScrollBar()->value() ||
                        yRow > ui->scrollArea->verticalScrollBar()->value()+ui->scrollArea->height() - 42)
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value() + 42);
            }else if(obj->parent() == ui->twLFOController->children().at(0)){

            }else if(obj->parent() == ui->twFilterLFO2->children().at(0)){

            }else if(obj->parent() == ui->twFilterEG->children().at(0)){
                if(ui->twFilterEG->cellWidget(0,0) == obj){
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->maximum());
                }else{
                    row = getRow(ui->twFilterEG, obj);
                    yRow = (row-1)*42 + 37;
                    if(yRow < ui->scrollArea->verticalScrollBar()->value())
                        ui->scrollArea->verticalScrollBar()->setValue(
                                    ui->scrollArea->verticalScrollBar()->value()-42);
                }

            }else if(obj->parent() == ui->twEGController->children().at(0)){
                row = 0;
                yRow = (ui->twFilterEG->rowCount() + row-1)*42 + 37;
                if(yRow < ui->scrollArea->verticalScrollBar()->value())
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value()-42);

            }else if(obj->parent() == ui->twControllerSettings->children().at(0)){
                row = getRow(ui->twControllerSettings, obj);
                yRow = (ui->twFilterEG->rowCount() +
                        ui->twEGController->rowCount() + row-1)*42 + 37;
                if(yRow < ui->scrollArea->verticalScrollBar()->value())
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value()-42);
            }



            if(obj == ui->twTypeController->cellWidget(0,0)){
                ui->twControllerSettings->selectRow(ui->twControllerSettings->rowCount()-1);
                ui->twControllerSettings->cellWidget(ui->twControllerSettings->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twFilterSettings1->cellWidget(0,0)){
                ui->twTypeController->selectRow(ui->twTypeController->rowCount()-1);
                ui->twTypeController->cellWidget(ui->twTypeController->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twVelocityCurve->cellWidget(0,0)){
                ui->twFilterSettings1->selectRow(ui->twFilterSettings1->rowCount()-1);
                ui->twFilterSettings1->cellWidget(ui->twFilterSettings1->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twFilterSettings2->cellWidget(0,0)){
                ui->twVelocityCurve->selectRow(ui->twVelocityCurve->rowCount()-1);
                ui->twVelocityCurve->cellWidget(ui->twVelocityCurve->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twResController->cellWidget(0,0)){
                ui->twFilterSettings2->selectRow(ui->twFilterSettings2->rowCount()-1);
                ui->twFilterSettings2->cellWidget(ui->twFilterSettings2->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twKeyboard->cellWidget(0,0)){
                ui->twResController->selectRow(ui->twResController->rowCount()-1);
                ui->twResController->cellWidget(ui->twResController->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twFilterLFO1->cellWidget(0,0)){
                ui->twKeyboard->selectRow(ui->twKeyboard->rowCount()-1);
                ui->twKeyboard->cellWidget(ui->twKeyboard->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twLFOController->cellWidget(0,0)){
                ui->twFilterLFO1->selectRow(ui->twFilterLFO1->rowCount()-1);
                ui->twFilterLFO1->cellWidget(ui->twFilterLFO1->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twFilterLFO2->cellWidget(0,0)){
                ui->twLFOController->selectRow(ui->twLFOController->rowCount()-1);
                ui->twLFOController->cellWidget(ui->twLFOController->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twFilterEG->cellWidget(0,0)){
                ui->twFilterLFO2->selectRow(ui->twFilterLFO2->rowCount()-1);
                ui->twFilterLFO2->cellWidget(ui->twFilterLFO2->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twEGController->cellWidget(0,0)){
                ui->twFilterEG->selectRow(ui->twFilterEG->rowCount()-1);
                ui->twFilterEG->cellWidget(ui->twFilterEG->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twControllerSettings->cellWidget(0,0)){
                ui->twEGController->selectRow(ui->twEGController->rowCount()-1);
                ui->twEGController->cellWidget(ui->twEGController->rowCount()-1,0)->setFocus();
                return true;
            }else{
                return QObject::eventFilter(obj, event);
            }
        }
        default:
            return QObject::eventFilter(obj, event);
        }

    }else if(event->type() == QEvent::MouseButtonPress ||
             event->type() == QEvent::MouseButtonDblClick ||
             event->type() == QEvent::MouseButtonRelease ||
             event->type() == QEvent::Wheel){

        // clear tables selection
        clearTableSelection();

        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);

        if(obj == ui->twTypeController->verticalHeader()->viewport()){
            int rowIndex = ui->twTypeController->rowAt(mouseEvent->pos().y());
            ui->twTypeController->selectRow(rowIndex);
            ui->twTypeController->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twFilterSettings1->verticalHeader()->viewport()){
            int rowIndex = ui->twFilterSettings1->rowAt(mouseEvent->pos().y());
            ui->twFilterSettings1->selectRow(rowIndex);
            ui->twFilterSettings1->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twVelocityCurve->verticalHeader()->viewport()){
            int rowIndex = ui->twVelocityCurve->rowAt(mouseEvent->pos().y());
            ui->twVelocityCurve->selectRow(rowIndex);
            ui->twVelocityCurve->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twFilterSettings2->verticalHeader()->viewport()){
            int rowIndex = ui->twFilterSettings2->rowAt(mouseEvent->pos().y());
            ui->twFilterSettings2->selectRow(rowIndex);
            ui->twFilterSettings2->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twResController->verticalHeader()->viewport()){
            int rowIndex = ui->twResController->rowAt(mouseEvent->pos().y());
            ui->twResController->selectRow(rowIndex);
            ui->twResController->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twKeyboard->verticalHeader()->viewport()){
            int rowIndex = ui->twKeyboard->rowAt(mouseEvent->pos().y());
            ui->twKeyboard->selectRow(rowIndex);
            ui->twKeyboard->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twFilterEG->verticalHeader()->viewport()){
            int rowIndex = ui->twFilterEG->rowAt(mouseEvent->pos().y());
            ui->twFilterEG->selectRow(rowIndex);
            ui->twFilterEG->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twEGController->verticalHeader()->viewport()){
            int rowIndex = ui->twEGController->rowAt(mouseEvent->pos().y());
            ui->twEGController->selectRow(rowIndex);
            ui->twEGController->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twControllerSettings->verticalHeader()->viewport()){
            int rowIndex = ui->twControllerSettings->rowAt(mouseEvent->pos().y());
            ui->twControllerSettings->selectRow(rowIndex);
            ui->twControllerSettings->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twFilterLFO1->verticalHeader()->viewport()){
            int rowIndex = ui->twFilterLFO1->rowAt(mouseEvent->pos().y());
            ui->twFilterLFO1->selectRow(rowIndex);
            ui->twFilterLFO1->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twLFOController->verticalHeader()->viewport()){
            int rowIndex = ui->twLFOController->rowAt(mouseEvent->pos().y());
            ui->twLFOController->selectRow(rowIndex);
            ui->twLFOController->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twFilterLFO2->verticalHeader()->viewport()){
            int rowIndex = ui->twFilterLFO2->rowAt(mouseEvent->pos().y());
            ui->twFilterLFO2->selectRow(rowIndex);
            ui->twFilterLFO2->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj->parent() == ui->twTypeController->cellWidget(0,0) ||
                 obj == ui->twTypeController->cellWidget(0,0)){
            ui->twTypeController->selectRow(0);
            ui->twTypeController->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twTypeController->cellWidget(1,0) ||
                 obj == ui->twTypeController->cellWidget(1,0)){
            ui->twTypeController->selectRow(1);
            ui->twTypeController->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twFilterSettings1->cellWidget(0,0) ||
                 obj == ui->twFilterSettings1->cellWidget(0,0)){
            ui->twFilterSettings1->selectRow(0);
            ui->twFilterSettings1->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twFilterSettings1->cellWidget(1,0) ||
                 obj == ui->twFilterSettings1->cellWidget(1,0)){
            ui->twFilterSettings1->selectRow(1);
            ui->twFilterSettings1->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twVelocityCurve->cellWidget(0,0) ||
                 obj == ui->twVelocityCurve->cellWidget(0,0)){
            ui->twVelocityCurve->selectRow(0);
            ui->twVelocityCurve->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twFilterSettings2->cellWidget(0,0) ||
                 obj == ui->twFilterSettings2->cellWidget(0,0)){
            ui->twFilterSettings2->selectRow(0);
            ui->twFilterSettings2->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twFilterSettings2->cellWidget(1,0) ||
                 obj == ui->twFilterSettings2->cellWidget(1,0)){
            ui->twFilterSettings2->selectRow(1);
            ui->twFilterSettings2->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twFilterSettings2->cellWidget(2,0) ||
                 obj == ui->twFilterSettings2->cellWidget(2,0)){
            ui->twFilterSettings2->selectRow(2);
            ui->twFilterSettings2->cellWidget(2,0)->setFocus();
        }else if(obj->parent() == ui->twFilterSettings2->cellWidget(3,0) ||
                 obj == ui->twFilterSettings2->cellWidget(3,0)){
            ui->twFilterSettings2->selectRow(3);
            ui->twFilterSettings2->cellWidget(3,0)->setFocus();
        }else if(obj->parent() == ui->twResController->cellWidget(0,0) ||
                 obj == ui->twResController->cellWidget(0,0)){
            ui->twResController->selectRow(0);
            ui->twResController->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twKeyboard->cellWidget(0,0) ||
                 obj == ui->twKeyboard->cellWidget(0,0)){
            ui->twKeyboard->selectRow(0);
            ui->twKeyboard->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twKeyboard->cellWidget(1,0) ||
                 obj == ui->twKeyboard->cellWidget(1,0)){
            ui->twKeyboard->selectRow(1);
            ui->twKeyboard->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twFilterLFO1->cellWidget(0,0) ||
                 obj == ui->twFilterLFO1->cellWidget(0,0)){
            ui->twFilterLFO1->selectRow(0);
            ui->twFilterLFO1->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twFilterLFO1->cellWidget(1,0) ||
                 obj == ui->twFilterLFO1->cellWidget(1,0)){
            ui->twFilterLFO1->selectRow(1);
            ui->twFilterLFO1->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twFilterLFO1->cellWidget(2,0) ||
                 obj == ui->twFilterLFO1->cellWidget(2,0)){
            ui->twFilterLFO1->selectRow(2);
            ui->twFilterLFO1->cellWidget(2,0)->setFocus();
        }else if(obj->parent() == ui->twLFOController->cellWidget(0,0) ||
                 obj == ui->twLFOController->cellWidget(0,0)){
            ui->twLFOController->selectRow(0);
            ui->twLFOController->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twFilterLFO2->cellWidget(0,0) ||
                 obj == ui->twFilterLFO2->cellWidget(0,0)){
            ui->twFilterLFO2->selectRow(0);
            ui->twFilterLFO2->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twFilterLFO2->cellWidget(1,0) ||
                 obj == ui->twFilterLFO2->cellWidget(1,0)){
            ui->twFilterLFO2->selectRow(1);
            ui->twFilterLFO2->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twFilterEG->cellWidget(0,0) ||
                 obj == ui->twFilterEG->cellWidget(0,0)){
            ui->twFilterEG->selectRow(0);
            ui->twFilterEG->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twFilterEG->cellWidget(1,0) ||
                 obj == ui->twFilterEG->cellWidget(1,0)){
            ui->twFilterEG->selectRow(1);
            ui->twFilterEG->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twFilterEG->cellWidget(2,0) ||
                 obj == ui->twFilterEG->cellWidget(2,0)){
            ui->twFilterEG->selectRow(2);
            ui->twFilterEG->cellWidget(2,0)->setFocus();
        }else if(obj->parent() == ui->twFilterEG->cellWidget(3,0) ||
                 obj == ui->twFilterEG->cellWidget(3,0)){
            ui->twFilterEG->selectRow(3);
            ui->twFilterEG->cellWidget(3,0)->setFocus();
        }else if(obj->parent() == ui->twFilterEG->cellWidget(4,0) ||
                 obj == ui->twFilterEG->cellWidget(4,0)){
            ui->twFilterEG->selectRow(4);
            ui->twFilterEG->cellWidget(4,0)->setFocus();
        }else if(obj->parent() == ui->twFilterEG->cellWidget(5,0) ||
                 obj == ui->twFilterEG->cellWidget(5,0)){
            ui->twFilterEG->selectRow(5);
            ui->twFilterEG->cellWidget(5,0)->setFocus();
        }else if(obj->parent() == ui->twFilterEG->cellWidget(6,0) ||
                 obj == ui->twFilterEG->cellWidget(6,0)){
            ui->twFilterEG->selectRow(6);
            ui->twFilterEG->cellWidget(6,0)->setFocus();
        }else if(obj->parent() == ui->twEGController->cellWidget(0,0) ||
                 obj == ui->twEGController->cellWidget(0,0)){
            ui->twEGController->selectRow(0);
            ui->twEGController->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twControllerSettings->cellWidget(0,0) ||
                 obj == ui->twControllerSettings->cellWidget(0,0)){
            ui->twControllerSettings->selectRow(0);
            ui->twControllerSettings->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twControllerSettings->cellWidget(1,0) ||
                 obj == ui->twControllerSettings->cellWidget(1,0)){
            ui->twControllerSettings->selectRow(1);
            ui->twControllerSettings->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twControllerSettings->cellWidget(2,0) ||
                 obj == ui->twControllerSettings->cellWidget(2,0)){
            ui->twControllerSettings->selectRow(2);
            ui->twControllerSettings->cellWidget(2,0)->setFocus();
        }else if(obj->parent() == ui->twControllerSettings->cellWidget(3,0) ||
                 obj == ui->twControllerSettings->cellWidget(3,0)){
            ui->twControllerSettings->selectRow(3);
            ui->twControllerSettings->cellWidget(3,0)->setFocus();
        }
    }

    return QObject::eventFilter(obj, event);
}

int FilterSettingsForm::getRow(QTableWidget *tw, QObject *obj)
{
    int row = 0;
    for(int i=0;i<tw->rowCount();i++){
        if(tw->cellWidget(i,0) == obj){
            row = i;
            break;
        }
    }
    return row;
}
