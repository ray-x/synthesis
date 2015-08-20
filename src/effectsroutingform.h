#ifndef EFFECTSROUTINGFORM_H
#define EFFECTSROUTINGFORM_H

#include <QWidget>
#include <QPushButton>

#include "effectswidget.h"
#include "effectroutinglink.h"

namespace Ui {
class EffectsRoutingForm;
}

class EffectsRoutingForm : public QWidget
{
    Q_OBJECT

public:

    friend class MainWindow;

    enum Samples{
        Sample1=0,
        Sample2,
        Sample3,
        Sample4
    };

    enum SampleLink{
        LR=0,
        IFX1,
        IFX2,
        IFX3,
        IFX4,
        OFF
    };

    enum EffectToLink{
        Effect1=0,
        Effect2,
        Effect3,
        Effect4,
    };

    enum MasterEffectLinkDirection{
        MFX1ToMXF2=0,
        MFX2ToMXF1
    };

    explicit EffectsRoutingForm(QWidget *parent = 0);
    ~EffectsRoutingForm();

    void resizeEvent(QResizeEvent*);

private:
    Ui::EffectsRoutingForm *ui;

    QString m_frameSelectedColor;
    QString m_frameUnselectedColor;

    EffectsWidget *m_effectsWidget;
    EffectRoutingLink *m_route;

    QPushButton *m_pbEffectClicked;

    QList<QPair<Samples,SampleLink> > m_sampleEffectLinkList;
    QList<QPair<EffectToLink,bool> > m_effectEffectLinkList;
    QList<QPair<MasterEffectLinkDirection,bool> > m_masterEffectLinkList;

public slots:
    void updateSampleEffectLink(int sampleIndex,int choiceIndex);
    void updateEffectEffectLink(int effectIndex,bool state);
    void updateMassterEffectLink(int effectIndex,bool state);
    void modifyEffectButtonText(QString text);
    void setClickedPbEffect(QPushButton* pb);

private slots:
    void scrollMaximum();
    void scrollMinimum();

signals:
    void effectClicked();

};

#endif // EFFECTSROUTINGFORM_H
