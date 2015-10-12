#include "gigfile.h"
#ifdef __linux__
#include<QDebug>
#include<qfileinfo.h>
#include<sstream>
using namespace std;
#include <algorithm>
gigFile::gigFile(QObject *parent) :
    QObject(parent)
{
    QString bank1File = "/home/ray/projects/audio/gigfiles/CGM4LS.gig";
    //QString bank1File = "/home/ray/projects/audio/gigfiles/Marimba.gig";
	QFileInfo checkFile(bank1File);
    if (checkFile.exists()){
        RIFF::File  *riff = new RIFF::File(bank1File.toStdString());
        gig  = new gig::File(riff);
    }else{
        gig=nullptr;
        return;
    }
    idx=0;

    bankfile[0]="/home/ray/projects/audio/gigfiles/1.gig";
    QFileInfo checkFile1(bankfile[0]);
    if (checkFile1.size()>1024){
    	RIFF::File  *riff1= new RIFF::File(bankfile[0].toStdString());
    	m_gigO[0]=new gig::File(riff1);
        qDebug()<<QString::fromStdString(m_gigO[0]->GetFirstInstrument()->pInfo->Name);
        m_gigName[0]=QString::fromStdString(m_gigO[0]->GetFirstInstrument()->pInfo->Name);
    }else{
        m_gigName[0]="NONE";
        m_gigO[0]=nullptr;
    }

    bankfile[1]="/home/ray/projects/audio/gigfiles/2.gig";
    QFileInfo checkFile2(bankfile[1]);
    if (checkFile2.size()>1024 ){
    	RIFF::File  *riff2= new RIFF::File(bankfile[1].toStdString());
    	m_gigO[1]=new gig::File(riff2);
        qDebug()<<QString::fromStdString(m_gigO[1]->GetFirstInstrument()->pInfo->Name);
        m_gigName[1]=QString::fromStdString(m_gigO[1]->GetFirstInstrument()->pInfo->Name);
    }else{
        m_gigName[1]="NONE";
        m_gigO[1]=nullptr;
    }

    bankfile[2]="/home/ray/projects/audio/gigfiles/3.gig";
    QFileInfo checkFile3(bankfile[2]);
    if (checkFile3.size()>1024){
    	RIFF::File  *riff3= new RIFF::File(bankfile[2].toStdString());
    	m_gigO[2]=new gig::File(riff3);
        m_gigName[2]=QString::fromStdString(m_gigO[2]->GetFirstInstrument()->pInfo->Name);
    }else{
        m_gigName[2]="NONE";
        m_gigO[2]=nullptr;
    }

    bankfile[3]="/home/ray/projects/audio/gigfiles/4.gig";
    QFileInfo checkFile4(bankfile[3]);
    if (checkFile4.size()>1024){
    	RIFF::File  *riff4= new RIFF::File(bankfile[3].toStdString());
        m_gigO[3]=new gig::File(riff4);
        m_gigName[3]=QString::fromStdString(m_gigO[3]->GetFirstInstrument()->pInfo->Name);
    }else{
        m_gigName[3]="NONE";
        m_gigO[3]=nullptr;
    }
    s_gigFile=this;
}

void gigFile::GetFileInformations() {
    cout << "Global File Informations:" << endl;
    cout << "    Total instruments: " << gig->Instruments << endl;

    if (gig->pVersion) {
		cout << "    Version: " << gig->pVersion->major   << "."
			 << gig->pVersion->minor   << "."
			 << gig->pVersion->release << "."
			 << gig->pVersion->build   << endl;
    }
    
    if (gig->pInfo) {
        if (gig->pInfo->Name.size())
            cout << "    Name: '" << gig->pInfo->Name << "'\n";
        m_gigO[idx]->pInfo->CopyAssign(m_gigO[idx]->pInfo);
    }
}

void  gigFile::GetSamples() {
    int samples = 0;
    //cout << "ALL Available Samples (as there might be more than referenced by Instruments):" << endl;
    gig::Sample* pSample = gig->GetFirstSample();
    while (pSample) {
        samples++;

        //gig::Sample* s = gigO->AddSample();
        //s->CopyAssignMeta(pSample);
        //mGroups[pSample->GetGroup()]->AddSample(s);
        //mSamples[pSample] = s;

        string name = pSample->pInfo->Name;
        m_sampleList[idx][name]=pSample;
        if (name == "") name = "<NO NAME>";
        else            name = '\"' + name + '\"';
        
        // determine group this sample belongs to
        int iGroup = 1;
        for (gig::Group* pGroup = gig->GetFirstGroup(); pGroup; pGroup = gig->GetNextGroup(), iGroup++) {
            if (pGroup == pSample->GetGroup()) break;
        }
        // print sample info
#if debug
        cout << "    Sample " << samples << ") " << name << ", ";
        cout << "Group " << iGroup << ", ";
        cout << pSample->SamplesPerSecond << "Hz, " << pSample->Channels << " Channels, " << pSample->Loops << " Loops";
#endif
        if (pSample->Loops) {
            cout << " (Type: ";
            switch (pSample->LoopType) {
                case gig::loop_type_normal:         cout << "normal)";   break;
                case gig::loop_type_bidirectional:  cout << "pingpong)"; break;
                case gig::loop_type_backward:       cout << "reverse)";  break;
            }
#if debug
            cout << ", LoopFraction=" << pSample->LoopFraction << ", Start=" << pSample->LoopStart << ", End=" << pSample->LoopEnd;
            cout << ", LoopPlayCount=" << pSample->LoopPlayCount;
#endif
        }
#if debug
        cout << ", Length=" << pSample->SamplesTotal << " Compressed=" << ((pSample->Compressed) ? "true" : "false") << endl;
#endif
        pSample = gig->GetNextSample();
    }
}


