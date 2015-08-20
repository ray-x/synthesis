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
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qDebug() << "Synthetizer started";
    ui->setupUi(this);
    m_presetBankForm          = new PresetBankForm(this);
    m_splitBankForm           = new SplitBankForm(this);
    m_favoriteForm            = new FavoriteForm(this);
    m_frontButtonEditForm     = new FrontButtonEditForm(this);
    m_usbForm                 = new USBForm(this);
    m_catForm                 = new CategoriesForm(this);
    m_multiSamplesForm        = new MultiSamplesForm(this);
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
#ifdef __linux__
    //QString bank1File = "/home/ray/projects/audio/gigfiles/CGM4LS.gig";
    QString bank1File = "/home/ray/projects/audio/gigfiles/Marimba.gig";
    RIFF::File  *riff = new RIFF::File(bank1File.toStdString());
    m_gig  = new gig::File(riff);

    initMultiSampleList();
#endif
    // preset Bank Form
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

MainWindow::~MainWindow()
{
    delete ui;
}

#ifdef __linux__
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

void MainWindow::GetFileInformations() {
    qDebug() << "Global File Informations:" << endl;
    qDebug() << "    Total instruments: " << m_gig->Instruments << endl;

    if (m_gig->pVersion) {
		qDebug() << "    Version: " << m_gig->pVersion->major   << "."
			 << m_gig->pVersion->minor   << "."
			 << m_gig->pVersion->release << "."
			 << m_gig->pVersion->build   << endl;
    }
    
}



void  MainWindow::GetSamples() {
    int samples = 0;
    qDebug() << "ALL Available Samples (as there might be more than referenced by Instruments):" << endl;
    gig::Sample* pSample = m_gig->GetFirstSample();
    while (pSample) {
        samples++;
        m_sampleList.append(pSample);

        // determine sample's name
        string name = pSample->pInfo->Name;
        if (name == "") name = "<NO NAME>";
        else            name = '\"' + name + '\"';
        //sampleList[name]=pSample;
        // determine group this sample belongs to
        int iGroup = 1;
        for (gig::Group* pGroup = m_gig->GetFirstGroup(); pGroup; pGroup = m_gig->GetNextGroup(), iGroup++) {
            if (pGroup == pSample->GetGroup()) break;
        }
        // print sample info
        qDebug() << "    Sample " << samples << ") " << name.c_str() << ", ";
        //cout << "Group " << iGroup << ", ";
        qDebug() << "    Sample " << samples << ") " << name.c_str() << ", ";
        qDebug() << pSample->SamplesPerSecond << "Hz, " << pSample->Channels << " Channels, " << pSample->Loops << " Loops";
        pSample = m_gig->GetNextSample();
    }
}

void MainWindow::GetInstruments() {
    int instruments = 0;
    cout << "Available Instruments:" << endl;
    gig::Instrument* pInstrument = m_gig->GetFirstInstrument();
    int i=0;
    while (pInstrument) {
        instruments++;

        string name = pInstrument->pInfo->Name;
        m_instrumentList[name]=pInstrument;

 
        qDebug() << "    Instrument " << instruments << ") " << name.c_str() << ", ";

        qDebug() << " MIDIBank=" << pInstrument->MIDIBank << ", MIDIProgram=" << pInstrument->MIDIProgram << endl;

        qDebug() << "        ScriptSlots=" << pInstrument->ScriptSlotCount() << endl;
        for (int s = 0; s < pInstrument->ScriptSlotCount(); ++s) {
            gig::Script* pScript = pInstrument->GetScriptOfSlot(s);
            string name = pScript->Name;
            cout << "        ScriptSlot[" << s << "]='" << name << "'\n";
        }

        if (i++==0) {
            GetRegions(pInstrument);
        }

        pInstrument = m_gig->GetNextInstrument();
    }
}


