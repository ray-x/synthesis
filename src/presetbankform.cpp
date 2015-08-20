#include "presetbankform.h"
#include "ui_presetbankform.h"

#include <QStandardItem>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QDebug>

PresetBankForm::PresetBankForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PresetBankForm)
{
    ui->setupUi(this);

    ui->wgDimension1->setHandleColor(qRgb(16, 97, 114));
    ui->wgDimension2->setHandleColor(qRgb(16, 97, 114));
    ui->wgDimension3->setHandleColor(qRgb(16, 97, 114));
    ui->wgDimension4->setHandleColor(qRgb(16, 97, 114));

    QGraphicsScene *scene1 = new QGraphicsScene(this);
    scene1->setBackgroundBrush(QBrush(QColor(qRgb(16, 97, 116))));
    scene1->setSceneRect(-62,-26,124,52);
    QGraphicsScene *scene2 = new QGraphicsScene(this);
    scene2->setBackgroundBrush(QBrush(QColor(qRgb(16, 97, 116))));
    scene2->setSceneRect(-62,-26,124,52);
    QGraphicsScene *scene3 = new QGraphicsScene(this);
    scene3->setBackgroundBrush(QBrush(QColor(qRgb(16, 97, 116))));
    scene3->setSceneRect(-62,-26,124,52);
    QGraphicsScene *scene4 = new QGraphicsScene(this);
    scene4->setBackgroundBrush(QBrush(QColor(qRgb(16, 97, 116))));
    scene4->setSceneRect(-62,-26,124,52);

    ui->gv1->setScene(scene1);
    ui->gv2->setScene(scene2);
    ui->gv3->setScene(scene3);
    ui->gv4->setScene(scene4);

    m_adsrGraph1 = new ADSRGraph;
    m_adsrGraph2 = new ADSRGraph;
    m_adsrGraph3 = new ADSRGraph;
    m_adsrGraph4 = new ADSRGraph;

    scene1->addItem(m_adsrGraph1);
    scene2->addItem(m_adsrGraph2);
    scene3->addItem(m_adsrGraph3);
    scene4->addItem(m_adsrGraph4);
}

PresetBankForm::~PresetBankForm()
{
    delete ui;
}

void PresetBankForm::resizeEvent(QResizeEvent *)
{
    m_adsrGraph1->setScale(0.17);
    m_adsrGraph1->setX(-49);
    m_adsrGraph1->setY(-19);
    m_adsrGraph1->reset();

    m_adsrGraph2->setScale(0.17);
    m_adsrGraph2->setX(-49);
    m_adsrGraph2->setY(-19);
    m_adsrGraph2->reset();

    m_adsrGraph3->setScale(0.17);
    m_adsrGraph3->setX(-49);
    m_adsrGraph3->setY(-19);
    m_adsrGraph3->reset();

    m_adsrGraph4->setScale(0.17);
    m_adsrGraph4->setX(-49);
    m_adsrGraph4->setY(-19);
    m_adsrGraph4->reset();

    connect(ui->pbSample1,SIGNAL(clicked()),this,SLOT(setSampleButtonClicked()));
    connect(ui->pbSample2,SIGNAL(clicked()),this,SLOT(setSampleButtonClicked()));
    connect(ui->pbSample3,SIGNAL(clicked()),this,SLOT(setSampleButtonClicked()));
    connect(ui->pbSample4,SIGNAL(clicked()),this,SLOT(setSampleButtonClicked()));
}

void PresetBankForm::setSampleButtonClicked()
{
    m_sampleButtonClicked = static_cast<QPushButton*>(sender());
}

void PresetBankForm::modifySampleButtonText(QString text)
{
    m_sampleButtonClicked->setText(text);
}

QPushButton *PresetBankForm::sampleButtonClicked() const
{
    return m_sampleButtonClicked;
}