void  gigFile::AddSamples() {
    int samples = 0;
    cout << "ALL Available Samples (as there might be more than referenced by Instruments):" << endl;
    gig::Sample* pSample = gig->GetFirstSample();
    while (pSample) {
        samples++;
        if(samplesSet[idx].count(pSample->pInfo->Name )>0){
            cout<< "found target sample " <<endl;
            gig::Sample* s = m_gigO[idx]->AddSample();
            s->CopyAssignMeta(pSample);
            mGroups[idx][pSample->GetGroup()]->AddSample(s);
            mSamples[idx][pSample] = s;
        }
        string name = pSample->pInfo->Name;
        if (name == "") name = "<NO NAME>";
        else            name = '\"' + name + '\"';
        m_sampleList[idx][name]=pSample;
        // determine group this sample belongs to
        int iGroup = 1;
        for (gig::Group* pGroup = gig->GetFirstGroup(); pGroup; pGroup = gig->GetNextGroup(), iGroup++) {
            if (pGroup == pSample->GetGroup()) break;
        }
        // print sample info
        cout << "    add: Sample " << samples << ") " << name << ", ";
        pSample = gig->GetNextSample();
    }
    //gigO->Save();
}


void gigFile::GetInstruments() {
    int instruments = 0;
    cout << "Available Instruments:" << endl;
    gig::Instrument* pInstrument = gig->GetFirstInstrument();
    int i=0;
    bool stop=false;
    while (pInstrument&&!stop) {
        instruments++;

        string name = pInstrument->pInfo->Name;
        if (!name.compare(instName)) {
            //gig::Instrument* newInstrument = gigO->AddInstrument();
            //newInstrument->CopyAssign(pInstrument, &mSamples);
            stop=true;
        }else 
        {
            pInstrument = gig->GetNextInstrument();
            continue;
        }
        m_instList[idx][name] = pInstrument;
        if (name == "") name = "<NO NAME>";
        else            name = '\"' + name + '\"';
        cout << "    Instrument " << instruments << ") " << name << ", ";

        cout << " MIDIBank=" << pInstrument->MIDIBank << ", MIDIProgram=" << pInstrument->MIDIProgram << endl;

        cout << "        ScriptSlots=" << pInstrument->ScriptSlotCount() << endl;
        for (int s = 0; s < (int)pInstrument->ScriptSlotCount(); ++s) {
            gig::Script* pScript = pInstrument->GetScriptOfSlot(s);
            string name = pScript->Name;
            cout << "        ScriptSlot[" << s << "]='" << name << "'\n";
        }

        if (i++==0) {
            GetRegions(pInstrument);
        }

        pInstrument = gig->GetNextInstrument();
    }
}


void gigFile::WriteInstruments() {
    int instruments = 0;
    cout << "Available Instruments:" << endl;
    gig::Instrument* pInstrument = gig->GetFirstInstrument();
    int i=0;
    bool stop=false;
    while (pInstrument&&!stop) {
        instruments++;
 
        string name = pInstrument->pInfo->Name;
        if (name==instName) {
            gig::Instrument* newInstrument = m_gigO[idx]->AddInstrument();
            newInstrument->CopyAssign(pInstrument, &mSamples[idx]);
            stop=true;
        }else 
        {
            pInstrument = gig->GetNextInstrument();
            continue;
        }
        m_instList[idx][name] = pInstrument;
        for (int s = 0; s < pInstrument->ScriptSlotCount(); ++s) {
            gig::Script* pScript = pInstrument->GetScriptOfSlot(s);
            string name = pScript->Name;
            cout << "        ScriptSlot[" << s << "]='" << name << "'\n";
        }

        if (i++==0) {
            GetRegions(pInstrument);
        }

        pInstrument = gig->GetNextInstrument();
    }
}



