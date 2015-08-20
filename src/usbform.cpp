#include "usbform.h"
#include "ui_usbform.h"

USBForm::USBForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::USBForm)
{
    ui->setupUi(this);
}

USBForm::~USBForm()
{
    delete ui;
}
