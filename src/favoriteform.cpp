#include "favoriteform.h"
#include "ui_favoriteform.h"

FavoriteForm::FavoriteForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FavoriteForm)
{
    ui->setupUi(this);
}

FavoriteForm::~FavoriteForm()
{
    delete ui;
}