void gigFile::GetDimensionRegions(gig::Region* rgn) {
    int dimensionRegions = 0;
    gig::DimensionRegion* pDimensionRegion;
    int i=0;
    while (dimensionRegions < (int)rgn->DimensionRegions) {

        pDimensionRegion = rgn->pDimensionRegions[dimensionRegions];
        if (!pDimensionRegion) break;

        cout << "            Dimension Region " << dimensionRegions + 1 << ")" << endl;

        gig::Sample* pSample = pDimensionRegion->pSample;

        if (pSample) {

            //mSamples[pSample]->CopyAssignWave(pSample);
            samplesSet[idx].insert(pSample->pInfo->Name);
            cout << "                Add Sample: ";
            if (pSample->pInfo->Name != "") {
                cout << "\"" << pSample->pInfo->Name << "\", ";
            }
            cout << pSample->SamplesPerSecond << "Hz, ";
            cout << "UnityNote=" << (int) pDimensionRegion->UnityNote << ", FineTune=" << (int) pDimensionRegion->FineTune << ", Gain=" << (-pDimensionRegion->Gain / 655360.0) << "dB, SampleStartOffset=" << pDimensionRegion->SampleStartOffset << endl;
            if (i%5==0) {
                pDimensionRegion->SetGain(-13.333);
                pDimensionRegion->LFO3Frequency=32.0;
            }
        }
        else {
            cout << "                Sample: <NO_VALID_SAMPLE_REFERENCE> " << endl;
        }
        cout << "                LFO1Frequency=" << pDimensionRegion->LFO1Frequency << "Hz, LFO1InternalDepth=" << pDimensionRegion-> LFO1InternalDepth << ", LFO1ControlDepth=" << pDimensionRegion->LFO1ControlDepth << " LFO1Controller=" << pDimensionRegion->LFO1Controller << endl;
        cout << "                LFO2Frequency=" << pDimensionRegion->LFO2Frequency << "Hz, LFO2InternalDepth=" << pDimensionRegion-> LFO2InternalDepth << ", LFO2ControlDepth=" << pDimensionRegion->LFO2ControlDepth << " LFO2Controller=" << pDimensionRegion->LFO2Controller << endl;
        cout << "                LFO3Frequency=" << pDimensionRegion->LFO3Frequency << "Hz, LFO3InternalDepth=" << pDimensionRegion-> LFO3InternalDepth << ", LFO3ControlDepth=" << pDimensionRegion->LFO3ControlDepth << " LFO3Controller=" << pDimensionRegion->LFO3Controller << endl;
        cout << "                EG1PreAttack=" << pDimensionRegion->EG1PreAttack << "permille, EG1Attack=" << pDimensionRegion->EG1Attack << "s, EG1Decay1=" << pDimensionRegion->EG1Decay1 << "s,  EG1Sustain=" << pDimensionRegion->EG1Sustain << "permille, EG1Release=" << pDimensionRegion->EG1Release << "s, EG1Decay2=" << pDimensionRegion->EG1Decay2 << "s, EG1Hold=" << pDimensionRegion->EG1Hold << endl;
        cout << "                EG2PreAttack=" << pDimensionRegion->EG2PreAttack << "permille, EG2Attack=" << pDimensionRegion->EG2Attack << "s, EG2Decay1=" << pDimensionRegion->EG2Decay1 << "s,  EG2Sustain=" << pDimensionRegion->EG2Sustain << "permille, EG2Release=" << pDimensionRegion->EG2Release << "s, EG2Decay2=" << pDimensionRegion->EG2Decay2 << "s" << endl;
        cout << "                VCFEnabled=" << pDimensionRegion->VCFEnabled << ", VCFType=" << pDimensionRegion->VCFType << ", VCFCutoff=" << (int) pDimensionRegion->VCFCutoff << ",  VCFResonance=" << (int) pDimensionRegion->VCFResonance << ", VCFCutoffController=" << pDimensionRegion->VCFCutoffController << endl;
        cout << "                VelocityResponseCurve=";
        switch (pDimensionRegion->VelocityResponseCurve) {
            case gig::curve_type_nonlinear:
                cout << "NONLINEAR";
                break;
            case gig::curve_type_linear:
                cout << "LINEAR";
                break;
            case gig::curve_type_special:
                cout << "SPECIAL";
                break;
            case gig::curve_type_unknown:
            default:
                cout << "UNKNOWN - please report this !";
        }
        cout << ", VelocityResponseDepth=" << (int) pDimensionRegion->VelocityResponseDepth << ", VelocityResponseCurveScaling=" << (int) pDimensionRegion->VelocityResponseCurveScaling << endl;
        cout << "                Pan=" << (int) pDimensionRegion->Pan << endl;

        dimensionRegions++;
    }
}

