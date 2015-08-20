#include "displayform.h"
#include "ui_displayform.h"


DisplayForm::DisplayForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisplayForm)
{
    ui->setupUi(this);

    ui->sbBrightness->setAlignment(Qt::AlignCenter);
    ui->sbColor->setAlignment(Qt::AlignCenter);
    ui->sbContrast->setAlignment(Qt::AlignCenter);
}

DisplayForm::~DisplayForm()
{
    delete ui;
}