void MainWindow::GetDimensionRegions(gig::Region* rgn) {
    int dimensionRegions = 0;
    gig::DimensionRegion* pDimensionRegion;

    int i=0;
    while (dimensionRegions < rgn->DimensionRegions) {

        pDimensionRegion = rgn->pDimensionRegions[dimensionRegions];
        if (!pDimensionRegion) break;

        qDebug() << "            Dimension Region " << dimensionRegions + 1 << ")" << endl;

        qDebug() << "                LFO1Frequency=" << pDimensionRegion->LFO1Frequency << "Hz, LFO1InternalDepth=" << pDimensionRegion-> LFO1InternalDepth << ", LFO1ControlDepth=" << pDimensionRegion->LFO1ControlDepth << " LFO1Controller=" << pDimensionRegion->LFO1Controller << endl;
        qDebug() << "                LFO2Frequency=" << pDimensionRegion->LFO2Frequency << "Hz, LFO2InternalDepth=" << pDimensionRegion-> LFO2InternalDepth << ", LFO2ControlDepth=" << pDimensionRegion->LFO2ControlDepth << " LFO2Controller=" << pDimensionRegion->LFO2Controller << endl;
        qDebug() << "                LFO3Frequency=" << pDimensionRegion->LFO3Frequency << "Hz, LFO3InternalDepth=" << pDimensionRegion-> LFO3InternalDepth << ", LFO3ControlDepth=" << pDimensionRegion->LFO3ControlDepth << " LFO3Controller=" << pDimensionRegion->LFO3Controller << endl;
        qDebug() << "                EG1PreAttack=" << pDimensionRegion->EG1PreAttack << "permille, EG1Attack=" << pDimensionRegion->EG1Attack << "s, EG1Decay1=" << pDimensionRegion->EG1Decay1 << "s,  EG1Sustain=" << pDimensionRegion->EG1Sustain << "permille, EG1Release=" << pDimensionRegion->EG1Release << "s, EG1Decay2=" << pDimensionRegion->EG1Decay2 << "s, EG1Hold=" << pDimensionRegion->EG1Hold << endl;
        qDebug() << "                EG2PreAttack=" << pDimensionRegion->EG2PreAttack << "permille, EG2Attack=" << pDimensionRegion->EG2Attack << "s, EG2Decay1=" << pDimensionRegion->EG2Decay1 << "s,  EG2Sustain=" << pDimensionRegion->EG2Sustain << "permille, EG2Release=" << pDimensionRegion->EG2Release << "s, EG2Decay2=" << pDimensionRegion->EG2Decay2 << "s" << endl;
        qDebug() << "                VCFEnabled=" << pDimensionRegion->VCFEnabled << ", VCFType=" << pDimensionRegion->VCFType << ", VCFCutoff=" << (int) pDimensionRegion->VCFCutoff << ",  VCFResonance=" << (int) pDimensionRegion->VCFResonance << ", VCFCutoffController=" << pDimensionRegion->VCFCutoffController << endl;
        qDebug() << "                VelocityResponseCurve=";
        switch (pDimensionRegion->VelocityResponseCurve) {
            case gig::curve_type_nonlinear:
                qDebug() << "NONLINEAR";
                break;
            case gig::curve_type_linear:
                qDebug() << "LINEAR";
                break;
            case gig::curve_type_special:
                qDebug() << "SPECIAL";
                break;
            case gig::curve_type_unknown:
            default:
                qDebug() << "UNKNOWN - please report this !";
        }
        qDebug() << ", VelocityResponseDepth=" << (int) pDimensionRegion->VelocityResponseDepth << ", VelocityResponseCurveScaling=" << (int) pDimensionRegion->VelocityResponseCurveScaling << endl;
        qDebug() << "                Pan=" << (int) pDimensionRegion->Pan << endl;

        dimensionRegions++;
    }
}

