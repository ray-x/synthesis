#include "splitbankform.h"
#include "ui_splitbankform.h"

SplitBankForm::SplitBankForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SplitBankForm)
{
    ui->setupUi(this);

}

SplitBankForm::~SplitBankForm()
{
    delete ui;
}
