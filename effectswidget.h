#ifndef EFFECTSWIDGET_H
#define EFFECTSWIDGET_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class EffectsWidget;
}

class EffectsWidget : public QWidget
{
    Q_OBJECT

public:

    explicit EffectsWidget(QWidget *parent = 0);
    ~EffectsWidget();

private:
    Ui::EffectsWidget *ui;

signals:
    void sampleLinkedEffectChanged(int sampleIndex, int choiceIndex);
    void effectLinkStateChanged(int effectIndex, bool state);
    void masterEffectLinkStateChanged(int masterEffectIndex, bool state);
    void effectPbClicked(QPushButton *pb);

private slots:
    void emitSampleLinkedEffect(int choiceIndex);
    void emitEffectLinkState(bool state);
    void emitMasterEffectLinkState(bool state);
    void emitEffectPbClicked();
};

#endif // EFFECTSWIDGET_H
