#ifndef AMPSETTINGSFORM_H
#define AMPSETTINGSFORM_H

#include <QWidget>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QComboBox>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QCheckBox>
#include <QTableWidget>

namespace Ui {
class AmpSettingsForm;
}

class AmpSettingsForm : public QWidget
{
    Q_OBJECT

public:
    explicit AmpSettingsForm(QWidget *parent = 0);
    ~AmpSettingsForm();

    bool eventFilter(QObject *obj, QEvent *event);

private:
    Ui::AmpSettingsForm *ui;

    QDoubleSpinBox      *m_dsbGain;
    QDoubleSpinBox      *m_dsbPreAttackLevel;
    QDoubleSpinBox      *m_dspAttackTime;
    QDoubleSpinBox      *m_dspDecayTime1;
    QDoubleSpinBox      *m_dspDecayTime2;
    QDoubleSpinBox      *m_dspSustainLevel;
    QDoubleSpinBox      *m_dspReleaseTime;
    QSpinBox            *m_sbCtrlAttackInfluence;
    QSpinBox            *m_sbCtrlDecayInfluence;
    QSpinBox            *m_sbPan;
    QSpinBox            *m_sbCtrlReleaseInfluence;
    QCheckBox           *m_ckbHoldAttack;
    QCheckBox           *m_ckbInfiniteSustain;
    QComboBox           *m_cbController;
    QCheckBox           *m_ckbGain6db;
    QCheckBox           *m_ckbControllerInvert;

    QComboBox           *m_cbAttCtrl;
    QCheckBox           *m_ckbInvertAttCtrl;
    QSpinBox            *m_sbAttCtrlThreshold;
    QSpinBox            *m_sbInStart;
    QSpinBox            *m_sbInEnd;
    QSpinBox            *m_sbOutStart;
    QSpinBox            *m_sbOutEnd;
    QDoubleSpinBox      *m_dsbFrequency;
    QSpinBox            *m_sbInternalDepth;
    QSpinBox            *m_sbControlDepth;
    QCheckBox           *m_ckbFlipPhase;
    QCheckBox           *m_ckbSync;
    QComboBox           *m_cbOscController;

    bool                isTabClicked;

    int getRow(QTableWidget *tw, QObject *obj);

private slots:
//    void connectTables(int currentRow, int currentColumn, int previousRow, int previousColumn);


};

#endif // AMPSETTINGSFORM_H
