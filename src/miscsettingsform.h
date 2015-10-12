#ifndef MISCSETTINGSFORM_H
#define MISCSETTINGSFORM_H

#include <QWidget>
#include <QSpinBox>
#include <QComboBox>
#include <QCheckBox>

namespace Ui {
class MiscSettingsForm;
}

class MiscSettingsForm : public QWidget
{
    Q_OBJECT

public:
    explicit MiscSettingsForm(QWidget *parent = 0);
    ~MiscSettingsForm();

    bool eventFilter(QObject *obj, QEvent *event);
public slots:
    void show();
private:
    Ui::MiscSettingsForm *ui;

    QComboBox   *m_cbVelRespCurve;
    QComboBox   *m_cbRelVelRespCurve;
    QComboBox   *m_cbDimBaypass;
    QSpinBox    *m_sbVelRespDepth;
    QSpinBox    *m_sbVelRespCurveScaling;
    QSpinBox    *m_sbRelVelRespDepth;
    QSpinBox    *m_sbRelTrigDecay;
    QCheckBox   *m_chkSelfMask;
    QCheckBox   *m_chkSustainDefeat;
    QCheckBox   *m_chkDecode;


};

#endif // MISCSETTINGSFORM_H