void gigFile::GetRegions(gig::Instrument* instr) {
    int iRegion = 1;
    gig::Region* pRegion = instr->GetFirstRegion();
    while (pRegion) {
        cout << "        Region " << iRegion++ << ") ";
        gig::Sample* pSample = pRegion->GetSample();
        if (pSample) {
            cout << "Add Sample: ";
            samplesSet[idx].insert(pSample->pInfo->Name);
            if (pSample->pInfo->Name != "") {
                cout << "\"" << pSample->pInfo->Name << "\", ";
            }
            cout << pSample->SamplesPerSecond << "Hz, " << endl;
        }
        else {
            cout << "<NO_VALID_SAMPLE_REFERENCE> ";
        }
        cout << "            KeyRange=" << pRegion->KeyRange.low << "-" << pRegion->KeyRange.high << ", ";
        cout << "VelocityRange=" << pRegion->VelocityRange.low << "-" << pRegion->VelocityRange.high << ", Layers=" << pRegion->Layers << endl;
        cout << "            Loops=" << pRegion->SampleLoops << endl;
        cout << "            Dimensions=" << pRegion->Dimensions << endl;
        for (int iDimension = 0; iDimension < (int)pRegion->Dimensions; iDimension++) {
            cout << "            Dimension[" << iDimension << "]: Type=";
            gig::dimension_def_t DimensionDef = pRegion->pDimensionDefinitions[iDimension];
            switch (DimensionDef.dimension) {
                case gig::dimension_none:
                    cout << "NONE";
                    break;
                case gig::dimension_samplechannel: // If used sample has more than one channel (thus is not mono).
                    cout << "SAMPLECHANNEL";
                    break;
                case gig::dimension_layer: { // For layering of up to 8 instruments (and eventually crossfading of 2 or 4 layers).
                    gig::crossfade_t crossfade = pRegion->pDimensionRegions[iDimension]->Crossfade;
                    cout << "LAYER (Crossfade in_start=" << (int) crossfade.in_start << ",in_end=" << (int) crossfade.in_end << ",out_start=" << (int) crossfade.out_start << ",out_end=" << (int) crossfade.out_end << ")";
                    break;
                }
                case gig::dimension_velocity: // Key Velocity (this is the only dimension where the ranges can exactly be defined).
                    cout << "VELOCITY";
                    break;
                case gig::dimension_channelaftertouch: // Channel Key Pressure
                    cout << "AFTERTOUCH";
                    break;
                case gig::dimension_releasetrigger: // Special dimension for triggering samples on releasing a key.
                    cout << "RELEASETRIGGER";
                    break;
                case gig::dimension_keyboard: // Key Position
                    cout << "KEYBOARD";
                    break;
                case gig::dimension_roundrobin: // Different samples triggered each time a note is played, dimension regions selected in sequence
                    cout << "ROUNDROBIN";
                    break;
                case gig::dimension_random: // Different samples triggered each time a note is played, random order
                    cout << "RANDOM";
                    break;
                case gig::dimension_smartmidi: // For MIDI tools like legato and repetition mode
                    cout << "SMARTMIDI";
                    break;
                case gig::dimension_roundrobinkeyboard: // Different samples triggered each time a note is played, any key advances the counter
                    cout << "ROUNDROBINKEYBOARD";
                    break;
                case gig::dimension_modwheel: // Modulation Wheel (MIDI Controller 1)
                    cout << "MODWHEEL";
                    break;
                case gig::dimension_breath: // Breath Controller (Coarse, MIDI Controller 2)
                    cout << "BREATH";
                    break;
                case gig::dimension_foot: // Foot Pedal (Coarse, MIDI Controller 4)
                    cout << "FOOT";
                    break;
                case gig::dimension_portamentotime: // Portamento Time (Coarse, MIDI Controller 5)
                    cout << "PORTAMENTOTIME";
                    break;
                case gig::dimension_effect1: // Effect Controller 1 (Coarse, MIDI Controller 12)
                    cout << "EFFECT1";
                    break;
                case gig::dimension_effect2: // Effect Controller 2 (Coarse, MIDI Controller 13)
                    cout << "EFFECT2";
                    break;
                case gig::dimension_genpurpose1: // General Purpose Controller 1 (Slider, MIDI Controller 16)
                    cout << "GENPURPOSE1";
                    break;
                case gig::dimension_genpurpose2: // General Purpose Controller 2 (Slider, MIDI Controller 17)
                    cout << "GENPURPOSE2";
                    break;
                case gig::dimension_genpurpose3: // General Purpose Controller 3 (Slider, MIDI Controller 18)
                    cout << "GENPURPOSE3";
                    break;
                case gig::dimension_genpurpose4: // General Purpose Controller 4 (Slider, MIDI Controller 19)
                    cout << "GENPURPOSE4";
                    break;
                case gig::dimension_sustainpedal: // Sustain Pedal (MIDI Controller 64)
                    cout << "SUSTAINPEDAL";
                    break;
                case gig::dimension_portamento: // Portamento (MIDI Controller 65)
                    cout << "PORTAMENTO";
                    break;
                case gig::dimension_sostenutopedal: // Sostenuto Pedal (MIDI Controller 66)
                    cout << "SOSTENUTOPEDAL";
                    break;
                case gig::dimension_softpedal: // Soft Pedal (MIDI Controller 67)
                    cout << "SOFTPEDAL";
                    break;
                case gig::dimension_genpurpose5: // General Purpose Controller 5 (Button, MIDI Controller 80)
                    cout << "GENPURPOSE5";
                    break;
                case gig::dimension_genpurpose6: // General Purpose Controller 6 (Button, MIDI Controller 81)
                    cout << "GENPURPOSE6";
                    break;
                case gig::dimension_genpurpose7: // General Purpose Controller 7 (Button, MIDI Controller 82)
                    cout << "GENPURPOSE7";
                    break;
                case gig::dimension_genpurpose8: // General Purpose Controller 8 (Button, MIDI Controller 83)
                    cout << "GENPURPOSE8";
                    break;
                case gig::dimension_effect1depth: // Effect 1 Depth (MIDI Controller 91)
                    cout << "EFFECT1DEPTH";
                    break;
                case gig::dimension_effect2depth: // Effect 2 Depth (MIDI Controller 92)
                    cout << "EFFECT2DEPTH";
                    break;
                case gig::dimension_effect3depth: // Effect 3 Depth (MIDI Controller 93)
                    cout << "EFFECT3DEPTH";
                    break;
                case gig::dimension_effect4depth: // Effect 4 Depth (MIDI Controller 94)
                    cout << "EFFECT4DEPTH";
                    break;
                case gig::dimension_effect5depth:  // Effect 5 Depth (MIDI Controller 95)
                    cout << "EFFECT5DEPTH";
                    break;
                default:
                    cout << "UNKNOWN (" << int(DimensionDef.dimension) << ") - please report this !";
                    break;
            }
            cout << ", Bits=" << (uint) DimensionDef.bits << ", Zones=" << (uint) DimensionDef.zones;
            cout << ", SplitType=";
            switch (DimensionDef.split_type) {
                case gig::split_type_normal:
                    cout << "NORMAL" << endl;
                    break;
                case gig::split_type_bit:
                    cout << "BIT" << endl;
                    break;
                default:
                    cout << "UNKNOWN" << endl;
            }
        }

        GetDimensionRegions(pRegion);

        pRegion = instr->GetNextRegion();
    }
}
void gigFile::GetGroups( ) {
    int groups = 0;

    cout << "ALL defined Groups:" << endl;
    int i=0;
    for (gig::Group* pGroup = gig->GetFirstGroup(); pGroup; pGroup = gig->GetNextGroup()) {
        groups++;
        string name = pGroup->Name;
        if (name == "") name = "<NO NAME>";
        else            name = '\"' + name + '\"';
        cout << "    Group " << groups << ")" << endl;
        cout << "        Name: " << name << endl;
        gig::Group* g = m_gigO[idx]->AddGroup();
        g->Name = "COPY"  + pGroup->Name;
        mGroups[idx][pGroup] = g;
    }
    
}

