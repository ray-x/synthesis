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
#include"gigfile.h"
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
    void GetFileInformations();
    void initMultiSampleList();
    gig::File *m_gig;
    gigFile m_gigObj;
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

protected:
    bool keypres(QKeyEvent *keyevent);


public slots:
    void loadInstrProperties(int instrIndex);

};

#endif // MAINWINDOW_H