void MainWindow::GetRegions(gig::Instrument* instr) {
    int iRegion = 1;
    gig::Region* pRegion = instr->GetFirstRegion();
    while (pRegion) {
        qDebug() << "        Region " << iRegion++ << ") ";
        qDebug() << "            KeyRange=" << pRegion->KeyRange.low << "-" << pRegion->KeyRange.high << ", ";
        qDebug() << "VelocityRange=" << pRegion->VelocityRange.low << "-" << pRegion->VelocityRange.high << ", Layers=" << pRegion->Layers << endl;
        qDebug() << "            Loops=" << pRegion->SampleLoops << endl;
        qDebug() << "            Dimensions=" << pRegion->Dimensions << endl;
        for (int iDimension = 0; iDimension < pRegion->Dimensions; iDimension++) {
            qDebug() << "            Dimension[" << iDimension << "]: Type=";
            gig::dimension_def_t DimensionDef = pRegion->pDimensionDefinitions[iDimension];
            switch (DimensionDef.dimension) {
                case gig::dimension_none:
                    qDebug() << "NONE";
                    break;
                case gig::dimension_samplechannel: // If used sample has more than one channel (thus is not mono).
                    qDebug() << "SAMPLECHANNEL";
                    break;
                case gig::dimension_layer: { // For layering of up to 8 instruments (and eventually crossfading of 2 or 4 layers).
                    gig::crossfade_t crossfade = pRegion->pDimensionRegions[iDimension]->Crossfade;
                    qDebug() << "LAYER (Crossfade in_start=" << (int) crossfade.in_start << ",in_end=" << (int) crossfade.in_end << ",out_start=" << (int) crossfade.out_start << ",out_end=" << (int) crossfade.out_end << ")";
                    break;
                }
                case gig::dimension_velocity: // Key Velocity (this is the only dimension where the ranges can exactly be defined).
                    qDebug() << "VELOCITY";
                    break;
                case gig::dimension_channelaftertouch: // Channel Key Pressure
                    qDebug() << "AFTERTOUCH";
                    break;
                case gig::dimension_releasetrigger: // Special dimension for triggering samples on releasing a key.
                    qDebug() << "RELEASETRIGGER";
                    break;
                case gig::dimension_keyboard: // Key Position
                    qDebug() << "KEYBOARD";
                    break;
                case gig::dimension_roundrobin: // Different samples triggered each time a note is played, dimension regions selected in sequence
                    qDebug() << "ROUNDROBIN";
                    break;
                case gig::dimension_random: // Different samples triggered each time a note is played, random order
                    qDebug() << "RANDOM";
                    break;
                case gig::dimension_smartmidi: // For MIDI tools like legato and repetition mode
                    qDebug() << "SMARTMIDI";
                    break;
                case gig::dimension_roundrobinkeyboard: // Different samples triggered each time a note is played, any key advances the counter
                    cout << "ROUNDROBINKEYBOARD";
                    break;
                case gig::dimension_modwheel: // Modulation Wheel (MIDI Controller 1)
                    qDebug() << "MODWHEEL";
                    break;
                case gig::dimension_breath: // Breath Controller (Coarse, MIDI Controller 2)
                    qDebug() << "BREATH";
                    break;
                case gig::dimension_foot: // Foot Pedal (Coarse, MIDI Controller 4)
                    qDebug() << "FOOT";
                    break;
                case gig::dimension_portamentotime: // Portamento Time (Coarse, MIDI Controller 5)
                    qDebug() << "PORTAMENTOTIME";
                    break;
                case gig::dimension_effect1: // Effect Controller 1 (Coarse, MIDI Controller 12)
                    qDebug() << "EFFECT1";
                    break;
                case gig::dimension_effect2: // Effect Controller 2 (Coarse, MIDI Controller 13)
                    qDebug() << "EFFECT2";
                    break;
                case gig::dimension_genpurpose1: // General Purpose Controller 1 (Slider, MIDI Controller 16)
                    qDebug() << "GENPURPOSE1";
                    break;
                case gig::dimension_genpurpose2: // General Purpose Controller 2 (Slider, MIDI Controller 17)
                    qDebug() << "GENPURPOSE2";
                    break;
                default:
                    qDebug() << "UNKNOWN (" << int(DimensionDef.dimension) << ") - please report this !";
                    break;
            }
            qDebug() << ", Bits=" << (uint) DimensionDef.bits << ", Zones=" << (uint) DimensionDef.zones;
            qDebug() << ", SplitType=";
            switch (DimensionDef.split_type) {
                case gig::split_type_normal:
                    qDebug() << "NORMAL" << endl;
                    break;
                case gig::split_type_bit:
                    qDebug() << "BIT" << endl;
                    break;
                default:
                    qDebug() << "UNKNOWN" << endl;
            }
        }

        GetDimensionRegions(pRegion);

        pRegion = instr->GetNextRegion();
    }
}
void MainWindow::GetGroups() {
    int groups = 0;

    qDebug() << "ALL defined Groups:" << endl;
    int i=0;
    for (gig::Group* pGroup = m_gig->GetFirstGroup(); pGroup; pGroup = m_gig->GetNextGroup()) {
        groups++;
        string name = pGroup->Name;
        if (name == "") name = "<NO NAME>";
        else            name = '\"' + name + '\"';
        qDebug() << "    Group " << groups << ")" << endl;
        qDebug() << "        Name: " << name.c_str() << endl;
    }
    
}








#endif
