#include "systeminfoform.h"
#include "ui_systeminfoform.h"

SystemInfoForm::SystemInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SystemInfoForm)
{
    ui->setupUi(this);
}

SystemInfoForm::~SystemInfoForm()
{
    delete ui;
}
