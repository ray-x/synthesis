#include "soundeditform.h"
#include "ui_soundeditform.h"

#include <QDebug>

SoundEditForm::SoundEditForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SoundEditForm)
{
    ui->setupUi(this);

    m_sampleEnabled1 = false;
    m_sampleEnabled2 = false;
    m_sampleEnabled3 = false;
    m_sampleEnabled4 = false;

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

    if(sender() == ui->pbAmpEdit ||
            sender() == ui->pbCancel ||
            sender() == ui->pbSave){
        m_ampSettingsForm->show();
        ui->lbWidgetTitle->setText("AMP EDIT");
    }else if(sender() == ui->pbFilterEdit){
        m_filterSettingsForm->show();
        ui->lbWidgetTitle->setText("FILTER EDIT");
    }else if(sender() == ui->pbPitchEdit){
        m_pitchSettingsForm->show();
        ui->lbWidgetTitle->setText("PITCH EDIT");
    }else if(sender() == ui->pbMiscEdit){
        m_miscSettingsFrom->show();
        ui->lbWidgetTitle->setText("MISC");
    }
}

void SoundEditForm::selectSample1()
{
    clearSelectedSample();
    ui->frameSample1->setStyleSheet("#frameSample1{border: 3px solid red}");
}

void SoundEditForm::selectSample2()
{
    clearSelectedSample();
    ui->frameSample2->setStyleSheet("#frameSample2{border: 3px solid red}");
}

void SoundEditForm::selectSample3()
{
    clearSelectedSample();
    ui->frameSample3->setStyleSheet("#frameSample3{border: 3px solid red}");
}

void SoundEditForm::selectSample4()
{
    clearSelectedSample();
    ui->frameSample4->setStyleSheet("#frameSample4{border: 3px solid red}");
}

