#include "miscsettingsform.h"
#include "ui_miscsettingsform.h"

#include <QFile>
#include <QDebug>
#include <QTableWidgetItem>
#include <QListView>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QScrollBar>
#include "gigfile.h"


void MiscSettingsForm::show()
{
    gigFile *gigFileObj= gigFile::instance();

    gig::File *gigfd=gigFileObj->m_gigO[gigFileObj->idx];
    gig::DimensionRegion *pDimensionRegion;
    if (gigfd!=nullptr) {
        gig::Instrument *pInstrument = gigfd->GetFirstInstrument();
        gig::Region *pRegion=pInstrument->GetFirstRegion();
        pDimensionRegion = pRegion->pDimensionRegions[0];
    }else
        pDimensionRegion=nullptr;

    int index;

    if (pDimensionRegion==nullptr) 
        goto end;

    switch (pDimensionRegion->VelocityResponseCurve) {
        case gig::curve_type_nonlinear : index=0; break;
        case gig::curve_type_linear : index=1; break;
        case gig::curve_type_special : index=2; break;
        default:index=0;
    }

    m_cbVelRespCurve->setCurrentIndex(index);


    switch (pDimensionRegion->ReleaseVelocityResponseCurve) {
        case gig::curve_type_nonlinear : index=0; break;
        case gig::curve_type_linear : index=1; break;
        case gig::curve_type_special : index=2; break;
        default:index=0;
    }

   switch (pDimensionRegion->ReleaseVelocityResponseCurve) {
       case gig::dim_bypass_ctrl_none : index=0; break;
       case gig::dim_bypass_ctrl_94 : index=1; break;
       case gig::dim_bypass_ctrl_95 : index=2; break;
       default:index=0;
    }
    m_cbDimBaypass->setCurrentIndex(pDimensionRegion->DimensionBypass);
    m_sbVelRespDepth->setValue(pDimensionRegion->ReleaseVelocityResponseDepth);
    m_sbVelRespCurveScaling->setValue(pDimensionRegion->VelocityResponseCurveScaling);
    m_sbRelVelRespDepth->setValue(pDimensionRegion->ReleaseVelocityResponseDepth);
    m_sbRelTrigDecay->setValue(pDimensionRegion->ReleaseTriggerDecay);
    m_chkSelfMask->setChecked(pDimensionRegion->SelfMask);
    m_chkSustainDefeat->setChecked(pDimensionRegion->SustainDefeat);
    m_chkDecode->setChecked(pDimensionRegion->MSDecode);
    
end:
    QWidget::show();
}


