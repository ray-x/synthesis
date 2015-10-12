#ifndef SOUNDEDITFORM_H
#define SOUNDEDITFORM_H

#include <QWidget>
#include <QtWidgets/QLabel>
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
    int ui_tab;

private:
    Ui::SoundEditForm *ui;
    QLabel *lbSampleName[4];
    AmpSettingsForm     *m_ampSettingsForm;
    FilterSettingsForm  *m_filterSettingsForm;
    PitchSettingsForm   *m_pitchSettingsForm;
    MiscSettingsForm    *m_miscSettingsFrom;

    bool                m_sampleEnabled[4];
    void showEdit();

    void clearSelectedSample();

public slots:
    void changeSettings();
    void selectSample1();
    void selectSample2();
    void selectSample3();
    void selectSample4();
    void show();
signals:

private slots:

};

#endif // SOUNDEDITFORM_H
