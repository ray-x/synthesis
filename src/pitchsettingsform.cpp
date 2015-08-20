#include "pitchsettingsform.h"
#include "ui_pitchsettingsform.h"

#include <QFile>
#include <QDebug>
#include <QTableWidgetItem>
#include <QListView>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QScrollBar>

PitchSettingsForm::PitchSettingsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PitchSettingsForm)
{
    ui->setupUi(this);

    m_sbFineTune = new QSpinBox(this);
    m_sbFineTune->setMaximum(50);
    m_sbFineTune->setMinimum(-49);
    m_sbFineTune->setAlignment(Qt::AlignHCenter);
    m_sbFineTune->installEventFilter(this);
    m_sbFineTune->children().at(0)->installEventFilter(this);

    m_ckbPitchTrack = new QCheckBox(this);
    m_ckbPitchTrack->installEventFilter(this);

    m_dsbAttack = new QDoubleSpinBox(this);
    m_dsbAttack->setMaximum(10.000);
    m_dsbAttack->setMinimum(0.000);
    m_dsbAttack->setDecimals(3);
    m_dsbAttack->setAlignment(Qt::AlignHCenter);
    m_dsbAttack->installEventFilter(this);
    m_dsbAttack->children().at(0)->installEventFilter(this);

    m_spDepth = new QSpinBox(this);
    m_spDepth->setMaximum(1200);
    m_spDepth->setMinimum(-1200);
    m_spDepth->setAlignment(Qt::AlignHCenter);
    m_spDepth->installEventFilter(this);
    m_spDepth->children().at(0)->installEventFilter(this);

    m_dsbFrequency = new QDoubleSpinBox(this);
    m_dsbFrequency->setMaximum(10.00);
    m_dsbFrequency->setMinimum(0.10);
    m_dsbFrequency->setDecimals(2);
    m_dsbFrequency->setAlignment(Qt::AlignHCenter);
    m_dsbFrequency->installEventFilter(this);
    m_dsbFrequency->children().at(0)->installEventFilter(this);

    m_sbInternalDepth = new QSpinBox(this);
    m_sbInternalDepth->setMaximum(1200);
    m_sbInternalDepth->setMinimum(0);
    m_sbInternalDepth->setAlignment(Qt::AlignHCenter);
    m_sbInternalDepth->installEventFilter(this);
    m_sbInternalDepth->children().at(0)->installEventFilter(this);

    m_sbControlDepth = new QSpinBox(this);
    m_sbControlDepth->setMaximum(1200);
    m_sbControlDepth->setMinimum(0);
    m_sbControlDepth->setAlignment(Qt::AlignHCenter);
    m_sbControlDepth->installEventFilter(this);
    m_sbControlDepth->children().at(0)->installEventFilter(this);

    m_cbController = new QComboBox(this);
    m_cbController->addItem("Internal");
    m_cbController->addItem("Modwheel");
    m_cbController->addItem("AfterTouch");
    m_cbController->addItem("Internal+Modwheel");
    m_cbController->addItem("Internal+Aftertouch");
    m_cbController->installEventFilter(this);

    m_ckbSync = new QCheckBox(this);
    m_ckbSync->installEventFilter(this);

    // add widgets to table widget
    ui->twPitchSettings->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twPitchSettings->verticalHeader()->setDefaultSectionSize(42);
    ui->twPitchSettings->setCellWidget(0,0,m_sbFineTune);
    ui->twPitchSettings->setCellWidget(1,0, new QSpinBox());
    ui->twPitchSettings->setCellWidget(2,0,new QSpinBox());
    ui->twPitchSettings->setCellWidget(3,0,m_ckbPitchTrack);
    ui->twPitchSettings->verticalHeader()->viewport()->installEventFilter(this);

    ui->twPitchEnvelop->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twPitchEnvelop->verticalHeader()->setDefaultSectionSize(42);
    ui->twPitchEnvelop->setCellWidget(0,0,m_dsbAttack);
    ui->twPitchEnvelop->setCellWidget(1,0,m_spDepth);
    ui->twPitchEnvelop->verticalHeader()->viewport()->installEventFilter(this);

    // add widgets to table widget
    ui->twPitchOscillator1->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twPitchOscillator1->verticalHeader()->setDefaultSectionSize(42);
    ui->twPitchOscillator1->setCellWidget(0,0,m_dsbFrequency);
    ui->twPitchOscillator1->setCellWidget(1,0,m_sbInternalDepth);
    ui->twPitchOscillator1->setCellWidget(2,0,m_sbControlDepth);
    ui->twPitchOscillator1->verticalHeader()->viewport()->installEventFilter(this);

    ui->twController->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twController->verticalHeader()->setDefaultSectionSize(42);
    ui->twController->setCellWidget(0,0,m_cbController);
    ui->twController->verticalHeader()->viewport()->installEventFilter(this);

    ui->twPitchOscillator2->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->twPitchOscillator2->verticalHeader()->setDefaultSectionSize(42);
    ui->twPitchOscillator2->setCellWidget(0,0,m_ckbSync);
    ui->twPitchOscillator2->verticalHeader()->viewport()->installEventFilter(this);

    ui->scrollArea->verticalScrollBar()->installEventFilter(this);
    ui->frameBlank->installEventFilter(this);
    ui->frameBlank2->installEventFilter(this);
}

