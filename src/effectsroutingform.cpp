#include "effectsroutingform.h"
#include "ui_effectsroutingform.h"

#include <QDebug>
#include <QScrollBar>
#include <QWheelEvent>


EffectsRoutingForm::EffectsRoutingForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EffectsRoutingForm)
{
    ui->setupUi(this);

    connect(ui->pbCancel,SIGNAL(clicked()),this,SLOT(hide()));
    connect(ui->pbSave,SIGNAL(clicked()),this,SLOT(hide()));
    connect(ui->pbMasterEFX,SIGNAL(clicked()),this,SLOT(scrollMaximum()));
    connect(ui->pbInsertEFX,SIGNAL(clicked()),this,SLOT(scrollMinimum()));

    m_sampleEffectLinkList.append(QPair<Samples,SampleLink>(Sample1,LR));
    m_sampleEffectLinkList.append(QPair<Samples,SampleLink>(Sample2,LR));
    m_sampleEffectLinkList.append(QPair<Samples,SampleLink>(Sample3,LR));
    m_sampleEffectLinkList.append(QPair<Samples,SampleLink>(Sample4,LR));

    m_effectEffectLinkList.append(QPair<EffectToLink,bool>(Effect1,false));
    m_effectEffectLinkList.append(QPair<EffectToLink,bool>(Effect2,false));
    m_effectEffectLinkList.append(QPair<EffectToLink,bool>(Effect3,false));
    m_effectEffectLinkList.append(QPair<EffectToLink,bool>(Effect4,false));

    m_masterEffectLinkList.append(QPair<MasterEffectLinkDirection,bool>(MFX1ToMXF2,false));
    m_masterEffectLinkList.append(QPair<MasterEffectLinkDirection,bool>(MFX2ToMXF1,false));

}

EffectsRoutingForm::~EffectsRoutingForm()
{
    delete ui;
}

void EffectsRoutingForm::resizeEvent(QResizeEvent *)
{
    QGraphicsScene *scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setSceneRect(0,0,ui->graphicsView->width(),ui->graphicsView->height());

    // Add routing
    m_route = new EffectRoutingLink(ui->graphicsView->width(),
                                    ui->graphicsView->height());
    scene->addItem(m_route);

    // Add Effect Widget
    m_effectsWidget = new EffectsWidget;
    scene->addWidget(m_effectsWidget);
    m_effectsWidget->setGeometry(0,0,ui->graphicsView->width(),ui->graphicsView->height());

    //Connection Signal/Slot
    connect(m_effectsWidget,SIGNAL(sampleLinkedEffectChanged(int,int)),
            this,SLOT(updateSampleEffectLink(int,int)));
    connect(m_effectsWidget,SIGNAL(effectLinkStateChanged(int,bool)),
            this,SLOT(updateEffectEffectLink(int,bool)));
    connect(m_effectsWidget,SIGNAL(effectPbClicked(QPushButton*)),
            this,SLOT(setClickedPbEffect(QPushButton*)));
    connect(m_effectsWidget,SIGNAL(masterEffectLinkStateChanged(int,bool)),
            this,SLOT(updateMassterEffectLink(int,bool)));

}

void EffectsRoutingForm::updateSampleEffectLink(int sampleIndex, int choiceIndex)
{
    m_route->setSampleEffectLink((EffectRoutingLink::Samples)sampleIndex,
                                 (EffectRoutingLink::SampleLink)choiceIndex);

    m_sampleEffectLinkList[sampleIndex].second = (EffectsRoutingForm::SampleLink)choiceIndex;
}

void EffectsRoutingForm::updateEffectEffectLink(int effectIndex, bool state)
{
    m_route->setEffectEffectLink((EffectRoutingLink::EffectToLink) effectIndex,
                                 state);
    m_effectEffectLinkList[effectIndex].second = state;
}

void EffectsRoutingForm::updateMassterEffectLink(int effectIndex, bool state)
{
    m_route->setMasterEffectLink(
                (EffectRoutingLink::MasterEffectLinkDirection) effectIndex,
                state);

    m_masterEffectLinkList[effectIndex].second = state;
}

void EffectsRoutingForm::modifyEffectButtonText(QString text)
{
   if(m_pbEffectClicked){
       m_pbEffectClicked->setText(text);
   }
}

void EffectsRoutingForm::setClickedPbEffect(QPushButton* pb)
{
    m_pbEffectClicked = pb;
    emit effectClicked();
}


void EffectsRoutingForm::scrollMaximum()
{
    ui->scrollArea->horizontalScrollBar()->setSliderPosition(
                ui->scrollArea->horizontalScrollBar()->maximum());
}

void EffectsRoutingForm::scrollMinimum()
{
    ui->scrollArea->horizontalScrollBar()->setSliderPosition(
                ui->scrollArea->horizontalScrollBar()->minimum());
}

