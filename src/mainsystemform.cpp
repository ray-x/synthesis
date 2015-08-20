#include "mainsystemform.h"
#include "ui_mainsystemform.h"

MainSystemForm::MainSystemForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainSystemForm)
{
    ui->setupUi(this);
}

MainSystemForm::~MainSystemForm()
{
    delete ui;
}