/////////////////////////////////////////////////////////////////////////////
// The actual test cases (in order) ...

// 2. Run) create a new Gigasampler file from scratch
void gigFile::createNewGigFile(QString&  gigfilename)
{
    char const *filename=IN_GIG_FILE_NAME;
    FILE* hFile = fopen(filename, "r");
    std::ostringstream outfile;
    idx=idx%4;
    outfile << "/home/ray/projects/audio/gigfiles/"<<idx << ".gig";
    //outfile<< "/home/ray/projects/audio/gigfiles/5.gig";
    FILE* hFileO = fopen(outfile.str().c_str(), "w");
    if (!hFile||!hFileO) {
        cout << "Invalid file argument!" << endl;
    }

    fclose(hFile);
    fclose(hFileO);
    try {
        RIFF::File* riff = new RIFF::File(filename);
        gig::File*  gig  = new gig::File(riff);

        //RIFF::File* riff2 = new RIFF::File(outfile.str().c_str());
		if (m_gigO[idx])
			delete m_gigO[idx];
        gig::File *gigObj=new gig::File();
        m_gigO[idx]=gigObj;
        m_gigO[idx]->pInfo->Name = gigfilename.toStdString();

        GetFileInformations();
        cout << endl;
        GetGroups();
        cout << endl;
        GetSamples();
        cout << endl;

        GetInstruments();
        AddSamples();
        m_gigO[idx]->Save(outfile.str().c_str());
        WriteInstruments();
        //gig->Save(IN_GIG_FILE_NAME);
        m_gigO[idx]->Save(outfile.str().c_str());

        delete gig;
        delete riff;
    }catch (RIFF::Exception e) {
        std::cerr << "\nCould not create a new Gigasampler file from scratch:\n" << std::flush;
        e.PrintMessage();
        throw e; // stop further tests
    }
	m_gigName[idx]=QString::fromStdString(m_gigO[idx]->pInfo->Name);
}

void gigFile::newGigFile(QString  gigfilename) {
    int m=idx;
    instName=gigfilename.toStdString();
   instName.erase(std::remove_if(instName.begin(), instName.end(), [](char n){ return n == ':'; }), instName.end());
    createNewGigFile(gigfilename);
}

#define SET_GIG(a,b)  do {\
    gigFile *gigFileObj= gigFile::instance();\
    gig::File *gigfd=gigFileObj->m_gigO[idx]; \
    gig::Instrument* pInstrument = gigfd->GetFirstInstrument();\
    gig::Region *rgn=pInstrument->GetFirstRegion();\
    save[idx]=true;\
    while (rgn) {\
        gig::DimensionRegion* pDimensionRegion;\
        for (unsigned int dimensionRegions=0;(int)dimensionRegions < (int)rgn->DimensionRegions;dimensionRegions++) {\
            pDimensionRegion = rgn->pDimensionRegions[dimensionRegions];\
            pDimensionRegion->a=b;\
        }\
        rgn = pInstrument->GetNextRegion();\
    }\
}while(0)

#define SET_GIG_FUN(a,b)  do {\
    gigFile *gigFileObj= gigFile::instance();\
    gig::File *gigfd=gigFileObj->m_gigO[idx]; \
    gig::Instrument* pInstrument = gigfd->GetFirstInstrument();\
    gig::Region *rgn=pInstrument->GetFirstRegion();\
    save[idx]=true;\
    while (rgn) {\
        gig::DimensionRegion* pDimensionRegion;\
        for (int dimensionRegions=0; (int)dimensionRegions < (int)rgn->DimensionRegions;dimensionRegions++) {\
            pDimensionRegion = rgn->pDimensionRegions[dimensionRegions];\
            pDimensionRegion->a(b);\
        }\
        rgn = pInstrument->GetNextRegion();\
    }\
}while(0)




void gigFile::setGain(double gain)
{
    double v=gain;
    //SET_GIG(Gain, v);
}

