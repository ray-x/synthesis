#include "soundsplitform.h"
#include "ui_soundsplitform.h"

SoundSplitForm::SoundSplitForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SoundSplitForm)
{
    ui->setupUi(this);
}

SoundSplitForm::~SoundSplitForm()
{
    delete ui;
}
