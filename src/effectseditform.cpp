#include "effectseditform.h"
#include "ui_effectseditform.h"

EffectsEditForm::EffectsEditForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EffectsEditForm)
{

    ui->setupUi(this);

    ui->bar8K->setBorderColor(QColor(167, 174, 169));
    ui->bar8K->setBorderwidth(2);
    ui->bar8K->setHandleColor(QColor(16, 97, 114));
    ui->bar8K->setHandleBorderColor(QColor("Black"));
    ui->bar8K->setShowValueIndicator(false);

    ui->bar16K->setBorderColor(QColor(167, 174, 169));
    ui->bar16K->setBorderwidth(2);
    ui->bar16K->setHandleColor(QColor(16, 97, 114));
    ui->bar16K->setHandleBorderColor(QColor("Black"));
    ui->bar16K->setShowValueIndicator(false);

    ui->bar32->setBorderColor(QColor(167, 174, 169));
    ui->bar32->setBorderwidth(2);
    ui->bar32->setHandleColor(QColor(16, 97, 114));
    ui->bar32->setHandleBorderColor(QColor("Black"));
    ui->bar32->setShowValueIndicator(false);

    ui->bar63->setBorderColor(QColor(167, 174, 169));
    ui->bar63->setBorderwidth(2);
    ui->bar63->setHandleColor(QColor(16, 97, 114));
    ui->bar63->setHandleBorderColor(QColor("Black"));
    ui->bar63->setShowValueIndicator(false);

    ui->bar125->setBorderColor(QColor(167, 174, 169));
    ui->bar125->setBorderwidth(2);
    ui->bar125->setHandleColor(QColor(16, 97, 114));
    ui->bar125->setHandleBorderColor(QColor("Black"));
    ui->bar125->setShowValueIndicator(false);

    ui->bar1K->setBorderColor(QColor(167, 174, 169));
    ui->bar1K->setBorderwidth(2);
    ui->bar1K->setHandleColor(QColor(16, 97, 114));
    ui->bar1K->setHandleBorderColor(QColor("Black"));
    ui->bar1K->setShowValueIndicator(false);

    ui->bar250->setBorderColor(QColor(167, 174, 169));
    ui->bar250->setBorderwidth(2);
    ui->bar250->setHandleColor(QColor(16, 97, 114));
    ui->bar250->setHandleBorderColor(QColor("Black"));
    ui->bar250->setShowValueIndicator(false);

    ui->bar500->setBorderColor(QColor(167, 174, 169));
    ui->bar500->setBorderwidth(2);
    ui->bar500->setHandleColor(QColor(16, 97, 114));
    ui->bar500->setHandleBorderColor(QColor("Black"));
    ui->bar500->setShowValueIndicator(false);

    connect(ui->pbCancel,SIGNAL(clicked()),this,SLOT(hide()));
    connect(ui->pbSave,SIGNAL(clicked()),this,SLOT(hide()));

}

EffectsEditForm::~EffectsEditForm()
{
    delete ui;
}