void gigFile::setSync(int v)
{
    SET_GIG(LFO1Sync, v);
}
void gigFile::setFlipPhase(int v)
{
    //SET_GIG(LFO1Sync, v);
    do {
        gigFile *gigFileObj= gigFile::instance();
        gig::File *gigfd=gigFileObj->m_gigO[idx];
        gig::Instrument* pInstrument = gigfd->GetFirstInstrument();
        gig::Region *rgn=pInstrument->GetFirstRegion();
        save[idx]=true;
        while (rgn) {
            gig::DimensionRegion* pDimensionRegion;
            for (int dimensionRegions=0; (int)dimensionRegions < (int)rgn->DimensionRegions;dimensionRegions++) {
                pDimensionRegion = rgn->pDimensionRegions[dimensionRegions];
                pDimensionRegion->LFO1Sync=v;
            }
            rgn = pInstrument->GetNextRegion();
        }
    }while(0);
}
void gigFile::setOscController(int v)
{
//FIXME:
//FIXME:
}
void gigFile::setControlDepth(int v){
    SET_GIG(LFO1InternalDepth, v);
}

void gigFile::setFrequency(double v){
    SET_GIG(LFO1Frequency, v);
}
void gigFile::setCrossfadeOutEnd(int v){
    SET_GIG(Crossfade.out_end, v);
}
void gigFile::setCrossfadeOutStart(int v){
    SET_GIG(Crossfade.out_start, v);
}
void gigFile::setCrossfadeInEnd(int v){
    SET_GIG(Crossfade.in_end, v);
}

void gigFile::setCrossfadeInStart(int v){
    SET_GIG(Crossfade.in_start, v);
}

void gigFile::setAttCtrlThreshold(int v){
    SET_GIG(AttenuationControllerThreshold, v);
}

void gigFile::setInvertAttCtrl(int v){
    SET_GIG(InvertAttenuationController, v);
}

void gigFile::setCtrlReleaseInfluence(int v){
    SET_GIG(EG1ControllerAttackInfluence, v);
}
void gigFile::setCtrlDecayInfluence(int v){
    SET_GIG(EG1ControllerDecayInfluence, v);
}

void gigFile::setCtrlAttackInfluence(int v){
    SET_GIG(EG1ControllerAttackInfluence, v);
}

void gigFile::setControllerInvert(int v){
   SET_GIG( EG1ControllerInvert, v);
}


void gigFile::setGain6db(int gain)
{
    SET_GIG(Gain, gain);
}

void gigFile::setInternalDepth(int v)
{
    SET_GIG(LFO1InternalDepth, v);
}
void gigFile::setLVCFEnabled(int v)
{
    SET_GIG(VCFEnabled,v);
}
void gigFile::setPan(int pan)
{
    do {
    gigFile *gigFileObj= gigFile::instance();
    gig::File *gigfd=gigFileObj->m_gigO[idx]; 
    gig::Instrument* pInstrument = gigfd->GetFirstInstrument();
    gig::Region *rgn=pInstrument->GetFirstRegion();
    while (rgn) {
        gig::DimensionRegion* pDimensionRegion;
        for (unsigned int dimensionRegions=0;(int)dimensionRegions < (int)rgn->DimensionRegions;dimensionRegions++) {
            pDimensionRegion = rgn->pDimensionRegions[dimensionRegions];
            pDimensionRegion->Pan=pan;
        }
        rgn = pInstrument->GetNextRegion();
    }
}while(0);
   // SET_GIG(Pan, pan);
}
void gigFile::setPreAttackLevel(double PreAttackLevel)
{
    SET_GIG(EG1PreAttack, PreAttackLevel);
}

void gigFile::setAttackTime(double PreAttackLevel)
{
    SET_GIG(EG1Attack, PreAttackLevel);
}

void gigFile::setHoldAttack(int holdAttack)
{
    SET_GIG(EG1Hold, holdAttack);
}

void gigFile::setDecayTime1(double DecayTime1)
{
    SET_GIG(EG1Decay1, DecayTime1);
}

void gigFile::setDecayTime2(double DecayTime2)
{
    SET_GIG(EG1Decay2, DecayTime2);
}

void gigFile::setInfiniteSustain(int Sustain)
{
    SET_GIG(EG1InfiniteSustain, Sustain);
}

void gigFile::setSustainLevel(double v)
{
    SET_GIG(EG1Sustain, v);
}

