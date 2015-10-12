#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>

#include <ui_presetbankform.h>
#include <ui_splitbankform.h>
#include <ui_favoriteform.h>
#include <ui_frontbuttoneditform.h>
#include <ui_soundsplitform.h>
#include <ui_effectseditform.h>
#include <ui_effectsform.h>
#include <ui_soundbankform.h>
#include <ui_multisamplesform.h>
#include <ui_categoriesform.h>
#include <ui_effectsroutingform.h>

#include <QDebug>
#include <QFile>
#include <QScrollBar>

gigFile *gigFile::s_gigFile=0;


using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qDebug() << "Synthetizer started";
    ui->setupUi(this);
#ifdef __linux__

    m_gig  = m_gigObj.GetGigFile();
    //m_gigObj.createNewGigFile("");
#endif
    m_presetBankForm          = new PresetBankForm(this);
    m_splitBankForm           = new SplitBankForm(this);
    m_favoriteForm            = new FavoriteForm(this);
    m_frontButtonEditForm     = new FrontButtonEditForm(this);
    m_usbForm                 = new USBForm(this);
    m_catForm                 = new CategoriesForm(this);
    m_multiSamplesForm        = new MultiSamplesForm(this);
#ifdef __linux__
    initMultiSampleList();
#endif
    m_soundBankForm           = new SoundBankForm(this);
    m_soundSplitForm          = new SoundSplitForm(this);
    m_effectsEditForm         = new EffectsEditForm(this);
    m_categoriesForm          = new CategoriesForm(this);
    m_soundEditForm           = new SoundEditForm(this);
    m_effectRoutingForm       = new EffectsRoutingForm(this);
    m_effectsForm             = new EffectsForm(this);

    // show main window
    m_presetBankForm->show();

    // hide the others
    this->hide();
    m_favoriteForm->hide();
    m_splitBankForm->hide();
    m_frontButtonEditForm->hide();
    m_usbForm->hide();
    m_catForm->hide();
    m_effectsForm->hide();
    m_multiSamplesForm->hide();
    m_soundBankForm->hide();
    m_soundSplitForm->hide();
    m_effectsEditForm->hide();
    m_categoriesForm->hide();
    m_soundEditForm->hide();
    m_effectRoutingForm->hide();

    // preset Bank Form
    connect(m_presetBankForm->ui->pbAmpEdit,SIGNAL(clicked()),m_soundEditForm,SLOT(show()));
	connect(m_presetBankForm->ui->pbAmpEdit,SIGNAL(clicked()),m_soundEditForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbEqualizer,SIGNAL(clicked()),m_effectsEditForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbBankA,SIGNAL(clicked()),m_soundBankForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbBankB,SIGNAL(clicked()),m_soundBankForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbBankC,SIGNAL(clicked()),m_soundBankForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbBankD,SIGNAL(clicked()),m_soundBankForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbSample1,SIGNAL(clicked()),m_multiSamplesForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbSample2,SIGNAL(clicked()),m_multiSamplesForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbSample3,SIGNAL(clicked()),m_multiSamplesForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbSample4,SIGNAL(clicked()),m_multiSamplesForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbCategory,SIGNAL(clicked()),m_categoriesForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbInsertEFX,SIGNAL(clicked()),m_effectRoutingForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbInsertEFX,SIGNAL(clicked()),m_effectRoutingForm,SLOT(scrollMinimum()));
    connect(m_presetBankForm->ui->pbMasterEFX,SIGNAL(clicked()),m_effectRoutingForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbMasterEFX,SIGNAL(clicked()),m_effectRoutingForm,SLOT(scrollMaximum()));
    connect(m_presetBankForm->ui->pbSampleEdit1,SIGNAL(clicked()),m_soundEditForm,SLOT(selectSample1()));
    connect(m_presetBankForm->ui->pbSampleEdit1,SIGNAL(clicked()),m_soundEditForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbSampleEdit2,SIGNAL(clicked()),m_soundEditForm,SLOT(selectSample2()));
    connect(m_presetBankForm->ui->pbSampleEdit2,SIGNAL(clicked()),m_soundEditForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbSampleEdit3,SIGNAL(clicked()),m_soundEditForm,SLOT(selectSample3()));
    connect(m_presetBankForm->ui->pbSampleEdit3,SIGNAL(clicked()),m_soundEditForm,SLOT(show()));
    connect(m_presetBankForm->ui->pbSampleEdit4,SIGNAL(clicked()),m_soundEditForm,SLOT(selectSample4()));
    connect(m_presetBankForm->ui->pbSampleEdit4,SIGNAL(clicked()),m_soundEditForm,SLOT(show()));

    // front Button Edit Form
    connect(m_frontButtonEditForm->ui->pbEffects,SIGNAL(clicked()),m_effectsForm,SLOT(show()));

    // Multisample Form
    connect(m_multiSamplesForm,SIGNAL(sampleSelected(QString)),m_presetBankForm,SLOT(modifySampleButtonText(QString)));
#ifdef Q_WS_X11
    connect(m_multiSamplesForm,SIGNAL(sampleSelected(int)),this,SLOT(loadInstrProperties(int)));
#endif
    // Effects routing Form
    connect(m_effectRoutingForm,SIGNAL(effectClicked()),m_effectsForm, SLOT(show()));

    // Effects Form
    connect(m_effectsForm,SIGNAL(effectSelected(QString)),m_effectRoutingForm,SLOT(modifyEffectButtonText(QString)));

}

void MainWindow::initMultiSampleList()
{
    gig::Instrument* pInstrument = m_gig->GetFirstInstrument();
    QList<QStandardItem *> instrumentList;
    int instrCnt = 1;
    while (pInstrument && instrCnt<129) {
        instrCnt++;
        QString name = QString().fromStdString(pInstrument->pInfo->Name);
        QStandardItem *instrumentItem = new QStandardItem(name);
        instrumentList.append(instrumentItem);
        pInstrument = m_gig->GetNextInstrument();
        if (instrCnt<=4) {
            ;//sm_presetBankForm->ui->pbSample1->setText();
        }
    }
    m_multiSamplesForm->m_listModel->appendColumn(instrumentList);
    
}
void MainWindow::loadInstrProperties(int instrIndex)
{
    gig::Instrument *instrument;
    instrument = m_gig->GetInstrument(instrIndex);
}
bool MainWindow::keypres(QKeyEvent *keyevent)
{
    if (keyevent->key()==Qt::Key_W)
        {
            qDebug() << "hi";
        }
}

MainWindow::~MainWindow()
{
    delete ui;
}


