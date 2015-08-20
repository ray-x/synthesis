#include "crossfadeeditform.h"
#include "ui_crossfadeeditform.h"

#include <QFile>

CrossfadeEditForm::CrossfadeEditForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CrossfadeEditForm)
{
    ui->setupUi(this);

    m_crossfadeSettingsForm = new CrossfadeSettingsForm(this);
    m_crossfadeSettingsForm->move(420,11);
    m_crossfadeSettingsForm->show();

    QFile file(":/qss/buttons.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    ui->pbBasicEdit->setStyleSheet(styleSheet);
    ui->pbCrossfade->setStyleSheet(styleSheet);
    ui->pbLFOEdit->setStyleSheet(styleSheet);
    ui->pbCancel->setStyleSheet(styleSheet);
    ui->pbSave->setStyleSheet(styleSheet);
    file.close();

    file.setFileName(":/qss/buttonSample.qss");
    file.open(QFile::ReadOnly);
    styleSheet = QLatin1String(file.readAll());
    ui->pbSample1->setStyleSheet(styleSheet);
    ui->pbSample2->setStyleSheet(styleSheet);
    ui->pbSample3->setStyleSheet(styleSheet);
    ui->pbSample4->setStyleSheet(styleSheet);
    file.close();

}

CrossfadeEditForm::~CrossfadeEditForm()
{
    delete ui;
}
