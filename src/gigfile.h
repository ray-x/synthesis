#ifndef GIGFILE_H
#define GIGFILE_H

#include <QObject>
#include "gig.h"

#include <map>
#include <utility>
#include <string>
#include <list>
#include <QStandardItem>

class Group;
class Sample;
//#define INST_NAME "013 Marimba"
#define IN_GIG_FILE_NAME "/home/ray/projects/audio/gigfiles/CGM4LS.gig"
//#define IN_GIG_FILE_NAME "/home/ray/projects/audio/gigfiles/Marimba.gig"
#define TEST_GIG_FILE_NAME "/home/ray/projects/audio/gigfiles/Marimba_o.gig"
class gigFile : public QObject
{
    Q_OBJECT
public:
    explicit gigFile(QObject *parent = 0);
    gig::File *GetGigFile();
    void GetInstruments();
    void GetFileInformations();
    //void GetFileInformations();
    void createNewGigFile(QString& filename);
    gig::File *gig;
    gig::File *m_gigO[4];
    QString m_gigName[4];
    bool save[4]={false, false, false, false};
    std::string instName;
    int idx;
    QString bankfile[4];

    QList<gig::Instrument*> selInstruments[4];
    //QList<gig::Sample*> m_sampleList[4];
    std::map<std::string, gig::Instrument*> m_instrumentList[4];
    QList<gig::Region *> m_regionList[4];
    QList<gig::DimensionRegion *> m_dimensionRegionList[4];
    QList<gig::Group*> m_groupList[4];

    std::map< std::string, gig::Sample*> m_sampleList[4];

    std::map< std::string, gig::Instrument*> m_instList[4];
    std::map< std::string, gig::DimensionRegion*> m_DimRegList[4];
    std::map< std::string, gig::Region* > regList[4];
    std::set<std::string> samplesSet[4];

    std::map<gig::Group*,gig::Group*> mGroups[4];
    std::map<gig::Sample*,gig::Sample*> mSamples[4];



    //void initMultiSampleList();
    //gigFile *m_gig;
    static gigFile *instance()
    {
        if (!s_gigFile) {
            s_gigFile=new gigFile;
        }
        return s_gigFile;
    }

signals:

public slots:
    void newGigFile(QString);
    void setGain(double);
    void setGain6db(int);
    void setPan(int);
    void setPreAttackLevel(double);
    void setAttackTime(double);
    void setHoldAttack(int);
    void setDecayTime1(double);
    void setDecayTime2(double);
    void setSustainLevel(double);
    void setInfiniteSustain(int);
    void setReleaseTime(double);
    void setEG1Controller(int);
    void setControllerInvert(int);
    void setCtrlAttackInfluence(int);
    void setCtrlDecayInfluence(int);
    void setCtrlReleaseInfluence(int);
    void setInvertAttCtrl(int);
    void setAttCtrlThreshold(int);
    void setCrossfadeInStart(int);
    void setCrossfadeInEnd(int);
    void setCrossfadeOutStart(int);
    void setCrossfadeOutEnd(int);
    void setFrequency(double);
    void setControlDepth(int);
    void setOscController(int);
    void setFlipPhase(int);
    void setSync(int);
    void setVCFEnabled(int);
    void setVCFType(int);
    void setVCFCutoffControllerInvert(int);
    void setVCFCutoff(int);
    void setVCFVelocityCurve(int);
    void setVCFVelocityScale(int);
    void SetVCFVelocityDynamicRangef(int);
    void setVCFResonance(int);
    void setVCFResonanceDynamic(int);
    void setLVCFEnabled(int);

    void setVCFResonanceController(int);
    void setVCFKeyboardTracking(int);
    void setVCFKeyboardTrackBpt(int);
    void setEG2PreAttack(double);
    void setEG2Attack(double);
    void setEG2Controller(int);

    void setEG2Decay1(double);
    void setEG2Decay2(double);
    void setEG2InfiniteSustain(int);
    void setEG2Sustain(double);
    void setEG2Release(double);

    void setEG2ControllerInvert(int);
    void setEG2ControllerAttackInfluence(int);
    void setEG2ControllerReleaseInfluence(int);
    void setEG2ControllerDecayInfluence(int);
    void setLFO2Frequency(double);
    void setLFO2InternalDepth(int);
    void setLFO2ControlDepth(int);
    void setLFO2Controller(int);
    void setLFO2FlipPhase(int);
    void setLFO2Sync(int);
    void setFineTune(int);
    void setPitchTrack(int);
    void setEG3Attack(double);
    void setEG3Depth(int);
    void setLFO3InternalDepth(int);
    void setLFO3Sync(int);
    void setLFO3Frequency(double);
    void setLFO3Controller(int);
    void setLFO3ControlDepth(int);
    void setCutoffControllerf(int);
    void SetVelocityResponseCurvef(int);
    void SetReleaseVelocityResponseCurvef(int);
    void SetDimensionBypass(int);
    void SetVelocityResponseDepth(int);
    void SetVelocityResponseCurveScalingf(int);
    void SetReleaseVelocityResponseDepthf(int);
    void setReleaseTriggerDecay(int);
    void setSelfMask(int);
    void setSustainDefeat(int);
    void setMSDecode(int);
    void setInternalDepth(int);

protected:
    
    void GetDimensionRegions(gig::Region* rgn);
    void GetRegions(gig::Instrument* instr);
    void GetGroups();
    void GetSamples() ;

    void AddSamples();

    void WriteInstruments();

    static gigFile *s_gigFile;

};

#endif // GIGFILE_H
