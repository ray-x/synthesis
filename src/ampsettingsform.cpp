#include "ampsettingsform.h"
#include "ui_ampsettingsform.h"

#include <QFile>
#include <QDebug>
#include <QTableWidgetItem>
#include <QListView>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QScrollBar>

AmpSettingsForm::AmpSettingsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AmpSettingsForm)
{
    ui->setupUi(this);

    isTabClicked = false;

    m_dsbGain = new QDoubleSpinBox(this);
    m_dsbGain->setMaximum(0.00);
    m_dsbGain->setMinimum(-96.00);
    m_dsbGain->setDecimals(2);
    m_dsbGain->setAlignment(Qt::AlignHCenter);
    m_dsbGain->installEventFilter(this);
    m_dsbGain->children().at(0)->installEventFilter(this);

    m_ckbGain6db = new QCheckBox(this);
    m_ckbGain6db->installEventFilter(this);

    m_sbPan = new QSpinBox(this);
    m_sbPan->setMaximum(63);
    m_sbPan->setMinimum(-64);
    m_sbPan->setAlignment(Qt::AlignHCenter);
    m_sbPan->installEventFilter(this);
    m_sbPan->children().at(0)->installEventFilter(this);

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

    m_ckbHoldAttack = new QCheckBox(this);
    m_ckbHoldAttack->installEventFilter(this);

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

    m_cbController = new QComboBox(this);
    m_cbController->addItem("None");
    m_cbController->addItem("ChannelAfterTouch");
    m_cbController->addItem("Velocity");
    m_cbController->addItem("CC1: Modwheel");
    m_cbController->addItem("CC2: Breath");
    m_cbController->addItem("CC3: Undefined [EXT]");
    m_cbController->addItem("CC4: Foot");
    m_cbController->addItem("CC5: Portamentotime");
    m_cbController->addItem("CC6: Data Entry MSB");
    m_cbController->addItem("CC7: Volume [EXT]");
    m_cbController->addItem("CC8: Balance [EXT]");
    m_cbController->addItem("CC9: Undefined [EXT]");
    m_cbController->addItem("CC10: Pan [EXT]");
    m_cbController->addItem("CC11: Expression [EXT]");
    m_cbController->addItem("CC12: Effect 1");
    m_cbController->addItem("CC13: Effect 2");
    m_cbController->installEventFilter(this);

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


    m_cbAttCtrl = new QComboBox(this);
    m_cbAttCtrl->addItem("None");
    m_cbAttCtrl->addItem("ChannelAfterTouch");
    m_cbAttCtrl->addItem("Velocity");
    m_cbAttCtrl->addItem("CC1: Modwheel");
    m_cbAttCtrl->addItem("CC2: Breath");
    m_cbAttCtrl->addItem("CC3: Undefined [EXT]");
    m_cbAttCtrl->addItem("CC4: Foot");
    m_cbAttCtrl->addItem("CC5: PortaMenToTime");
    m_cbAttCtrl->addItem("CC6: Data Entry MSB");
    m_cbAttCtrl->addItem("CC7: Volume");
    m_cbAttCtrl->addItem("CC8: Balance");
    m_cbAttCtrl->addItem("CC9: Undefined");
    m_cbAttCtrl->installEventFilter(this);

    m_ckbInvertAttCtrl = new QCheckBox(this);
    m_ckbInvertAttCtrl->installEventFilter(this);

    m_sbAttCtrlThreshold = new QSpinBox(this);
    m_sbAttCtrlThreshold->setMaximum(127);
    m_sbAttCtrlThreshold->setMinimum(0);
    m_sbAttCtrlThreshold->setAlignment(Qt::AlignHCenter);
    m_sbAttCtrlThreshold->installEventFilter(this);
    m_sbAttCtrlThreshold->children().at(0)->installEventFilter(this);

    m_sbInStart = new QSpinBox(this);
    m_sbInStart->setMaximum(127);
    m_sbInStart->setMinimum(0);
    m_sbInStart->setAlignment(Qt::AlignHCenter);
    m_sbInStart->installEventFilter(this);
    m_sbInStart->children().at(0)->installEventFilter(this);

    m_sbInEnd = new QSpinBox(this);
    m_sbInEnd->setMaximum(127);
    m_sbInEnd->setMinimum(0);
    m_sbInEnd->setAlignment(Qt::AlignHCenter);
    m_sbInEnd->installEventFilter(this);
    m_sbInEnd->children().at(0)->installEventFilter(this);

    m_sbOutStart = new QSpinBox(this);
    m_sbOutStart->setMaximum(127);
    m_sbOutStart->setMinimum(0);
    m_sbOutStart->setAlignment(Qt::AlignHCenter);
    m_sbOutStart->installEventFilter(this);
    m_sbOutStart->children().at(0)->installEventFilter(this);

    m_sbOutEnd = new QSpinBox(this);
    m_sbOutEnd->setMaximum(127);
    m_sbOutEnd->setMinimum(0);
    m_sbOutEnd->setAlignment(Qt::AlignHCenter);
    m_sbOutEnd->installEventFilter(this);
    m_sbOutEnd->children().at(0)->installEventFilter(this);

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

    m_cbOscController = new QComboBox(this);
    m_cbOscController->addItem("Internal");
    m_cbOscController->addItem("Modwheel");
    m_cbOscController->addItem("Aftertouch");
    m_cbOscController->addItem("Internal+Modwheel");
    m_cbOscController->addItem("Internal+Aftertouch");
    m_cbOscController->installEventFilter(this);

    m_ckbFlipPhase = new QCheckBox(this);
    m_ckbFlipPhase->installEventFilter(this);
    m_ckbSync = new QCheckBox(this);
    m_ckbSync->installEventFilter(this);

    // add widgets to table widget
    ui->twAmplitudeBasic->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twAmplitudeBasic->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twAmplitudeBasic->verticalHeader()->setDefaultSectionSize(42);
    ui->twAmplitudeBasic->setCellWidget(0,0,m_dsbGain);
    ui->twAmplitudeBasic->setCellWidget(1,0,m_ckbGain6db);
    ui->twAmplitudeBasic->setCellWidget(2,0,m_sbPan);
    ui->twAmplitudeBasic->verticalHeader()->viewport()->installEventFilter(this);

    ui->twAmplitudeEnvelope->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twAmplitudeEnvelope->verticalHeader()->setDefaultSectionSize(42);
    ui->twAmplitudeEnvelope->setCellWidget(0,0,m_dsbPreAttackLevel);
    ui->twAmplitudeEnvelope->setCellWidget(1,0,m_dspAttackTime);
    ui->twAmplitudeEnvelope->setCellWidget(2,0,m_ckbHoldAttack);
    ui->twAmplitudeEnvelope->setCellWidget(3,0,m_dspDecayTime1);
    ui->twAmplitudeEnvelope->setCellWidget(4,0,m_dspDecayTime2);
    ui->twAmplitudeEnvelope->setCellWidget(5,0,m_ckbInfiniteSustain);
    ui->twAmplitudeEnvelope->setCellWidget(6,0,m_dspSustainLevel);
    ui->twAmplitudeEnvelope->setCellWidget(7,0,m_dspReleaseTime);
    ui->twAmplitudeEnvelope->verticalHeader()->viewport()->installEventFilter(this);

    ui->twController->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twController->verticalHeader()->setDefaultSectionSize(42);
    ui->twController->setCellWidget(0,0,m_cbController);
    ui->twController->verticalHeader()->viewport()->installEventFilter(this);

    ui->twControllerInfluence->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twControllerInfluence->verticalHeader()->setDefaultSectionSize(42);
    ui->twControllerInfluence->setCellWidget(0,0,m_ckbControllerInvert);
    ui->twControllerInfluence->setCellWidget(1,0,m_sbCtrlAttackInfluence);
    ui->twControllerInfluence->setCellWidget(2,0,m_sbCtrlDecayInfluence);
    ui->twControllerInfluence->setCellWidget(3,0,m_sbCtrlReleaseInfluence);
    ui->twControllerInfluence->verticalHeader()->viewport()->installEventFilter(this);

    // add widgets to table widget
    ui->twCrossFadeController->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twCrossFadeController->verticalHeader()->setDefaultSectionSize(42);
    ui->twCrossFadeController->setCellWidget(0,0,m_cbAttCtrl);
    ui->twCrossFadeController->verticalHeader()->viewport()->installEventFilter(this);

    ui->twCrossfade->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twCrossfade->verticalHeader()->setDefaultSectionSize(42);
    ui->twCrossfade->setCellWidget(0,0,m_ckbInvertAttCtrl);
    ui->twCrossfade->setCellWidget(1,0,m_sbAttCtrlThreshold);
    ui->twCrossfade->setCellWidget(2,0,m_sbInStart);
    ui->twCrossfade->setCellWidget(3,0,m_sbInEnd);
    ui->twCrossfade->setCellWidget(4,0,m_sbOutStart);
    ui->twCrossfade->setCellWidget(5,0,m_sbOutEnd);
    ui->twCrossfade->verticalHeader()->viewport()->installEventFilter(this);

    // add widgets to table widget
    ui->twAmpOscillator->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twAmpOscillator->verticalHeader()->setDefaultSectionSize(42);
    ui->twAmpOscillator->setCellWidget(0,0,m_dsbFrequency);
    ui->twAmpOscillator->setCellWidget(1,0,m_sbInternalDepth);
    ui->twAmpOscillator->setCellWidget(2,0,m_sbControlDepth);
    ui->twAmpOscillator->verticalHeader()->viewport()->installEventFilter(this);

    ui->twOscController->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twOscController->verticalHeader()->setDefaultSectionSize(42);
    ui->twOscController->setCellWidget(0,0,m_cbOscController);
    ui->twOscController->verticalHeader()->viewport()->installEventFilter(this);


    ui->twAmpOscillator2->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twAmpOscillator2->verticalHeader()->setDefaultSectionSize(42);
    ui->twAmpOscillator2->setCellWidget(0,0,m_ckbFlipPhase);
    ui->twAmpOscillator2->setCellWidget(1,0,m_ckbSync);
    ui->twAmpOscillator2->verticalHeader()->viewport()->installEventFilter(this);

    ui->frameBlank->installEventFilter(this);

    ui->scrollArea->verticalScrollBar()->installEventFilter(this);


}