void gigFile::setReleaseTime(double v)
{
    SET_GIG(EG1Release, v);
}
void gigFile::setEG1Controller(int v)
{
    gig::leverage_ctrl_t value;
/*
    m_cbController->addItem("None");
    m_cbController->addItem("ChannelAfterTouch");
    m_cbController->addItem("Velocity");
    m_cbController->addItem("CC1: Modwheel");
    m_cbController->addItem("CC2: Breath");
    m_cbController->addItem("CC3: Undefined [EXT]");
    m_cbController->addItem("CC4: Foot");
    m_cbController->addItem("CC5: Portamentotime");
    m_cbController->addItem("CC6: Data Entry MSB");
    m_cbController->addItem("CC7: Volume [EXT]");
    m_cbController->addItem("CC8: Balance [EXT]");
    m_cbController->addItem("CC9: Undefined [EXT]");
    m_cbController->addItem("CC10: Pan [EXT]");
    m_cbController->addItem("CC11: Expression [EXT]");
    m_cbController->addItem("CC12: Effect 1");
    m_cbController->addItem("CC13: Effect 2"); 
*/

    int rowno = v;
    switch (rowno)
    {
    case -1:
        break;
    case 0:
        value.type = gig::leverage_ctrl_t::type_none;
        break;
    case 1:
        value.type = gig::leverage_ctrl_t::type_channelaftertouch;
        break;
    case 2:
        value.type = gig::leverage_ctrl_t::type_velocity;
        break;
    default:
        value.type = gig::leverage_ctrl_t::type_controlchange;
        value.controller_number == rowno-3;
        break;
    }
     SET_GIG(EG1Controller, value);
}
void gigFile::setEG2Controller(int v)
{
    gig::leverage_ctrl_t value;
    int rowno = v;
    switch (rowno)
    {
    case -1:
        break;
    case 0:
        value.type = gig::leverage_ctrl_t::type_none;
        break;
    case 1:
        value.type = gig::leverage_ctrl_t::type_channelaftertouch;
        break;
    case 2:
        value.type = gig::leverage_ctrl_t::type_velocity;
        break;
    default:
        value.type = gig::leverage_ctrl_t::type_controlchange;
        value.controller_number = rowno;
        break;
    }
    SET_GIG(EG2Controller, value);
}


void gigFile::setVCFEnabled(int v)
{
    SET_GIG(VCFEnabled, v);
}

void gigFile::setVCFType(int v)
{
   static const gig::vcf_type_t values[] = {
            gig::vcf_type_lowpass,
            gig::vcf_type_lowpassturbo,
            gig::vcf_type_bandpass,
            gig::vcf_type_highpass,
            gig::vcf_type_bandreject
    };
    SET_GIG(VCFType, values[v]);
}

void gigFile::setCutoffControllerf(int v)
{
   static const gig::vcf_cutoff_ctrl_t values[] = {
            gig::vcf_cutoff_ctrl_none,
            gig::vcf_cutoff_ctrl_none2,
            gig::vcf_cutoff_ctrl_modwheel,
            gig::vcf_cutoff_ctrl_effect1,
            gig::vcf_cutoff_ctrl_effect2,
            gig::vcf_cutoff_ctrl_breath,
            gig::vcf_cutoff_ctrl_foot,
            gig::vcf_cutoff_ctrl_sustainpedal,
            gig::vcf_cutoff_ctrl_softpedal,
            gig::vcf_cutoff_ctrl_genpurpose7,
            gig::vcf_cutoff_ctrl_genpurpose8,
            gig::vcf_cutoff_ctrl_aftertouch
        };
    SET_GIG_FUN(SetVCFCutoffController, values[v]);
}

void gigFile::setVCFCutoffControllerInvert(int v)
{
    SET_GIG(VCFCutoffControllerInvert, v);
}

void gigFile::setVCFCutoff(int v)
{
    SET_GIG(VCFCutoff, v);
}


void gigFile::setVCFVelocityCurve(int v)
{
    static const gig::curve_type_t curve_type_values[] = {
        gig::curve_type_nonlinear,
        gig::curve_type_linear,
        gig::curve_type_special
    };
    SET_GIG_FUN(SetVCFVelocityCurve, curve_type_values[v]);
}

void gigFile::setVCFVelocityScale(int v)
{
    SET_GIG_FUN(SetVCFVelocityScale, v);
}

void gigFile::SetVelocityResponseDepth(int v)
{
    SET_GIG_FUN(SetVelocityResponseDepth, (uint8_t)v);
}
void gigFile::SetVCFVelocityDynamicRangef(int v)
{
    SET_GIG_FUN(SetVCFVelocityDynamicRange, v);
}

void gigFile::setVCFResonance(int v)
{
   static const gig::vcf_res_ctrl_t values[] = {
            gig::vcf_res_ctrl_none,
            gig::vcf_res_ctrl_genpurpose3,
            gig::vcf_res_ctrl_genpurpose4,
            gig::vcf_res_ctrl_genpurpose5,
            gig::vcf_res_ctrl_genpurpose6
        };
    SET_GIG(VCFResonance, values[v]);
}

void gigFile::setVCFResonanceDynamic(int v)
{

    SET_GIG(VCFResonanceDynamic, v);
}

void gigFile::setVCFResonanceController(int v)
{
    static const gig::vcf_res_ctrl_t values[] = {
            gig::vcf_res_ctrl_none,
            gig::vcf_res_ctrl_genpurpose3,
            gig::vcf_res_ctrl_genpurpose4,
            gig::vcf_res_ctrl_genpurpose5,
            gig::vcf_res_ctrl_genpurpose6
        };
    SET_GIG(VCFResonanceController, values[v]);
}

void gigFile::setVCFKeyboardTracking(int v)
{
    SET_GIG(VCFKeyboardTracking, v);
}

void gigFile::setVCFKeyboardTrackBpt(int v)
{
    SET_GIG(VCFKeyboardTrackingBreakpoint, v);
}

void gigFile::setEG2PreAttack(double v)
{
    SET_GIG(EG2PreAttack, v);
}

void gigFile::setEG2Attack(double v)
{
    SET_GIG(EG2Attack, v);
}