PitchSettingsForm::~PitchSettingsForm()
{
    delete ui;
}

bool PitchSettingsForm::eventFilter(QObject *obj, QEvent *event)
{
    if(event->type() == QEvent::KeyPress){

        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        switch(keyEvent->key()){
        case Qt::Key_Tab: {
            ui->twPitchSettings->selectionModel()->clearSelection();
            ui->twPitchEnvelop->selectionModel()->clearSelection();
            ui->twPitchOscillator1->selectionModel()->clearSelection();
            ui->twController->selectionModel()->clearSelection();
            ui->twPitchOscillator2->selectionModel()->clearSelection();

            if(obj == ui->twPitchSettings->cellWidget(ui->twPitchSettings->rowCount()-1,0)){
                ui->twPitchEnvelop->selectRow(0);
                ui->twPitchEnvelop->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twPitchEnvelop->cellWidget(ui->twPitchEnvelop->rowCount()-1,0)){
                ui->twPitchOscillator1->selectRow(0);
                ui->twPitchOscillator1->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twPitchOscillator1->cellWidget(ui->twPitchOscillator1->rowCount()-1,0)){
                ui->twController->selectRow(0);
                ui->twController->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twController->cellWidget(ui->twController->rowCount()-1,0)){
                ui->twPitchOscillator2->selectRow(0);
                ui->twPitchOscillator2->cellWidget(0,0)->setFocus();
                return true;
            }else if(obj == ui->twPitchOscillator2->cellWidget(ui->twPitchOscillator2->rowCount()-1,0)){
                ui->twPitchSettings->selectRow(0);
                ui->twPitchSettings->cellWidget(0,0)->setFocus();
                return true;
            }else{
                return QObject::eventFilter(obj, event);
            }
        }
        case Qt::Key_Backtab: {
            ui->twPitchSettings->selectionModel()->clearSelection();
            ui->twPitchEnvelop->selectionModel()->clearSelection();
            ui->twPitchOscillator1->selectionModel()->clearSelection();
            ui->twController->selectionModel()->clearSelection();
            ui->twPitchOscillator2->selectionModel()->clearSelection();

            if(obj == ui->twPitchSettings->cellWidget(0,0)){
                ui->twPitchOscillator2->selectRow(ui->twPitchOscillator2->rowCount()-1);
                ui->twPitchOscillator2->cellWidget(ui->twPitchOscillator2->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twPitchEnvelop->cellWidget(0,0)){
                ui->twPitchSettings->selectRow(ui->twPitchSettings->rowCount()-1);
                ui->twPitchSettings->cellWidget(ui->twPitchSettings->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twPitchOscillator1->cellWidget(0,0)){
                ui->twPitchEnvelop->selectRow(ui->twPitchEnvelop->rowCount()-1);
                ui->twPitchEnvelop->cellWidget(ui->twPitchEnvelop->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twController->cellWidget(0,0)){
                ui->twPitchOscillator1->selectRow(ui->twPitchOscillator1->rowCount()-1);
                ui->twPitchOscillator1->cellWidget(ui->twPitchOscillator1->rowCount()-1,0)->setFocus();
                return true;
            }else if(obj == ui->twPitchOscillator2->cellWidget(0,0)){
                ui->twController->selectRow(ui->twController->rowCount()-1);
                ui->twController->cellWidget(ui->twController->rowCount()-1,0)->setFocus();
                return true;
            }else{
                return QObject::eventFilter(obj, event);
            }
        }
        default:
            return QObject::eventFilter(obj, event);
        }
    }else if(event->type() == QEvent::MouseButtonPress ||
             event->type() == QEvent::MouseButtonDblClick ||
             event->type() == QEvent::MouseButtonRelease ||
             event->type() == QEvent::Wheel){

        ui->twPitchSettings->selectionModel()->clearSelection();
        ui->twPitchEnvelop->selectionModel()->clearSelection();
        ui->twPitchOscillator1->selectionModel()->clearSelection();
        ui->twController->selectionModel()->clearSelection();
        ui->twPitchOscillator2->selectionModel()->clearSelection();

        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);

        if(obj == ui->twPitchSettings->verticalHeader()->viewport()){
            int rowIndex = ui->twPitchSettings->rowAt(mouseEvent->pos().y());
            ui->twPitchSettings->selectRow(rowIndex);
            ui->twPitchSettings->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twPitchEnvelop->verticalHeader()->viewport()){
            int rowIndex = ui->twPitchEnvelop->rowAt(mouseEvent->pos().y());
            ui->twPitchEnvelop->selectRow(rowIndex);
            ui->twPitchEnvelop->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twPitchOscillator1->verticalHeader()->viewport()){
            int rowIndex = ui->twPitchOscillator1->rowAt(mouseEvent->pos().y());
            ui->twPitchOscillator1->selectRow(rowIndex);
            ui->twPitchOscillator1->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twController->verticalHeader()->viewport()){
            int rowIndex = ui->twController->rowAt(mouseEvent->pos().y());
            ui->twController->selectRow(rowIndex);
            ui->twController->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj == ui->twPitchOscillator2->verticalHeader()->viewport()){
            int rowIndex = ui->twPitchOscillator2->rowAt(mouseEvent->pos().y());
            ui->twPitchOscillator2->selectRow(rowIndex);
            ui->twPitchOscillator2->cellWidget(rowIndex,0)->setFocus();
            return true;
        }else if(obj->parent() == ui->twPitchSettings->cellWidget(0,0) ||
                 obj == ui->twPitchSettings->cellWidget(0,0)){
            ui->twPitchSettings->selectRow(0);
            ui->twPitchSettings->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twPitchSettings->cellWidget(1,0) ||
                 obj == ui->twPitchSettings->cellWidget(1,0)){
            ui->twPitchSettings->selectRow(1);
            ui->twPitchSettings->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twPitchSettings->cellWidget(2,0) ||
                 obj == ui->twPitchSettings->cellWidget(2,0)){
            ui->twPitchSettings->selectRow(2);
            ui->twPitchSettings->cellWidget(2,0)->setFocus();
        }else if(obj->parent() == ui->twPitchSettings->cellWidget(3,0) ||
                 obj == ui->twPitchSettings->cellWidget(3,0)){
            ui->twPitchSettings->selectRow(3);
            ui->twPitchSettings->cellWidget(3,0)->setFocus();
        }else if(obj->parent() == ui->twPitchEnvelop->cellWidget(0,0) ||
                 obj == ui->twPitchEnvelop->cellWidget(0,0)){
            ui->twPitchEnvelop->selectRow(0);
            ui->twPitchEnvelop->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twPitchEnvelop->cellWidget(1,0) ||
                 obj == ui->twPitchEnvelop->cellWidget(1,0)){
            ui->twPitchEnvelop->selectRow(1);
            ui->twPitchEnvelop->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twPitchOscillator1->cellWidget(0,0) ||
                 obj == ui->twPitchOscillator1->cellWidget(0,0)){
            ui->twPitchOscillator1->selectRow(0);
            ui->twPitchOscillator1->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twPitchOscillator1->cellWidget(1,0) ||
                 obj == ui->twPitchOscillator1->cellWidget(1,0)){
            ui->twPitchOscillator1->selectRow(1);
            ui->twPitchOscillator1->cellWidget(1,0)->setFocus();
        }else if(obj->parent() == ui->twPitchOscillator1->cellWidget(2,0) ||
                 obj == ui->twPitchOscillator1->cellWidget(2,0)){
            ui->twPitchOscillator1->selectRow(2);
            ui->twPitchOscillator1->cellWidget(2,0)->setFocus();
        }else if(obj->parent() == ui->twController->cellWidget(0,0) ||
                 obj == ui->twController->cellWidget(0,0)){
            ui->twController->selectRow(0);
            ui->twController->cellWidget(0,0)->setFocus();
        }else if(obj->parent() == ui->twPitchOscillator2->cellWidget(0,0) ||
                 obj == ui->twPitchOscillator2->cellWidget(0,0)){
            ui->twPitchOscillator2->selectRow(0);
            ui->twPitchOscillator2->cellWidget(0,0)->setFocus();
        }
    }
    return QObject::eventFilter(obj, event);
}