AmpSettingsForm::~AmpSettingsForm()
{
    delete ui;
}

bool AmpSettingsForm::eventFilter(QObject *obj, QEvent *event)
{
    if(event->type() == QEvent::KeyPress) {

        int row = 0;
        int yRow = 0;

        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        switch(keyEvent->key()){
        case Qt::Key_Tab: {
            // clear tables selection
            ui->twAmplitudeBasic->selectionModel()->clearSelection();
            ui->twAmplitudeEnvelope->selectionModel()->clearSelection();
            ui->twController->selectionModel()->clearSelection();
            ui->twControllerInfluence->selectionModel()->clearSelection();
            ui->twAmpOscillator->selectionModel()->clearSelection();
            ui->twOscController->selectionModel()->clearSelection();
            ui->twAmpOscillator2->selectionModel()->clearSelection();
            ui->twCrossFadeController->selectionModel()->clearSelection();
            ui->twCrossfade->selectionModel()->clearSelection();

            //  move the scrollbar
            if(obj->parent() == ui->twAmplitudeBasic->children().at(0)){
                ui->scrollArea->verticalScrollBar()->setValue(0);

            }else if(obj->parent() == ui->twAmplitudeEnvelope->children().at(0)){
                row = getRow(ui->twAmplitudeEnvelope, obj);
                yRow = (ui->twAmplitudeBasic->rowCount()+row+1)*42 + 37*2;
                if(yRow < ui->scrollArea->verticalScrollBar()->value() ||
                        yRow > ui->scrollArea->verticalScrollBar()->value()+ui->scrollArea->height() - 42)
                    ui->scrollArea->verticalScrollBar()->setValue(ui->scrollArea->verticalScrollBar()->value() + 42);

            }else if(obj->parent() == ui->twController->children().at(0)){
                yRow = (ui->twAmplitudeBasic->rowCount()+ui->twAmplitudeEnvelope->rowCount() +1)*42 + 37*2;
                if(yRow > ui->scrollArea->verticalScrollBar()->value() + ui->scrollArea->height() - 42)
                    ui->scrollArea->verticalScrollBar()->setValue(ui->scrollArea->verticalScrollBar()->value()+42);

            }else if(obj->parent() == ui->twControllerInfluence->children().at(0)){
                if(ui->twControllerInfluence->cellWidget(ui->twControllerInfluence->rowCount()-1,0) == obj){
                    ui->scrollArea->verticalScrollBar()->setValue(0);
                }else{
                    row = getRow(ui->twControllerInfluence, obj);
                    yRow = (ui->twAmplitudeBasic->rowCount() +
                            ui->twAmplitudeEnvelope->rowCount() +
                            ui->twController->rowCount() + row + 1)*42 +
                            37*2;
                    if(yRow < ui->scrollArea->verticalScrollBar()->value() ||
                            yRow > ui->scrollArea->verticalScrollBar()->value()+ui->scrollArea->height() - 42)
                        ui->scrollArea->verticalScrollBar()->setValue(ui->scrollArea->verticalScrollBar()->value() + 42);
                }

            }else if(obj->parent() == ui->twAmpOscillator->children().at(0)){

            }else if(obj->parent() == ui->twOscController->children().at(0)){

            }else if(obj->parent() == ui->twAmpOscillator2->children().at(0)){

            }else if(obj->parent() == ui->twCrossFadeController->children().at(0)){
                yRow = (ui->twAmpOscillator->rowCount() + ui->twAmpOscillator2->rowCount()+3)*42+37*2;
                if( yRow > ui->scrollArea->verticalScrollBar()->value())
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value()+42);

            }else if(obj->parent() == ui->twCrossfade->children().at(0)){
                if(ui->twCrossfade->cellWidget(ui->twCrossfade->rowCount()-1,0) == obj){
                    ui->scrollArea->verticalScrollBar()->setValue(0);
                }else{
                    row = getRow(ui->twCrossfade, obj);
                    yRow = (ui->twAmpOscillator->rowCount() +
                            ui->twOscController->rowCount() +
                            ui->twAmpOscillator2->rowCount() +
                            ui->twCrossFadeController->rowCount() + row + 1)*42 +
                            37*2;
                    if(yRow < ui->scrollArea->verticalScrollBar()->value() ||
                            yRow > ui->scrollArea->verticalScrollBar()->value()+ui->scrollArea->height() - 42)
                        ui->scrollArea->verticalScrollBar()->setValue(
                                    ui->scrollArea->verticalScrollBar()->value() + 42);
                }
            }

            if(obj == m_sbPan){
                ui->twAmplitudeEnvelope->selectRow(0);
                m_dsbPreAttackLevel->setFocus();
                return true;
            }else if(obj == m_dspReleaseTime){
                ui->twController->selectRow(0);
                m_cbController->setFocus();
                return true;
            }else if(obj == m_cbController){
                ui->twControllerInfluence->selectRow(0);
                m_ckbControllerInvert->setFocus();
                return true;
            }else if(obj == m_sbCtrlReleaseInfluence){
                ui->twAmpOscillator->selectRow(0);
                m_dsbFrequency->setFocus();
                return true;
            }else if(obj == m_sbControlDepth){
                ui->twOscController->selectRow(0);
                m_cbOscController->setFocus();
                return true;
            }else if(obj == m_cbOscController){
                ui->twAmpOscillator2->selectRow(0);
                m_ckbFlipPhase->setFocus();
                return true;
            }else if(obj == m_ckbSync){
                ui->twCrossFadeController->selectRow(0);
                m_cbAttCtrl->setFocus();
                return true;
            }else if(obj == m_cbAttCtrl){
                ui->twCrossfade->selectRow(0);
                m_ckbInvertAttCtrl->setFocus();
                return true;
            }else if(obj == m_sbOutEnd){
                ui->twAmplitudeBasic->selectRow(0);
                m_dsbGain->setFocus();
                return true;
            }else{
                return QObject::eventFilter(obj, event);
            }
        }

        case Qt::Key_Backtab: {
            // clear tables selection
            ui->twAmplitudeBasic->selectionModel()->clearSelection();
            ui->twAmplitudeEnvelope->selectionModel()->clearSelection();
            ui->twController->selectionModel()->clearSelection();
            ui->twControllerInfluence->selectionModel()->clearSelection();
            ui->twAmpOscillator->selectionModel()->clearSelection();
            ui->twOscController->selectionModel()->clearSelection();
            ui->twAmpOscillator2->selectionModel()->clearSelection();
            ui->twCrossFadeController->selectionModel()->clearSelection();
            ui->twCrossfade->selectionModel()->clearSelection();

            // move the scrollbar
            if(obj->parent() == ui->twAmplitudeBasic->children().at(0)){
                if(ui->twAmplitudeBasic->cellWidget(0,0) == obj){
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->maximum());
                }else{
                    row = getRow(ui->twAmplitudeBasic,obj);
                    yRow = (row-1)*42+37;
                    if(yRow < ui->scrollArea->verticalScrollBar()->value())
                        ui->scrollArea->verticalScrollBar()->setValue(
                                    ui->scrollArea->verticalScrollBar()->value()-42);
                }

            }else if(obj->parent() == ui->twAmplitudeEnvelope->children().at(0)){
                if(ui->twAmplitudeEnvelope->cellWidget(0,0) == obj){
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value()-42-37*2);
                }else{
                    row = getRow(ui->twAmplitudeEnvelope,obj);
                    yRow = (ui->twAmplitudeBasic->rowCount()+row-1)*42+37*2;
                    if(yRow < ui->scrollArea->verticalScrollBar()->value())
                        ui->scrollArea->verticalScrollBar()->setValue(
                                    ui->scrollArea->verticalScrollBar()->value()-42);
                }

            }else if(obj->parent() == ui->twController->children().at(0)){

            }else if(obj->parent() == ui->twControllerInfluence->children().at(0)){

            }else if(obj->parent() == ui->twAmpOscillator->children().at(0)){
                if(ui->twAmpOscillator->cellWidget(0,0) == obj){
                    ui->scrollArea->verticalScrollBar()->setValue(ui->scrollArea->verticalScrollBar()->maximum());
                }else{
                    row = getRow(ui->twAmpOscillator,obj);
                    yRow = (row-1)*42+37;
                    if(yRow < ui->scrollArea->verticalScrollBar()->value())
                        ui->scrollArea->verticalScrollBar()->setValue(
                                    ui->scrollArea->verticalScrollBar()->value()-42 - 37 -
                                    (ui->scrollArea->verticalScrollBar()->value()-37)%42);
                }

            }else if(obj->parent() == ui->twOscController->children().at(0)){
                yRow = (ui->twAmpOscillator->rowCount()-1)*42+37;
                if(yRow < ui->scrollArea->verticalScrollBar()->value())
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value()- 42 - 37 -
                                (ui->scrollArea->verticalScrollBar()->value()-37)%42);

            }else if(obj->parent() == ui->twAmpOscillator2->children().at(0)){
                row = getRow(ui->twAmpOscillator2,obj);
                yRow = (ui->twAmpOscillator->rowCount() + ui->twOscController->rowCount() + row-1)*42+37;
                if(yRow < ui->scrollArea->verticalScrollBar()->value())
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value()- 42 -
                                (ui->scrollArea->verticalScrollBar()->value()-37)%42);

            }else if(obj->parent() == ui->twCrossFadeController->children().at(0)){
                row = 0;
                yRow = (ui->twAmpOscillator->rowCount() +
                        ui->twOscController->rowCount() +
                        ui->twAmpOscillator2->rowCount() - 1)*42 +
                        37*2;
                if(yRow < ui->scrollArea->verticalScrollBar()->value())
                    ui->scrollArea->verticalScrollBar()->setValue(
                                ui->scrollArea->verticalScrollBar()->value()-42-37*2);

            }else if(obj->parent() == ui->twCrossfade->children().at(0)){
                if(ui->twCrossfade->cellWidget(0,0) == obj){
                    yRow = (ui->twAmpOscillator->rowCount() +
                            ui->twOscController->rowCount() +
                            ui->twAmpOscillator2->rowCount()+
                            ui->twCrossFadeController->rowCount() -1)*42
                            +37*2;
                    if(yRow < ui->scrollArea->verticalScrollBar()->value())
                        ui->scrollArea->verticalScrollBar()->setValue(
                                    ui->scrollArea->verticalScrollBar()->value() - 42 -
                                    (ui->scrollArea->verticalScrollBar()->value()-2*37)%42);
                }
            }

            if(obj == m_dsbGain){
                ui->twCrossfade->selectRow(ui->twCrossfade->rowCount()-1);
                m_sbOutEnd->setFocus();
                return true;
            }else if(obj == m_dsbPreAttackLevel){
                ui->twAmplitudeBasic->selectRow(ui->twAmplitudeBasic->rowCount()-1);
                m_sbPan->setFocus();
                return true;
            }else if(obj == m_cbController){
                ui->twAmplitudeEnvelope->selectRow(ui->twAmplitudeEnvelope->rowCount()-1);
                m_dspReleaseTime->setFocus();
                return true;
            }else if(obj == m_ckbControllerInvert){
                ui->twController->selectRow(ui->twController->rowCount()-1);
                m_cbController->setFocus();
                return true;
            }else if(obj == m_dsbFrequency){
                ui->twControllerInfluence->selectRow(ui->twControllerInfluence->rowCount()-1);
                m_sbCtrlReleaseInfluence->setFocus();
                return true;
            }else if(obj == m_cbOscController){
                ui->twAmpOscillator->selectRow(ui->twAmpOscillator->rowCount()-1);
                m_sbControlDepth->setFocus();
                return true;
            }else if(obj == m_ckbFlipPhase){
                ui->twOscController->selectRow(ui->twOscController->rowCount()-1);
                m_cbOscController->setFocus();
                return true;
            }else if(obj == m_cbAttCtrl){
                ui->twAmpOscillator2->selectRow(ui->twAmpOscillator2->rowCount()-1);
                m_ckbSync->setFocus();
                return true;
            }else if(obj == m_ckbInvertAttCtrl){
                ui->twCrossFadeController->selectRow(ui->twCrossFadeController->rowCount()-1);
                m_cbAttCtrl->setFocus();
                return true;
            }else{

                return QObject::eventFilter(obj, event);
            }
        }
        default:
            return QObject::eventFilter(obj, event);
        }

    } else if(event->type() == QEvent::MouseButtonPress ||
              event->type() == QEvent::MouseButtonDblClick ||
              event->type() == QEvent::MouseButtonRelease ||
              event->type() == QEvent::Wheel){

        ui->twAmplitudeBasic->selectionModel()->clearSelection();
        ui->twAmplitudeEnvelope->selectionModel()->clearSelection();
        ui->twController->selectionModel()->clearSelection();
        ui->twControllerInfluence->selectionModel()->clearSelection();
        ui->twAmpOscillator->selectionModel()->clearSelection();
        ui->twOscController->selectionModel()->clearSelection();
        ui->twAmpOscillator2->selectionModel()->clearSelection();
        ui->twCrossFadeController->selectionModel()->clearSelection();
        ui->twCrossfade->selectionModel()->clearSelection();

        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);

        if(obj == ui->twAmplitudeBasic->verticalHeader()->viewport()){
            int rowIndex = ui->twAmplitudeBasic->rowAt(mouseEvent->pos().y());
            ui->twAmplitudeBasic->selectRow(rowIndex);
            ui->twAmplitudeBasic->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twAmplitudeEnvelope->verticalHeader()->viewport()){
            int rowIndex = ui->twAmplitudeEnvelope->rowAt(mouseEvent->pos().y());
            ui->twAmplitudeEnvelope->selectRow(rowIndex);
            ui->twAmplitudeEnvelope->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twController->verticalHeader()->viewport()){
            int rowIndex = ui->twController->rowAt(mouseEvent->pos().y());
            ui->twController->selectRow(rowIndex);
            ui->twController->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twControllerInfluence->verticalHeader()->viewport()){
            int rowIndex = ui->twControllerInfluence->rowAt(mouseEvent->pos().y());
            ui->twControllerInfluence->selectRow(rowIndex);
            ui->twControllerInfluence->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twAmpOscillator->verticalHeader()->viewport()){
            int rowIndex = ui->twAmpOscillator->rowAt(mouseEvent->pos().y());
            ui->twAmpOscillator->selectRow(rowIndex);
            ui->twAmpOscillator->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twOscController->verticalHeader()->viewport()){
            int rowIndex = ui->twOscController->rowAt(mouseEvent->pos().y());
            ui->twOscController->selectRow(rowIndex);
            ui->twOscController->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twAmpOscillator2->verticalHeader()->viewport()){
            int rowIndex = ui->twAmpOscillator2->rowAt(mouseEvent->pos().y());
            ui->twAmpOscillator2->selectRow(rowIndex);
            ui->twAmpOscillator2->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twCrossFadeController->verticalHeader()->viewport()){
            int rowIndex = ui->twCrossFadeController->rowAt(mouseEvent->pos().y());
            ui->twCrossFadeController->selectRow(rowIndex);
            ui->twCrossFadeController->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twCrossfade->verticalHeader()->viewport()){
            int rowIndex = ui->twCrossfade->rowAt(mouseEvent->pos().y());
            ui->twCrossfade->selectRow(rowIndex);
            ui->twCrossfade->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj->parent() == m_dsbGain || obj == m_dsbGain){
            ui->twAmplitudeBasic->selectRow(0);
            m_dsbGain->setFocus();
        }else if(obj == m_ckbGain6db || obj == m_ckbGain6db){
            ui->twAmplitudeBasic->selectRow(1);
            m_ckbGain6db->setFocus();
        }else if(obj->parent() == m_sbPan || obj == m_sbPan){
            ui->twAmplitudeBasic->selectRow(2);
            m_sbPan->setFocus();
        }else if(obj->parent() == m_dsbPreAttackLevel || obj == m_dsbPreAttackLevel){
            ui->twAmplitudeEnvelope->selectRow(0);
            m_dsbPreAttackLevel->setFocus();
        }else if(obj->parent() == m_dspAttackTime || obj == m_dspAttackTime){
            ui->twAmplitudeEnvelope->selectRow(1);
            m_dspAttackTime->setFocus();
        }else if(obj == m_ckbHoldAttack || obj == m_ckbHoldAttack){
            ui->twAmplitudeEnvelope->selectRow(2);
            m_ckbHoldAttack->setFocus();
        }else if(obj->parent() == m_dspDecayTime1 || obj == m_dspDecayTime1){
            ui->twAmplitudeEnvelope->selectRow(3);
            m_dspDecayTime1->setFocus();
        }else if(obj->parent() == m_dspDecayTime2 || obj == m_dspDecayTime2){
            ui->twAmplitudeEnvelope->selectRow(4);
            m_dspDecayTime2->setFocus();
        }else if(obj == m_ckbInfiniteSustain || obj == m_ckbInfiniteSustain){
            ui->twAmplitudeEnvelope->selectRow(5);
            m_ckbInfiniteSustain->setFocus();
        }else if(obj->parent() == m_dspSustainLevel || obj == m_dspSustainLevel){
            ui->twAmplitudeEnvelope->selectRow(6);
            m_dspSustainLevel->setFocus();
        }else if(obj->parent() == m_dspReleaseTime || obj == m_dspReleaseTime){
            ui->twAmplitudeEnvelope->selectRow(7);
            m_dspReleaseTime->setFocus();
        }else if(obj == m_cbController || obj == m_cbController){
            ui->twController->selectRow(0);
            m_cbController->setFocus();
        }else if(obj == m_ckbControllerInvert || obj == m_ckbControllerInvert){
            ui->twControllerInfluence->selectRow(0);
            m_ckbControllerInvert->setFocus();
        }else if(obj->parent() == m_sbCtrlAttackInfluence || obj == m_sbCtrlAttackInfluence){
            ui->twControllerInfluence->selectRow(1);
            m_sbCtrlAttackInfluence->setFocus();
        }else if(obj->parent() == m_sbCtrlDecayInfluence || obj == m_sbCtrlDecayInfluence){
            ui->twControllerInfluence->selectRow(2);
            m_sbCtrlDecayInfluence->setFocus();
        }else if(obj->parent() == m_sbCtrlReleaseInfluence || obj == m_sbCtrlReleaseInfluence){
            ui->twControllerInfluence->selectRow(3);
            m_sbCtrlReleaseInfluence->setFocus();
        }else if(obj->parent() == m_dsbFrequency || obj == m_dsbFrequency){
            ui->twAmpOscillator->selectRow(0);
            m_dsbFrequency->setFocus();
        }else if(obj->parent() == m_sbInternalDepth || obj == m_sbInternalDepth){
            ui->twAmpOscillator->selectRow(1);
            m_sbInternalDepth->setFocus();
        }else if(obj->parent() == m_sbControlDepth || obj == m_sbControlDepth){
            ui->twAmpOscillator->selectRow(2);
            m_sbControlDepth->setFocus();
        }else if(obj->parent() == m_sbControlDepth || obj == m_sbControlDepth){
            ui->twAmpOscillator->selectRow(3);
            m_sbControlDepth->setFocus();
        }else if(obj == m_cbOscController || obj == m_cbOscController){
            ui->twOscController->selectRow(0);
            m_cbOscController->setFocus();
        }else if(obj == m_ckbFlipPhase || obj == m_ckbFlipPhase){
            ui->twAmpOscillator2->selectRow(0);
            m_ckbFlipPhase->setFocus();
        }else if(obj == m_ckbSync || obj == m_ckbSync){
            ui->twAmpOscillator2->selectRow(1);
            m_ckbSync->setFocus();
        }else if(obj == m_cbAttCtrl || obj == m_cbAttCtrl){
            ui->twCrossFadeController->selectRow(0);
            m_cbAttCtrl->setFocus();
        }else if(obj == m_ckbInvertAttCtrl || obj == m_ckbInvertAttCtrl){
            ui->twCrossfade->selectRow(0);
            m_ckbInvertAttCtrl->setFocus();
        }else if(obj->parent() == m_sbAttCtrlThreshold || obj == m_sbAttCtrlThreshold){
            ui->twCrossfade->selectRow(1);
            m_sbAttCtrlThreshold->setFocus();
        }else if(obj->parent() == m_sbInStart || obj == m_sbInStart){
            ui->twCrossfade->selectRow(2);
            m_sbInStart->setFocus();
        }else if(obj->parent() == m_sbInEnd || obj == m_sbInEnd){
            ui->twCrossfade->selectRow(3);
            m_sbInEnd->setFocus();
        }else if(obj->parent() == m_sbOutStart || obj == m_sbOutStart){
            ui->twCrossfade->selectRow(4);
            m_sbOutStart->setFocus();
        }else if(obj->parent() == m_sbOutEnd || obj == m_sbOutEnd){
            ui->twCrossfade->selectRow(5);
            m_sbOutEnd->setFocus();
        }else{
            return QObject::eventFilter(obj, event);
        }
    } else {
        // standard event processing
        return QObject::eventFilter(obj, event);
    }

    return QObject::eventFilter(obj, event);
}

int AmpSettingsForm::getRow(QTableWidget *tw, QObject *obj)
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

