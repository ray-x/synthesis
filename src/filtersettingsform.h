#ifndef FILTERSETTINGSFORM_H
#define FILTERSETTINGSFORM_H

#include <QWidget>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QComboBox>
#include <QSpinBox>
#include <QCheckBox>
#include <QTableWidget>

namespace Ui {
class FilterSettingsForm;
}

class FilterSettingsForm : public QWidget
{
    Q_OBJECT

public:
    explicit FilterSettingsForm(QWidget *parent = 0);
    ~FilterSettingsForm();

    void clearTableSelection();
    bool eventFilter(QObject *obj, QEvent *event);

protected:

private:
    Ui::FilterSettingsForm *ui;

    QComboBox       *m_cbFilterType;
    QComboBox       *m_cbCutoffController;
    QComboBox       *m_cbVelocityCurve;
    QComboBox       *m_cbResonanceCtrl;
    QCheckBox       *m_ckbKbdTrack;
    QSpinBox        *m_sbCutoff;
    QSpinBox        *m_sbKbdTrackBreakpt;
    QSpinBox        *m_sbVelocityScale;
    QSpinBox        *m_sbVelocityDynRange;
    QSpinBox        *m_sbResonance;
    QCheckBox       *m_ckbResonanceDyn;
    QCheckBox       *m_ckbCutoffCtrlInvert;

    QDoubleSpinBox  *m_dsbPreAttackLevel;
    QDoubleSpinBox  *m_dspAttackTime;
    QDoubleSpinBox  *m_dspDecayTime1;
    QDoubleSpinBox  *m_dspDecayTime2;
    QDoubleSpinBox  *m_dspSustainLevel;
    QDoubleSpinBox  *m_dspReleaseTime;
    QSpinBox        *m_sbCtrlAttackInfluence;
    QSpinBox        *m_sbCtrlDecayInfluence;
    QSpinBox        *m_sbCtrlReleaseInfluence;
    QCheckBox       *m_ckbInfiniteSustain;
    QComboBox       *m_cbEGController;
    QCheckBox       *m_ckbControllerInvert;


    QDoubleSpinBox  *m_dsbFrequency;
    QSpinBox        *m_sbInternalDepth;
    QSpinBox        *m_sbControlDepth;
    QComboBox       *m_cbLFOController;
    QCheckBox       *m_ckbFlipPhase;
    QCheckBox       *m_ckbSync;

    int getRow(QTableWidget *tw, QObject *obj);

};

#endif // FILTERSETTINGSFORM_H
