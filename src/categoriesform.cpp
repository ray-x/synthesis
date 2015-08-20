#include "categoriesform.h"
#include "ui_categoriesform.h"

CategoriesForm::CategoriesForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CategoriesForm)
{
    ui->setupUi(this);
}

CategoriesForm::~CategoriesForm()
{
    delete ui;
}
