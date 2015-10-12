#include "multisamplesform.h"
#include "ui_multisamplesform.h"

#include <QDebug>
#include <QVariant>
#include"gigfile.h"

MultiSamplesForm::MultiSamplesForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MultiSamplesForm)
{
    ui->setupUi(this);
    gigFile *gigFileObj= gigFile::instance();

    m_listModel = new QStandardItemModel();

    for(int i = 0; i<m_listModel->rowCount();i++){
        QString index = QString("%1").arg(i+1).rightJustified(3,'0');
        m_listModel->setHeaderData(i,Qt::Vertical,index);
    }

    ui->tvMultiSamples->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tvMultiSamples->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tvMultiSamples->setModel(m_listModel);

    connect(ui->pbSelect,SIGNAL(clicked()),this,SLOT(selectSample()));
    connect(ui->pbCancel,SIGNAL(clicked()),this,SLOT(hide()));
    connect(ui->pbSelect,SIGNAL(clicked()),this,SLOT(hide()));
    connect(this, SIGNAL(sampleSelected(QString)), gigFileObj, SLOT(newGigFile(QString)));
}

MultiSamplesForm::~MultiSamplesForm()
{
    delete ui;
}

void MultiSamplesForm::selectSample()
{
    QModelIndex index = ui->tvMultiSamples->currentIndex();
    QStandardItem *item = m_listModel->itemFromIndex(index);
    QString sampleName  = item->text();
    qDebug()<<QString::number(item->row());
    emit sampleSelected(sampleName.split(" ").join(": "));
    emit sampleSelected(item->row());
}