void gigFile::setEG2Decay1(double v)
{
    SET_GIG(EG2Decay1, v);
}

void gigFile::setEG2Decay2(double v)
{
    SET_GIG(EG2Decay2, v);
}

void gigFile::setEG2InfiniteSustain(int v)
{
    SET_GIG(EG2InfiniteSustain, v);
}

void gigFile::setEG2Sustain(double v)
{
    SET_GIG(EG2Sustain, v);
}

void gigFile::setEG2Release(double v)
{
    SET_GIG(EG2Sustain, v);
}

void gigFile::setEG2ControllerInvert(int v)
{
    SET_GIG(EG2ControllerInvert, v);
}

void gigFile::setEG2ControllerAttackInfluence(int v)
{
    SET_GIG(EG2ControllerAttackInfluence, v);
}


void gigFile::setEG2ControllerDecayInfluence(int v)
{
    SET_GIG(EG2ControllerDecayInfluence, v);
}

void gigFile::setEG2ControllerReleaseInfluence(int v)
{
    SET_GIG(EG2ControllerReleaseInfluence, v);
}


void gigFile::setLFO2Frequency(double v)
{

    SET_GIG(LFO2Frequency, v);
}

void gigFile::setLFO2InternalDepth(int v)
{
    SET_GIG(LFO2InternalDepth, v);
}

void gigFile::setLFO2ControlDepth(int v)
{
    SET_GIG(LFO2ControlDepth, v);
}

void gigFile::setLFO2Controller(int v)
{
   static const gig::lfo2_ctrl_t values[] = {
            gig::lfo2_ctrl_internal,
            gig::lfo2_ctrl_modwheel,
            gig::lfo2_ctrl_foot,
            gig::lfo2_ctrl_internal_modwheel,
            gig::lfo2_ctrl_internal_foot
        };
    SET_GIG(LFO2Controller, values[v]);
}

void gigFile::setLFO2FlipPhase(int v)
{
    SET_GIG(LFO2FlipPhase, v);
}

void gigFile::setLFO2Sync(int v)
{
    SET_GIG(LFO2Sync, v);
}

void gigFile::setFineTune(int v)
{
    SET_GIG(FineTune, v);
}


void gigFile::setPitchTrack(int v)
{
    SET_GIG(PitchTrack, v);
}

void gigFile::setEG3Attack(double v)
{
    SET_GIG(EG3Attack, v);
}


void gigFile::setEG3Depth(int v)
{
    SET_GIG(EG3Depth, v);
}


void gigFile::setLFO3InternalDepth(int v)
{
    SET_GIG(LFO3InternalDepth, v);
}


void gigFile::setLFO3Frequency(double v)
{
    SET_GIG(LFO3Frequency, v);
}

void gigFile::setLFO3Controller(int v)
{
    static const gig::lfo3_ctrl_t values[] = {
            gig::lfo3_ctrl_internal,
            gig::lfo3_ctrl_modwheel,
            gig::lfo3_ctrl_aftertouch,
            gig::lfo3_ctrl_internal_modwheel,
            gig::lfo3_ctrl_internal_aftertouch
        };
    SET_GIG(LFO3Controller, values[v]);
}
void gigFile::setLFO3ControlDepth(int v)
{
    SET_GIG(LFO3ControlDepth, v);
}

void gigFile::setLFO3Sync(int v)
{
    SET_GIG(LFO3Sync, v);
}

void gigFile::SetVelocityResponseCurvef(int v)
{
   static const gig::curve_type_t values[] = {
            gig::curve_type_nonlinear,
            gig::curve_type_linear,
            gig::curve_type_special
        };
    SET_GIG_FUN(SetVelocityResponseCurve, values[v]);
}

void gigFile::SetReleaseVelocityResponseCurvef(int v)
{
    static const gig::curve_type_t values[] = {
            gig::curve_type_nonlinear,
            gig::curve_type_linear,
            gig::curve_type_special
        };
    SET_GIG_FUN(SetReleaseVelocityResponseCurve, values[v]);
}

void gigFile::SetDimensionBypass(int v)
{
   static const gig::dim_bypass_ctrl_t values[] = {
            gig::dim_bypass_ctrl_none,
            gig::dim_bypass_ctrl_94,
            gig::dim_bypass_ctrl_95
        };
    SET_GIG(DimensionBypass, values[v]);
}

void gigFile::SetReleaseVelocityResponseDepthf(int v)
{
    SET_GIG_FUN(SetReleaseVelocityResponseDepth, v);
}

void gigFile::SetVelocityResponseCurveScalingf(int v)
{
    SET_GIG_FUN(SetVelocityResponseCurveScaling, v);
}
/*
void gigFile::SetReleaseVelocityResponseDepth(int v)
{
    SET_GIG_FUN(SetReleaseVelocityResponseDepth, v);
}
*/
void gigFile::setReleaseTriggerDecay(int v)
{
    SET_GIG(ReleaseTriggerDecay, v);
}

void gigFile::setSelfMask(int v)
{
    SET_GIG(SelfMask, v);
}

void gigFile::setSustainDefeat(int v)
{
    SET_GIG(SustainDefeat, v);
}

void gigFile::setMSDecode(int v)
{
    SET_GIG(MSDecode, v);
}

gig::File *gigFile::GetGigFile() {
    return gig;
}



#endif
