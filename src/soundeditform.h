#ifndef SOUNDEDITFORM_H
#define SOUNDEDITFORM_H

#include <QWidget>
#include "ampsettingsform.h"
#include "filtersettingsform.h"
#include "pitchsettingsform.h"
#include "miscsettingsform.h"

namespace Ui {
class SoundEditForm;
}

class SoundEditForm : public QWidget
{
    Q_OBJECT

public:
    explicit SoundEditForm(QWidget *parent = 0);
    ~SoundEditForm();

    bool eventFilter(QObject *obj, QEvent *event);

private:
    Ui::SoundEditForm *ui;

    AmpSettingsForm     *m_ampSettingsForm;
    FilterSettingsForm  *m_filterSettingsForm;
    PitchSettingsForm   *m_pitchSettingsForm;
    MiscSettingsForm    *m_miscSettingsFrom;

    bool                m_sampleEnabled1;
    bool                m_sampleEnabled2;
    bool                m_sampleEnabled3;
    bool                m_sampleEnabled4;

    void clearSelectedSample();

public slots:
    void changeSettings();
    void selectSample1();
    void selectSample2();
    void selectSample3();
    void selectSample4();

private slots:

};

#endif // SOUNDEDITFORM_H