MiscSettingsForm::MiscSettingsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MiscSettingsForm)
{
    ui->setupUi(this);

    gigFile *gigFileObj= gigFile::instance();
    //fixme::idx=1
    int idx=1;
    gig::File *gigfd=gigFileObj->m_gigO[idx];
    gig::Instrument* pInstrument ;//= gigfd->GetFirstInstrument();
    gig::Region *pRegion;//=pInstrument->GetFirstRegion();
    gig::DimensionRegion* pDimensionRegion=nullptr;
    //pDimensionRegion = pRegion->pDimensionRegions[idx];


    m_cbVelRespCurve          = new QComboBox(this);
    m_cbVelRespCurve->addItem("Nonlinear");
    m_cbVelRespCurve->addItem("Linear");
    m_cbVelRespCurve->addItem("Special");
    m_cbVelRespCurve->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_cbVelRespCurve->setCurrentIndex(pDimensionRegion->VelocityResponseCurve);
    connect(m_cbVelRespCurve, SIGNAL(currentIndexChanged(int)), gigFileObj, SLOT(SetVelocityResponseCurvef(int)));

    m_cbRelVelRespCurve       = new QComboBox(this);
    m_cbRelVelRespCurve->addItem("Nonlinear");
    m_cbRelVelRespCurve->addItem("Linear");
    m_cbRelVelRespCurve->addItem("Special");
    m_cbRelVelRespCurve->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_cbRelVelRespCurve->setCurrentIndex(pDimensionRegion->ReleaseVelocityResponseCurve);
    connect(m_cbRelVelRespCurve, SIGNAL(currentIndexChanged(int)), gigFileObj, SLOT(SetReleaseVelocityResponseCurvef(int)));

    m_cbDimBaypass            = new QComboBox(this);
    m_cbDimBaypass->addItem("None");
    m_cbDimBaypass->addItem("Effect4Depth");
    m_cbDimBaypass->addItem("Effect5Depth");
    m_cbDimBaypass->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_cbDimBaypass->setCurrentIndex(pDimensionRegion->DimensionBypass);
    connect(m_cbDimBaypass, SIGNAL(currentIndexChanged(int)), gigFileObj, SLOT(SetDimensionBypass(int)));

    m_sbVelRespDepth          = new QSpinBox(this);
    m_sbVelRespDepth->setMaximum(4);
    m_sbVelRespDepth->setMinimum(0);
    m_sbVelRespDepth->setAlignment(Qt::AlignHCenter);
    m_sbVelRespDepth->installEventFilter(this);
    m_sbVelRespDepth->children().at(0)->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_sbVelRespDepth->setValue(pDimensionRegion->ReleaseVelocityResponseDepth);
    connect(m_sbVelRespDepth, SIGNAL(valueChanged(int)), gigFileObj, SLOT(SetReleaseVelocityResponseDepthf(int)));

    m_sbVelRespCurveScaling   = new QSpinBox(this);
    m_sbVelRespCurveScaling->setMaximum(127);
    m_sbVelRespCurveScaling->setMinimum(0);
    m_sbVelRespCurveScaling->setAlignment(Qt::AlignHCenter);
    m_sbVelRespCurveScaling->installEventFilter(this);
    m_sbVelRespCurveScaling->children().at(0)->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_sbVelRespCurveScaling->setValue(pDimensionRegion->VelocityResponseCurveScaling);
    connect(m_sbVelRespCurveScaling, SIGNAL(valueChanged(int)), gigFileObj, SLOT(SetVelocityResponseCurveScalingf(int)));


    m_sbRelVelRespDepth      = new QSpinBox(this);
    m_sbRelVelRespDepth->setMaximum(4);
    m_sbRelVelRespDepth->setMinimum(0);
    m_sbRelVelRespDepth->setAlignment(Qt::AlignHCenter);
    m_sbRelVelRespDepth->installEventFilter(this);
    m_sbRelVelRespDepth->children().at(0)->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_sbRelVelRespDepth->setValue(pDimensionRegion->ReleaseVelocityResponseDepth);
    connect(m_sbRelVelRespDepth, SIGNAL(valueChanged(int)), gigFileObj, SLOT(SetReleaseVelocityResponseDepthf(int)));

    m_sbRelTrigDecay          = new QSpinBox(this);
    m_sbRelTrigDecay->setMaximum(8);
    m_sbRelTrigDecay->setMinimum(0);
    m_sbRelTrigDecay->setAlignment(Qt::AlignHCenter);
    m_sbRelTrigDecay->installEventFilter(this);
    m_sbRelTrigDecay->children().at(0)->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_sbRelTrigDecay->setValue(pDimensionRegion->ReleaseTriggerDecay);
    connect(m_sbRelTrigDecay, SIGNAL(valueChanged(int)), gigFileObj, SLOT(setReleaseTriggerDecay(int)));

    m_chkSelfMask             = new QCheckBox(this);
    m_chkSelfMask->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_chkSelfMask->setChecked(pDimensionRegion->SelfMask);
    connect(m_chkSelfMask, SIGNAL(stateChanged(int)), gigFileObj, SLOT(setSelfMask(int)));

    m_chkSustainDefeat        = new QCheckBox(this);
    m_chkSustainDefeat->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_chkSustainDefeat->setChecked(pDimensionRegion->SustainDefeat);
    connect(m_chkSustainDefeat, SIGNAL(stateChanged(int)), gigFileObj, SLOT(setSustainDefeat(int)));


    m_chkDecode               = new QCheckBox(this);
    m_chkDecode->installEventFilter(this);
    if (pDimensionRegion!=nullptr) m_chkDecode->setChecked(pDimensionRegion->MSDecode);
    connect(m_chkDecode, SIGNAL(stateChanged(int)), gigFileObj, SLOT(setMSDecode(int)));


    ui->twVelocityRespCurve->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twVelocityRespCurve->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twVelocityRespCurve->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->twVelocityRespCurve->verticalHeader()->setDefaultSectionSize(42);
    ui->twVelocityRespCurve->setCellWidget(0,0,m_cbVelRespCurve);
    ui->twVelocityRespCurve->verticalHeader()->viewport()->installEventFilter(this);

    ui->twRelVelRespCurve->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twRelVelRespCurve->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twRelVelRespCurve->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->twRelVelRespCurve->verticalHeader()->setDefaultSectionSize(42);
    ui->twRelVelRespCurve->setCellWidget(0,0,m_cbRelVelRespCurve);
    ui->twRelVelRespCurve->verticalHeader()->viewport()->installEventFilter(this);

    ui->twDimByPass->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twDimByPass->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twDimByPass->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->twDimByPass->verticalHeader()->setDefaultSectionSize(42);
    ui->twDimByPass->setCellWidget(0,0,m_cbDimBaypass);
    ui->twDimByPass->verticalHeader()->viewport()->installEventFilter(this);

    ui->twVelocityResp->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twVelocityResp->verticalHeader()->setDefaultSectionSize(42);
    ui->twVelocityResp->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twVelocityResp->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->twVelocityResp->setCellWidget(0,0,m_sbVelRespDepth);
    ui->twVelocityResp->setCellWidget(1,0,m_sbVelRespCurveScaling);
    ui->twVelocityResp->verticalHeader()->viewport()->installEventFilter(this);

    ui->twRelVelResp->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twRelVelResp->verticalHeader()->setDefaultSectionSize(42);
    ui->twRelVelResp->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twRelVelResp->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->twRelVelResp->setCellWidget(0,0,m_sbRelVelRespDepth);
    ui->twRelVelResp->setCellWidget(1,0,m_sbRelTrigDecay);
    ui->twRelVelResp->verticalHeader()->viewport()->installEventFilter(this);

    ui->twRelVelResp2->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twRelVelResp2->verticalHeader()->setDefaultSectionSize(42);
    ui->twRelVelResp2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twRelVelResp2->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->twRelVelResp2->setCellWidget(0,0,m_chkSelfMask);
    ui->twRelVelResp2->setCellWidget(1,0,m_chkSustainDefeat);
    ui->twRelVelResp2->setCellWidget(2,0,m_chkDecode);
    ui->twRelVelResp2->verticalHeader()->viewport()->installEventFilter(this);

    ui->scrollArea->verticalScrollBar()->installEventFilter(this);
    ui->frameBlank->installEventFilter(this);
    ui->frameBlank2->installEventFilter(this);

}

