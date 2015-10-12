#include "pitchsettingsform.h"
#include "ui_pitchsettingsform.h"

#include <QFile>
#include <QDebug>
#include <QTableWidgetItem>
#include <QListView>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QScrollBar>
#include "gigfile.h"
void PitchSettingsForm::show()
{
    gigFile *gigFileObj= gigFile::instance();

    gig::File *gigfd=gigFileObj->m_gigO[gigFileObj->idx];
    gig::DimensionRegion *pDimensionRegion;
    if (gigfd!=nullptr) {
        gig::Instrument *pInstrument = gigfd->GetFirstInstrument();
        gig::Region *pRegion=pInstrument->GetFirstRegion();
        pDimensionRegion = pRegion->pDimensionRegions[0];
    }else {   
        pDimensionRegion=nullptr;
        goto end;
    }

    int index;
    if (pDimensionRegion==nullptr)
        goto end;
    m_sbFineTune->setValue(pDimensionRegion->FineTune);
    m_ckbPitchTrack->setChecked(pDimensionRegion->PitchTrack);
    m_dsbAttack->setValue(pDimensionRegion->PitchTrack);
    m_spDepth->setValue(pDimensionRegion->EG3Depth);
    m_dsbFrequency->setValue(pDimensionRegion->LFO3Frequency);
    switch (pDimensionRegion->VCFType) {
        case gig::vcf_type_lowpass:index=0;break;
        case gig::vcf_type_lowpassturbo:index=1;break;
        case gig::vcf_type_bandpass:index=2;break;
        case gig::vcf_type_highpass:index=3;break;
        case gig::vcf_type_bandreject:index=4;break;
    }
    m_cbController->setCurrentIndex(index);
    m_ckbSync->setChecked(pDimensionRegion->LFO3Sync);


end:
    QWidget::show();
}
PitchSettingsForm::PitchSettingsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PitchSettingsForm)
{
    ui->setupUi(this);

    gigFile *gigFileObj= gigFile::instance();
    //fixme::idx=1
    int idx=1;
    gig::File *gigfd=gigFileObj->m_gigO[idx];
    gig::Instrument* pInstrument; //= gigfd->GetFirstInstrument();
    gig::Region *pRegion;//=pInstrument->GetFirstRegion();
    gig::DimensionRegion* pDimensionRegion=nullptr;
    pDimensionRegion =nullptr;// pRegion->pDimensionRegions[idx];

    m_sbFineTune = new QSpinBox(this);
    m_sbFineTune->setMaximum(50);
    m_sbFineTune->setMinimum(-49);
    m_sbFineTune->setAlignment(Qt::AlignHCenter);
    m_sbFineTune->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_sbFineTune->setValue(pDimensionRegion->FineTune);
    m_sbFineTune->children().at(0)->installEventFilter(this);
    connect(m_sbFineTune, SIGNAL(valueChanged(int)), gigFileObj, SLOT(setFineTune(int)));


    m_ckbPitchTrack = new QCheckBox(this);
    m_ckbPitchTrack->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_ckbPitchTrack->setChecked(pDimensionRegion->PitchTrack);
    connect(m_ckbPitchTrack, SIGNAL(stateChanged(int)), gigFileObj, SLOT(setPitchTrack(int)));

    m_dsbAttack = new QDoubleSpinBox(this);
    m_dsbAttack->setMaximum(10.000);
    m_dsbAttack->setMinimum(0.000);
    m_dsbAttack->setDecimals(3);
    m_dsbAttack->setAlignment(Qt::AlignHCenter);
    m_dsbAttack->installEventFilter(this);
    m_dsbAttack->children().at(0)->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_dsbAttack->setValue(pDimensionRegion->PitchTrack);
    connect(m_dsbAttack, SIGNAL(valueChanged(double)), gigFileObj, SLOT(setEG3Attack(double)));

    m_spDepth = new QSpinBox(this);
    m_spDepth->setMaximum(1200);
    m_spDepth->setMinimum(-1200);
    m_spDepth->setAlignment(Qt::AlignHCenter);
    m_spDepth->installEventFilter(this);
    if (pDimensionRegion!=nullptr)  m_spDepth->setValue(pDimensionRegion->EG3Depth);
    m_spDepth->children().at(0)->installEventFilter(this);
    connect(m_spDepth, SIGNAL(valueChanged(int)), gigFileObj, SLOT(setEG3Depth(int)));


    m_dsbFrequency = new QDoubleSpinBox(this);
    m_dsbFrequency->setMaximum(10.00);
    m_dsbFrequency->setMinimum(0.10);
    m_dsbFrequency->setDecimals(2);
    m_dsbFrequency->setAlignment(Qt::AlignHCenter);
    m_dsbFrequency->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_dsbFrequency->setValue(pDimensionRegion->LFO3Frequency);
    m_dsbFrequency->children().at(0)->installEventFilter(this);
    connect(m_dsbFrequency, SIGNAL(valueChanged(double)), gigFileObj, SLOT(setLFO3Frequency(double)));

    m_sbInternalDepth = new QSpinBox(this);
    m_sbInternalDepth->setMaximum(1200);
    m_sbInternalDepth->setMinimum(0);
    m_sbInternalDepth->setAlignment(Qt::AlignHCenter);
    m_sbInternalDepth->installEventFilter(this);
    m_sbInternalDepth->children().at(0)->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_sbInternalDepth->setValue(pDimensionRegion->LFO3InternalDepth);
    connect(m_sbInternalDepth, SIGNAL(valueChanged(int)), gigFileObj, SLOT(setLFO3InternalDepth(int)));

    m_sbControlDepth = new QSpinBox(this);
    m_sbControlDepth->setMaximum(1200);
    m_sbControlDepth->setMinimum(0);
    m_sbControlDepth->setAlignment(Qt::AlignHCenter);
    m_sbControlDepth->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_sbControlDepth->setValue(pDimensionRegion->LFO3ControlDepth);
    m_sbControlDepth->children().at(0)->installEventFilter(this);
    connect(m_sbControlDepth, SIGNAL(valueChanged(int)), gigFileObj, SLOT(setLFO3ControlDepth(int)));


    m_cbController = new QComboBox(this);
    m_cbController->addItem("Internal");
    m_cbController->addItem("Modwheel");
    m_cbController->addItem("AfterTouch");
    m_cbController->addItem("Internal+Modwheel");
    m_cbController->addItem("Internal+Aftertouch");

    m_cbController->installEventFilter(this);
    if (pDimensionRegion!=nullptr)  m_cbController->setCurrentIndex(pDimensionRegion->LFO3Controller);
    connect(m_cbController, SIGNAL(currentIndexChanged(int)), gigFileObj, SLOT(setLFO3Controller(int)));

    m_ckbSync = new QCheckBox(this);
    m_ckbSync->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_ckbSync->setChecked(pDimensionRegion->LFO3Sync);
    connect(m_ckbSync, SIGNAL(stateChanged(int)), gigFileObj, SLOT(setLFO3Sync(int)));

    // add widgets to table widget
    ui->twPitchSettings->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twPitchSettings->verticalHeader()->setDefaultSectionSize(42);
    ui->twPitchSettings->setCellWidget(0,0,m_sbFineTune);
    ui->twPitchSettings->setCellWidget(1,0, new QSpinBox());
    ui->twPitchSettings->setCellWidget(2,0,new QSpinBox());
    ui->twPitchSettings->setCellWidget(3,0,m_ckbPitchTrack);
    ui->twPitchSettings->verticalHeader()->viewport()->installEventFilter(this);

    ui->twPitchEnvelop->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twPitchEnvelop->verticalHeader()->setDefaultSectionSize(42);
    ui->twPitchEnvelop->setCellWidget(0,0,m_dsbAttack);
    ui->twPitchEnvelop->setCellWidget(1,0,m_spDepth);
    ui->twPitchEnvelop->verticalHeader()->viewport()->installEventFilter(this);

    // add widgets to table widget
    ui->twPitchOscillator1->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twPitchOscillator1->verticalHeader()->setDefaultSectionSize(42);
    ui->twPitchOscillator1->setCellWidget(0,0,m_dsbFrequency);
    ui->twPitchOscillator1->setCellWidget(1,0,m_sbInternalDepth);
    ui->twPitchOscillator1->setCellWidget(2,0,m_sbControlDepth);
    ui->twPitchOscillator1->verticalHeader()->viewport()->installEventFilter(this);

    ui->twController->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twController->verticalHeader()->setDefaultSectionSize(42);
    ui->twController->setCellWidget(0,0,m_cbController);
    ui->twController->verticalHeader()->viewport()->installEventFilter(this);

    ui->twPitchOscillator2->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twPitchOscillator2->verticalHeader()->setDefaultSectionSize(42);
    ui->twPitchOscillator2->setCellWidget(0,0,m_ckbSync);
    ui->twPitchOscillator2->verticalHeader()->viewport()->installEventFilter(this);

    ui->scrollArea->verticalScrollBar()->installEventFilter(this);
    ui->frameBlank->installEventFilter(this);
    ui->frameBlank2->installEventFilter(this);
}

