#ifndef PITCHSETTINGSFORM_H
#define PITCHSETTINGSFORM_H

#include <QWidget>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QComboBox>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QCheckBox>

namespace Ui {
class PitchSettingsForm;
}

class PitchSettingsForm : public QWidget
{
    Q_OBJECT

public:
    explicit PitchSettingsForm(QWidget *parent = 0);
    ~PitchSettingsForm();

    bool eventFilter(QObject *obj, QEvent *event);
public slots:
    void show();
private:
    Ui::PitchSettingsForm *ui;

    QCheckBox       *m_ckbPitchTrack;
    QDoubleSpinBox  *m_dsbAttack;
    QSpinBox        *m_spDepth;
    QSpinBox        *m_sbFineTune;

    QDoubleSpinBox  *m_dsbFrequency;
    QSpinBox        *m_sbInternalDepth;
    QSpinBox        *m_sbControlDepth;
    QComboBox       *m_cbController;
    QCheckBox       *m_ckbSync;



};

#endif // PITCHSETTINGSFORM_H
