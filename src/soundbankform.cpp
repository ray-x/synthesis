#include "soundbankform.h"
#include "ui_soundbankform.h"

#include <QStandardItem>

SoundBankForm::SoundBankForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SoundBankForm)
{
    ui->setupUi(this);

    QStandardItem* Items1 = new QStandardItem("Piano  Layers  and  Strings");
    QStandardItem* Items2 = new QStandardItem("Sweet Flute");
    QStandardItem* Items3 = new QStandardItem("Electric  Piano");
    QStandardItem* Items4 = new QStandardItem("Antique  Piano");
    QStandardItem* Items5 = new QStandardItem("Rotary  Organ");
    QStandardItem* Items6 = new QStandardItem("Rock  Master");
    QStandardItem* Items7 = new QStandardItem("Baby  Bass");
    QStandardItem* Items8 = new QStandardItem("Acoustic  Guitar");
    QStandardItem* Items9 = new QStandardItem("White  Grand  Piano");
    QStandardItem* Items10 = new QStandardItem("Sweet Flute");
    QStandardItem* Items11 = new QStandardItem("Electric  Piano");
    QStandardItem* Items12 = new QStandardItem("Antique  Piano");
    QStandardItem* Items13 = new QStandardItem("Rotary  Organ");
    QStandardItem* Items14 = new QStandardItem("Rock  Master");
    QStandardItem* Items15 = new QStandardItem("Baby  Bass");
    QStandardItem* Items16 = new QStandardItem("Acoustic  Guitar");

    QStandardItemModel* ListModel = new QStandardItemModel();
    ListModel->appendRow(Items1);
    ListModel->appendRow(Items2);
    ListModel->appendRow(Items3);
    ListModel->appendRow(Items4);
    ListModel->appendRow(Items5);
    ListModel->appendRow(Items6);
    ListModel->appendRow(Items7);
    ListModel->appendRow(Items8);
    ListModel->appendRow(Items9);
    ListModel->appendRow(Items10);
    ListModel->appendRow(Items11);
    ListModel->appendRow(Items12);
    ListModel->appendRow(Items13);
    ListModel->appendRow(Items14);
    ListModel->appendRow(Items15);
    ListModel->appendRow(Items16);

    for(int i = 0; i<ListModel->rowCount();i++){
        QString index = QString("%1").arg(i+1).rightJustified(3,'0');
        ListModel->setHeaderData(i,Qt::Vertical,index);
    }

    ui->tvSoundBank->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tvSoundBank->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tvSoundBank->setModel(ListModel);

    connect(ui->pbCancel,SIGNAL(clicked()),this,SLOT(hide()));
    connect(ui->pbSelect,SIGNAL(clicked()),this,SLOT(hide()));
}

SoundBankForm::~SoundBankForm()
{
    delete ui;
}
