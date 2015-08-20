#include "effectsform.h"
#include "ui_effectsform.h"

#include <QFile>
#include <QDebug>
#include <QVariant>

EffectsForm::EffectsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EffectsForm)
{
    ui->setupUi(this);

    QStandardItem* Items1 = new QStandardItem("Graphic EQ");
    QStandardItem* Items2 = new QStandardItem("Delay EF");
    QStandardItem* Items3 = new QStandardItem("Compressor");
    QStandardItem* Items4 = new QStandardItem("Exiter");
    QStandardItem* Items5 = new QStandardItem("Parametric EQ");
    QStandardItem* Items6 = new QStandardItem("Chorus");
    QStandardItem* Items7 = new QStandardItem("Reverb");
    QStandardItem* Items8 = new QStandardItem("Studio Reverb");

    m_listModel= new QStandardItemModel();
    m_listModel->appendRow(Items1);
    m_listModel->appendRow(Items2);
    m_listModel->appendRow(Items3);
    m_listModel->appendRow(Items4);
    m_listModel->appendRow(Items5);
    m_listModel->appendRow(Items6);
    m_listModel->appendRow(Items7);
    m_listModel->appendRow(Items8);

    for(int i = 0; i<m_listModel->rowCount();i++){
        QString index = QString("%1").arg(i+1).rightJustified(3,'0');
        m_listModel->setHeaderData(i,Qt::Vertical,index);
    }

    ui->tvEffects->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tvEffects->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tvEffects->setModel(m_listModel);

    connect(ui->pbCancel,SIGNAL(clicked()),this,SLOT(hide()));
    connect(ui->pbSelect,SIGNAL(clicked()),this,SLOT(hide()));
    connect(ui->pbSelect,SIGNAL(clicked()),this,SLOT(selectEffect()));

}

EffectsForm::~EffectsForm()
{
    delete ui;
}

void EffectsForm::selectEffect()
{
    QModelIndex index = ui->tvEffects->currentIndex();
    QStandardItem *item = m_listModel->itemFromIndex(index);
    QString effectName  = item->text();
    emit effectSelected(effectName);
}
