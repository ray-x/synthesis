#include "effectswidget.h"
#include "ui_effectswidget.h"

EffectsWidget::EffectsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EffectsWidget)
{
    ui->setupUi(this);
    QStringList list;
    list.append("L/R");
    list.append("IFX1");
    list.append("IFX2");
    list.append("IFX3");
    list.append("IFX4");
    list.append("OFF");
    ui->cbEffectLink1->addItems(list);
    ui->cbEffectLink2->addItems(list);
    ui->cbEffectLink3->addItems(list);
    ui->cbEffectLink4->addItems(list);

    // Dial
    connect(ui->dialMFX1,SIGNAL(valueChanged(int)),ui->spMFX1,SLOT(setValue(int)));
    connect(ui->dialMFX2,SIGNAL(valueChanged(int)),ui->spMFX2,SLOT(setValue(int)));
    // spinBox MFX Volume
    connect(ui->spMFX1, SIGNAL(valueChanged(int)),ui->dialMFX1,SLOT(setValue(int)));
    connect(ui->spMFX2, SIGNAL(valueChanged(int)),ui->dialMFX2,SLOT(setValue(int)));
    // Sample Effect Link
    connect(ui->cbEffectLink1,SIGNAL(currentIndexChanged(int)),this,SLOT(emitSampleLinkedEffect(int)));
    connect(ui->cbEffectLink2,SIGNAL(currentIndexChanged(int)),this,SLOT(emitSampleLinkedEffect(int)));
    connect(ui->cbEffectLink3,SIGNAL(currentIndexChanged(int)),this,SLOT(emitSampleLinkedEffect(int)));
    connect(ui->cbEffectLink4,SIGNAL(currentIndexChanged(int)),this,SLOT(emitSampleLinkedEffect(int)));
    // Effect Effect Link
    connect(ui->pbEffectLink1,SIGNAL(clicked(bool)), this, SLOT(emitEffectLinkState(bool)));
    connect(ui->pbEffectLink2,SIGNAL(clicked(bool)), this, SLOT(emitEffectLinkState(bool)));
    connect(ui->pbEffectLink3,SIGNAL(clicked(bool)), this, SLOT(emitEffectLinkState(bool)));
    connect(ui->pbEffectLink4,SIGNAL(clicked(bool)), this, SLOT(emitEffectLinkState(bool)));
    // Master Effect Link
    connect(ui->pbMasterEffectLink1,SIGNAL(clicked(bool)),this,SLOT(emitMasterEffectLinkState(bool)));
    connect(ui->pbMasterEffectLink2,SIGNAL(clicked(bool)),this,SLOT(emitMasterEffectLinkState(bool)));
    // Effect PB
    connect(ui->pbEffect1,SIGNAL(clicked()), this, SLOT(emitEffectPbClicked()));
    connect(ui->pbEffect2,SIGNAL(clicked()), this, SLOT(emitEffectPbClicked()));
    connect(ui->pbEffect3,SIGNAL(clicked()), this, SLOT(emitEffectPbClicked()));
    connect(ui->pbEffect4,SIGNAL(clicked()), this, SLOT(emitEffectPbClicked()));
    connect(ui->pbMasterEffect1,SIGNAL(clicked()), this, SLOT(emitEffectPbClicked()));
    connect(ui->pbMasterEffect2,SIGNAL(clicked()), this, SLOT(emitEffectPbClicked()));
}


EffectsWidget::~EffectsWidget()
{
    delete ui;
}

void EffectsWidget::emitSampleLinkedEffect(int choiceIndex)
{
    if(sender() == ui->cbEffectLink1){
        emit sampleLinkedEffectChanged(0,choiceIndex);
    }else if(sender() == ui->cbEffectLink2){
        emit sampleLinkedEffectChanged(1,choiceIndex);
    }else if(sender() == ui->cbEffectLink3){
        emit sampleLinkedEffectChanged(2,choiceIndex);
    }else if(sender() == ui->cbEffectLink4){
        emit sampleLinkedEffectChanged(3,choiceIndex);
    }
}

void EffectsWidget::emitEffectLinkState(bool state)
{
    if(sender() == ui->pbEffectLink1){
        emit effectLinkStateChanged(0,state);
    }else if(sender() == ui->pbEffectLink2){
        emit effectLinkStateChanged(1,state);
    }else if(sender() == ui->pbEffectLink3){
        emit effectLinkStateChanged(2,state);
    }else if(sender() == ui->pbEffectLink4){
        emit effectLinkStateChanged(3,state);
    }
}

void EffectsWidget::emitMasterEffectLinkState(bool state)
{
    if(sender() == ui->pbMasterEffectLink1){
        emit masterEffectLinkStateChanged(0,state);
    }else if(sender() == ui->pbMasterEffectLink2){
        emit masterEffectLinkStateChanged(1,state);
    }
}

void EffectsWidget::emitEffectPbClicked()
{
    emit effectPbClicked(qobject_cast<QPushButton*>(sender()));
}
