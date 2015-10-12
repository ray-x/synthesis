#include "soundeditform.h"
#include "ui_soundeditform.h"

#include <QDebug>
#include <gigfile.h>

SoundEditForm::SoundEditForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SoundEditForm)
{
    ui->setupUi(this);
    ui_tab=0;

    gigFile *gigFileObj= gigFile::instance();
    lbSampleName[0]=ui->lbSampleName1;
    lbSampleName[1]=ui->lbSampleName2;
    lbSampleName[2]=ui->lbSampleName3;
    lbSampleName[3]=ui->lbSampleName4;
    for (int idx=0;idx<4;idx++) {
        gig::File *gigfd = gigFileObj->m_gigO[idx];
        if (gigfd) {
            gig::Instrument *pInstrument = gigfd->GetFirstInstrument();
            gig::Region *pRegion=pInstrument->GetFirstRegion();
            gig::DimensionRegion* pDimensionRegion=pRegion->pDimensionRegions[idx];
            m_sampleEnabled[idx]=true;
            QString name=gigFileObj->m_gigName[idx];
            if (name.length()>=10) {
                QStringList nl=name.split(" ");
                if (nl[1].length()>=5) {
                    lbSampleName[idx]->setText(nl[1]);
                }else{
                    lbSampleName[idx]->setText(name);
                }
            } else {
                lbSampleName[idx]->setText(name);
            }
            //lbSampleName[idx]->setText(QString::fromStdString(gigfd->GetFirstInstrument()->pInfo->Name));
        }else{
            m_sampleEnabled[idx]=false;
            lbSampleName[idx]->setText("EMPTY");
        }
    }
    
    m_ampSettingsForm = new AmpSettingsForm(this);
    m_ampSettingsForm->move(199,11);
    m_ampSettingsForm->show();

    m_filterSettingsForm = new FilterSettingsForm(this);
    m_filterSettingsForm->move(199,11);
    m_filterSettingsForm->hide();

    m_pitchSettingsForm = new PitchSettingsForm(this);
    m_pitchSettingsForm->move(199,11);
    m_pitchSettingsForm->hide();

    m_miscSettingsFrom = new MiscSettingsForm(this);
    m_miscSettingsFrom->move(199,11);
    m_miscSettingsFrom->hide();

    ui->frameSample1->installEventFilter(this);
    ui->frameSample2->installEventFilter(this);
    ui->frameSample3->installEventFilter(this);
    ui->frameSample4->installEventFilter(this);

    // default selection
    selectSample1();

    connect(ui->pbAmpEdit,SIGNAL(clicked()),this, SLOT(changeSettings()));
    connect(ui->pbFilterEdit,SIGNAL(clicked()),this, SLOT(changeSettings()));
    connect(ui->pbPitchEdit,SIGNAL(clicked()),this, SLOT(changeSettings()));
    connect(ui->pbMiscEdit,SIGNAL(clicked()),this, SLOT(changeSettings()));
    connect(ui->pbCancel,SIGNAL(clicked()),this, SLOT(changeSettings()));
    connect(ui->pbSave,SIGNAL(clicked()),this, SLOT(changeSettings()));
    connect(ui->pbCancel,SIGNAL(clicked()),this, SLOT(hide()));
    connect(ui->pbCancel,SIGNAL(clicked()),this, SLOT(selectSample1()));
    connect(ui->pbSave,SIGNAL(clicked()),this, SLOT(hide()));
    connect(ui->pbSave,SIGNAL(clicked()),this, SLOT(selectSample1()));
    //connect(this,SIGNAL(showEdit()),m_ampSettingsForm,SLOT(show()));
}

void SoundEditForm::show() 
{
	gigFile *gigFileObj= gigFile::instance();
    for (int idx=0;idx<4;idx++) {
        gig::File *gigfd = gigFileObj->m_gigO[idx];
        if (gigfd) {
            gig::Instrument *pInstrument = gigfd->GetFirstInstrument();
            gig::Region *pRegion=pInstrument->GetFirstRegion();
            gig::DimensionRegion* pDimensionRegion=pRegion->pDimensionRegions[idx];
            m_sampleEnabled[idx]=true;
            QString name=gigFileObj->m_gigName[idx];
            if (name.length()>=10) {
                QStringList nl=name.split(" ");
                if (nl[1].length()>=5) {
                    lbSampleName[idx]->setText(nl[1]);
                }else{
                    lbSampleName[idx]->setText(name);
                }
            } else {
                lbSampleName[idx]->setText(name);
            }
            //lbSampleName[idx]->setText(QString::fromStdString(gigfd->GetFirstInstrument()->pInfo->Name));
        }else{
            m_sampleEnabled[idx]=false;
            lbSampleName[idx]->setText("EMPTY");
        }
    }
    QWidget::show();
}