PitchSettingsForm::~PitchSettingsForm()
{
    delete ui;
}

bool PitchSettingsForm::eventFilter(QObject *obj, QEvent *event)
{
    if(event->type() == QEvent::KeyPress){

        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        switch(keyEvent->key()){
        case Qt::Key_Tab: {
            ui->twPitchSettings->selectionModel()->clearSelection();
            ui->twPitchEnvelop->selectionModel()->clearSelection();
            ui->twPitchOscillator1->selectionModel()->clearSelection();
            ui->twController->selectionModel()->clearSelection();
            ui->twPitchOscillator2->selectionModel()->clearSelection();

            if(obj == ui->twPitchSettings->cellWidget(ui->twPitchSettings->rowCount()-1,0)){
                ui->twPitchEnvelop->selectRow(0);
                ui->twPitchEnvelop->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twPitchEnvelop->cellWidget(ui->twPitchEnvelop->rowCount()-1,0)){
                ui->twPitchOscillator1->selectRow(0);
                ui->twPitchOscillator1->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twPitchOscillator1->cellWidget(ui->twPitchOscillator1->rowCount()-1,0)){
                ui->twController->selectRow(0);
                ui->twController->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twController->cellWidget(ui->twController->rowCount()-1,0)){
                ui->twPitchOscillator2->selectRow(0);
                ui->twPitchOscillator2->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twPitchOscillator2->cellWidget(ui->twPitchOscillator2->rowCount()-1,0)){
                ui->twPitchSettings->selectRow(0);
                ui->twPitchSettings->cellWidget(0,0)->setFocus();
                return true;
            }else{
                return QObject::eventFilter(obj, event);
            }
        }
        case Qt::Key_Backtab: {
            ui->twPitchSettings->selectionModel()->clearSelection();
            ui->twPitchEnvelop->selectionModel()->clearSelection();
            ui->twPitchOscillator1->selectionModel()->clearSelection();
            ui->twController->selectionModel()->clearSelection();
            ui->twPitchOscillator2->selectionModel()->clearSelection();

            if(obj == ui->twPitchSettings->cellWidget(0,0)){
                ui->twPitchOscillator2->selectRow(ui->twPitchOscillator2->rowCount()-1);
                ui->twPitchOscillator2->cellWidget(ui->twPitchOscillator2->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twPitchEnvelop->cellWidget(0,0)){
                ui->twPitchSettings->selectRow(ui->twPitchSettings->rowCount()-1);
                ui->twPitchSettings->cellWidget(ui->twPitchSettings->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twPitchOscillator1->cellWidget(0,0)){
                ui->twPitchEnvelop->selectRow(ui->twPitchEnvelop->rowCount()-1);
                ui->twPitchEnvelop->cellWidget(ui->twPitchEnvelop->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twController->cellWidget(0,0)){
                ui->twPitchOscillator1->selectRow(ui->twPitchOscillator1->rowCount()-1);
                ui->twPitchOscillator1->cellWidget(ui->twPitchOscillator1->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twPitchOscillator2->cellWidget(0,0)){
                ui->twController->selectRow(ui->twController->rowCount()-1);
                ui->twController->cellWidget(ui->twController->rowCount()-1,0)->setFocus();
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

        ui->twPitchSettings->selectionModel()->clearSelection();
        ui->twPitchEnvelop->selectionModel()->clearSelection();
        ui->twPitchOscillator1->selectionModel()->clearSelection();
        ui->twController->selectionModel()->clearSelection();
        ui->twPitchOscillator2->selectionModel()->clearSelection();

        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);

        if(obj == ui->twPitchSettings->verticalHeader()->viewport()){
            int rowIndex = ui->twPitchSettings->rowAt(mouseEvent->pos().y());
            ui->twPitchSettings->selectRow(rowIndex);
            ui->twPitchSettings->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twPitchEnvelop->verticalHeader()->viewport()){
            int rowIndex = ui->twPitchEnvelop->rowAt(mouseEvent->pos().y());
            ui->twPitchEnvelop->selectRow(rowIndex);
            ui->twPitchEnvelop->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twPitchOscillator1->verticalHeader()->viewport()){
            int rowIndex = ui->twPitchOscillator1->rowAt(mouseEvent->pos().y());
            ui->twPitchOscillator1->selectRow(rowIndex);
            ui->twPitchOscillator1->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twController->verticalHeader()->viewport()){
            int rowIndex = ui->twController->rowAt(mouseEvent->pos().y());
            ui->twController->selectRow(rowIndex);
            ui->twController->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twPitchOscillator2->verticalHeader()->viewport()){
            int rowIndex = ui->twPitchOscillator2->rowAt(mouseEvent->pos().y());
            ui->twPitchOscillator2->selectRow(rowIndex);
            ui->twPitchOscillator2->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj->parent() == ui->twPitchSettings->cellWidget(0,0) ||
                 obj == ui->twPitchSettings->cellWidget(0,0)){
            ui->twPitchSettings->selectRow(0);
            ui->twPitchSettings->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twPitchSettings->cellWidget(1,0) ||
                 obj == ui->twPitchSettings->cellWidget(1,0)){
            ui->twPitchSettings->selectRow(1);
            ui->twPitchSettings->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twPitchSettings->cellWidget(2,0) ||
                 obj == ui->twPitchSettings->cellWidget(2,0)){
            ui->twPitchSettings->selectRow(2);
            ui->twPitchSettings->cellWidget(2,0)->setFocus();
        }else if(obj->parent() == ui->twPitchSettings->cellWidget(3,0) ||
                 obj == ui->twPitchSettings->cellWidget(3,0)){
            ui->twPitchSettings->selectRow(3);
            ui->twPitchSettings->cellWidget(3,0)->setFocus();
        }else if(obj->parent() == ui->twPitchEnvelop->cellWidget(0,0) ||
                 obj == ui->twPitchEnvelop->cellWidget(0,0)){
            ui->twPitchEnvelop->selectRow(0);
            ui->twPitchEnvelop->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twPitchEnvelop->cellWidget(1,0) ||
                 obj == ui->twPitchEnvelop->cellWidget(1,0)){
            ui->twPitchEnvelop->selectRow(1);
            ui->twPitchEnvelop->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twPitchOscillator1->cellWidget(0,0) ||
                 obj == ui->twPitchOscillator1->cellWidget(0,0)){
            ui->twPitchOscillator1->selectRow(0);
            ui->twPitchOscillator1->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twPitchOscillator1->cellWidget(1,0) ||
                 obj == ui->twPitchOscillator1->cellWidget(1,0)){
            ui->twPitchOscillator1->selectRow(1);
            ui->twPitchOscillator1->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twPitchOscillator1->cellWidget(2,0) ||
                 obj == ui->twPitchOscillator1->cellWidget(2,0)){
            ui->twPitchOscillator1->selectRow(2);
            ui->twPitchOscillator1->cellWidget(2,0)->setFocus();
        }else if(obj->parent() == ui->twController->cellWidget(0,0) ||
                 obj == ui->twController->cellWidget(0,0)){
            ui->twController->selectRow(0);
            ui->twController->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twPitchOscillator2->cellWidget(0,0) ||
                 obj == ui->twPitchOscillator2->cellWidget(0,0)){
            ui->twPitchOscillator2->selectRow(0);
            ui->twPitchOscillator2->cellWidget(0,0)->setFocus();
        }
    }
    return QObject::eventFilter(obj, event);
}
