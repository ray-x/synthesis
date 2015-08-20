#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "presetbankform.h"
#include "splitbankform.h"
#include "favoriteform.h"
#include "frontbuttoneditform.h"
#include "usbform.h"
#include "categoriesform.h"
#include "effectsform.h"
#include "multisamplesform.h"
#include "soundbankform.h"
#include "soundsplitform.h"
#include "effectseditform.h"
#include "effectsform.h"
#include "categoriesform.h"
#include "soundeditform.h"
#include "effectsroutingform.h"

#include "gig.h"

#include <map>
#include <utility>
#include <string>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void GetInstruments();
    void GetFileInformations() ;
private:
    Ui::MainWindow *ui;

    PresetBankForm      *m_presetBankForm;
    SplitBankForm       *m_splitBankForm;
    FavoriteForm        *m_favoriteForm;
    FrontButtonEditForm *m_frontButtonEditForm;
    USBForm             *m_usbForm;
    CategoriesForm      *m_catForm;
    EffectsForm         *m_effectsForm;
    MultiSamplesForm    *m_multiSamplesForm;
    SoundBankForm       *m_soundBankForm;
    SoundSplitForm      *m_soundSplitForm;
    EffectsEditForm     *m_effectsEditForm;
    CategoriesForm      *m_categoriesForm;
    SoundEditForm       *m_soundEditForm;
    EffectsRoutingForm  *m_effectRoutingForm;
#ifdef __linux__
    gig::File *m_gig;
    QList<gig::Sample*> m_sampleList;
    // QList<gig::Instrument*> m_instrumentList;
    std::map<std::string, gig::Instrument*> m_instrumentList;
    QList<gig::Region *> m_regionList;
    QList<gig::DimensionRegion *> m_dimensionRegionList;
    QList<gig::Group*> m_groupList;


    void initMultiSampleList();
protected:
    bool keypres(QKeyEvent *keyevent);
    void GetDimensionRegions(gig::Region* rgn);
    void GetRegions(gig::Instrument* instr);
    void GetGroups();
    void GetSamples() ;

public slots:
    void loadInstrProperties(int instrIndex);

#endif
};

#endif // MAINWINDOW_H