SoundEditForm::~SoundEditForm()
{
    delete ui;
}

bool SoundEditForm::eventFilter(QObject *obj, QEvent *event)
{
    if(event->type() == QEvent::MouseButtonRelease){
        if(obj == ui->frameSample1){
            selectSample1();
        }else if(obj == ui->frameSample2){
            selectSample2();
        }else if(obj == ui->frameSample3){
            selectSample3();
        }else if(obj == ui->frameSample4){
            selectSample4();
        }
    }

    return QWidget::eventFilter(obj,event);
}

void SoundEditForm::clearSelectedSample()
{
    ui->frameSample1->setStyleSheet("#frameSample1{border:1px solid white}");
    ui->frameSample2->setStyleSheet("#frameSample2{border:1px solid white}");
    ui->frameSample3->setStyleSheet("#frameSample3{border:1px solid white}");
    ui->frameSample4->setStyleSheet("#frameSample4{border:1px solid white}");
}


void SoundEditForm::changeSettings()
{
    m_ampSettingsForm->hide();
    m_filterSettingsForm->hide();
    m_pitchSettingsForm->hide();
    m_miscSettingsFrom->hide();

    gigFile *gigFileObj= gigFile::instance();
    for (int i = 0; i<4;i++ ) {
        if (gigFileObj->save[i]) {
            gigFileObj->m_gigO[i]->Save(gigFileObj->bankfile[i].toStdString());
            gigFileObj->save[i]=false;
        }
    }


    if(sender() == ui->pbAmpEdit ||
            sender() == ui->pbCancel ||
            sender() == ui->pbSave){
        ui_tab=0;
        m_ampSettingsForm->show();
        ui->lbWidgetTitle->setText("AMP EDIT");
    }else if(sender() == ui->pbFilterEdit){
        ui_tab=1;
        m_filterSettingsForm->show();
        ui->lbWidgetTitle->setText("FILTER EDIT");
    }else if(sender() == ui->pbPitchEdit){
        ui_tab=2;
        m_pitchSettingsForm->show();
        ui->lbWidgetTitle->setText("PITCH EDIT");
    }else if(sender() == ui->pbMiscEdit){
        ui_tab=3;
        m_miscSettingsFrom->show();
        ui->lbWidgetTitle->setText("MISC");
    }
}

void SoundEditForm::selectSample1()
{
    clearSelectedSample();
    gigFile *gigFileObj= gigFile::instance();
    gigFileObj->idx=0;
    ui->frameSample1->setStyleSheet("#frameSample1{border: 3px solid red}");
    showEdit();
}

void SoundEditForm::showEdit()
{
    switch (ui_tab) {
    case 0:
        m_ampSettingsForm->show();
        m_filterSettingsForm->hide();
        m_pitchSettingsForm->hide();
        m_miscSettingsFrom->hide();
        break;
    case 1:
        m_ampSettingsForm->hide();
        m_filterSettingsForm->show();
        m_pitchSettingsForm->hide();
        m_miscSettingsFrom->hide();
        break;
    case 2:
        m_ampSettingsForm->hide();
        m_filterSettingsForm->hide();
        m_pitchSettingsForm->show();
        m_miscSettingsFrom->hide();
        break;
    case 3:
        m_ampSettingsForm->hide();
        m_filterSettingsForm->hide();
        m_pitchSettingsForm->hide();
        m_miscSettingsFrom->show();
        break;
    }
}

void SoundEditForm::selectSample2()
{
    clearSelectedSample();
    gigFile *gigFileObj= gigFile::instance();
    gigFileObj->idx=1;
    ui->frameSample2->setStyleSheet("#frameSample2{border: 3px solid red}");
	showEdit();
}

void SoundEditForm::selectSample3()
{
    clearSelectedSample();
    gigFile *gigFileObj= gigFile::instance();
    gigFileObj->idx=2;
    ui->frameSample3->setStyleSheet("#frameSample3{border: 3px solid red}");
	showEdit();
}

void SoundEditForm::selectSample4()
{
    clearSelectedSample();
    gigFile *gigFileObj= gigFile::instance();
    gigFileObj->idx=3;
    ui->frameSample4->setStyleSheet("#frameSample4{border: 3px solid red}");
	showEdit();
}

