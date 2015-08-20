#include "frontbuttoneditform.h"
#include "ui_frontbuttoneditform.h"

FrontButtonEditForm::FrontButtonEditForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrontButtonEditForm)
{
    ui->setupUi(this);

    connect(ui->pbEffects,SIGNAL(clicked()),this,SLOT(hide()));
    connect(ui->pbLevel,SIGNAL(clicked()),this,SLOT(hide()));
}

FrontButtonEditForm::~FrontButtonEditForm()
{
    delete ui;
}