MiscSettingsForm::~MiscSettingsForm()
{
    delete ui;
}

bool MiscSettingsForm::eventFilter(QObject *obj, QEvent *event)
{
    if(event->type() == QEvent::KeyPress){
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        switch(keyEvent->key()){
            case Qt::Key_Tab: {
                ui->twVelocityRespCurve->selectionModel()->clearSelection();
                ui->twVelocityResp->selectionModel()->clearSelection();
                ui->twRelVelRespCurve->selectionModel()->clearSelection();
                ui->twRelVelResp->selectionModel()->clearSelection();
                ui->twDimByPass->selectionModel()->clearSelection();
                ui->twRelVelResp2->selectionModel()->clearSelection();

                if(obj == ui->twVelocityRespCurve->cellWidget(ui->twVelocityRespCurve->rowCount()-1,0)){
                    ui->twVelocityResp->selectRow(0);
                    ui->twVelocityResp->cellWidget(0,0)->setFocus();
                    return true;
                }else if(obj == ui->twVelocityResp->cellWidget(ui->twVelocityResp->rowCount()-1,0)){
                    ui->twRelVelRespCurve->selectRow(0);
                    ui->twRelVelRespCurve->cellWidget(0,0)->setFocus();
                    return true;
                }if(obj == ui->twRelVelRespCurve->cellWidget(ui->twRelVelRespCurve->rowCount()-1,0)){
                    ui->twRelVelResp->selectRow(0);
                    ui->twRelVelResp->cellWidget(0,0)->setFocus();
                    return true;
                }if(obj == ui->twRelVelResp->cellWidget(ui->twRelVelResp->rowCount()-1,0)){
                    ui->twDimByPass->selectRow(0);
                    ui->twDimByPass->cellWidget(0,0)->setFocus();
                    return true;
                }if(obj == ui->twDimByPass->cellWidget(ui->twDimByPass->rowCount()-1,0)){
                    ui->twRelVelResp2->selectRow(0);
                    ui->twRelVelResp2->cellWidget(0,0)->setFocus();
                    return true;
                }if(obj == ui->twRelVelResp2->cellWidget(ui->twRelVelResp2->rowCount()-1,0)){
                    ui->twVelocityRespCurve->selectRow(0);
                    ui->twVelocityRespCurve->cellWidget(0,0)->setFocus();
                    return true;
                }else{
                    return QObject::eventFilter(obj, event);
                }
            }
            case Qt::Key_Backtab: {
                ui->twVelocityRespCurve->selectionModel()->clearSelection();
                ui->twVelocityResp->selectionModel()->clearSelection();
                ui->twRelVelRespCurve->selectionModel()->clearSelection();
                ui->twRelVelResp->selectionModel()->clearSelection();
                ui->twDimByPass->selectionModel()->clearSelection();
                ui->twRelVelResp2->selectionModel()->clearSelection();

                if(obj == ui->twVelocityRespCurve->cellWidget(0,0)){
                    ui->twRelVelResp2->selectRow(ui->twRelVelResp2->rowCount()-1);
                    ui->twRelVelResp2->cellWidget(ui->twRelVelResp2->rowCount()-1,0)->setFocus();
                    return true;
                }else if(obj == ui->twVelocityResp->cellWidget(0,0)){
                    ui->twVelocityRespCurve->selectRow(ui->twVelocityRespCurve->rowCount()-1);
                    ui->twVelocityRespCurve->cellWidget(ui->twVelocityRespCurve->rowCount()-1,0)->setFocus();
                    return true;
                }if(obj == ui->twRelVelRespCurve->cellWidget(0,0)){
                    ui->twVelocityResp->selectRow(ui->twVelocityResp->rowCount()-1);
                    ui->twVelocityResp->cellWidget(ui->twVelocityResp->rowCount()-1,0)->setFocus();
                    return true;
                }if(obj == ui->twRelVelResp->cellWidget(0,0)){
                    ui->twRelVelRespCurve->selectRow(ui->twRelVelRespCurve->rowCount()-1);
                    ui->twRelVelRespCurve->cellWidget(ui->twRelVelRespCurve->rowCount()-1,0)->setFocus();
                    return true;
                }if(obj == ui->twDimByPass->cellWidget(0,0)){
                    ui->twRelVelResp->selectRow(ui->twRelVelResp->rowCount()-1);
                    ui->twRelVelResp->cellWidget(ui->twRelVelResp->rowCount()-1,0)->setFocus();
                    return true;
                }if(obj == ui->twRelVelResp2->cellWidget(0,0)){
                    ui->twDimByPass->selectRow(ui->twDimByPass->rowCount()-1);
                    ui->twDimByPass->cellWidget(ui->twDimByPass->rowCount()-1,0)->setFocus();
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

        ui->twVelocityRespCurve->selectionModel()->clearSelection();
        ui->twVelocityResp->selectionModel()->clearSelection();
        ui->twRelVelRespCurve->selectionModel()->clearSelection();
        ui->twRelVelResp->selectionModel()->clearSelection();
        ui->twDimByPass->selectionModel()->clearSelection();
        ui->twRelVelResp2->selectionModel()->clearSelection();

        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);

        if(obj == ui->twVelocityRespCurve->verticalHeader()->viewport()){
            int rowIndex = ui->twVelocityRespCurve->rowAt(mouseEvent->pos().y());
            ui->twVelocityRespCurve->selectRow(rowIndex);
            ui->twVelocityRespCurve->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twVelocityResp->verticalHeader()->viewport()){
            int rowIndex = ui->twVelocityResp->rowAt(mouseEvent->pos().y());
            ui->twVelocityResp->selectRow(rowIndex);
            ui->twVelocityResp->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twRelVelRespCurve->verticalHeader()->viewport()){
            int rowIndex = ui->twRelVelRespCurve->rowAt(mouseEvent->pos().y());
            ui->twRelVelRespCurve->selectRow(rowIndex);
            ui->twRelVelRespCurve->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twRelVelResp->verticalHeader()->viewport()){
            int rowIndex = ui->twRelVelResp->rowAt(mouseEvent->pos().y());
            ui->twRelVelResp->selectRow(rowIndex);
            ui->twRelVelResp->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twDimByPass->verticalHeader()->viewport()){
            int rowIndex = ui->twDimByPass->rowAt(mouseEvent->pos().y());
            ui->twDimByPass->selectRow(rowIndex);
            ui->twDimByPass->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twRelVelResp2->verticalHeader()->viewport()){
            int rowIndex = ui->twRelVelResp2->rowAt(mouseEvent->pos().y());
            ui->twRelVelResp2->selectRow(rowIndex);
            ui->twRelVelResp2->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj->parent() == ui->twVelocityRespCurve->cellWidget(0,0) ||
                 obj == ui->twVelocityRespCurve->cellWidget(0,0)){
            ui->twVelocityRespCurve->selectRow(0);
            ui->twVelocityRespCurve->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twVelocityResp->cellWidget(0,0) ||
                 obj == ui->twVelocityResp->cellWidget(0,0)){
            ui->twVelocityResp->selectRow(0);
            ui->twVelocityResp->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twVelocityResp->cellWidget(1,0) ||
                 obj == ui->twVelocityResp->cellWidget(1,0)){
            ui->twVelocityResp->selectRow(1);
            ui->twVelocityResp->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twRelVelRespCurve->cellWidget(0,0) ||
                 obj == ui->twRelVelRespCurve->cellWidget(0,0)){
            ui->twRelVelRespCurve->selectRow(0);
            ui->twRelVelRespCurve->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twRelVelResp->cellWidget(0,0) ||
                 obj == ui->twRelVelResp->cellWidget(0,0)){
            ui->twRelVelResp->selectRow(0);
            ui->twRelVelResp->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twRelVelResp->cellWidget(1,0) ||
                 obj == ui->twRelVelResp->cellWidget(1,0)){
            ui->twRelVelResp->selectRow(1);
            ui->twRelVelResp->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twDimByPass->cellWidget(0,0) ||
                 obj == ui->twDimByPass->cellWidget(0,0)){
            ui->twDimByPass->selectRow(0);
            ui->twDimByPass->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twRelVelResp2->cellWidget(0,0) ||
                 obj == ui->twRelVelResp2->cellWidget(0,0)){
            ui->twRelVelResp2->selectRow(0);
            ui->twRelVelResp2->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twRelVelResp2->cellWidget(1,0) ||
                 obj == ui->twRelVelResp2->cellWidget(1,0)){
            ui->twRelVelResp2->selectRow(1);
            ui->twRelVelResp2->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twRelVelResp2->cellWidget(2,0) ||
                 obj == ui->twRelVelResp2->cellWidget(2,0)){
            ui->twRelVelResp2->selectRow(2);
            ui->twRelVelResp2->cellWidget(2,0)->setFocus();
        }
    }
    return QObject::eventFilter(obj, event);
}
