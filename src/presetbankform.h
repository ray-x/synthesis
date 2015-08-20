#ifndef PRESETBANKFORM_H
#define PRESETBANKFORM_H

#include <QWidget>
#include <adsrgraph.h>
#include <QPushButton>

namespace Ui {
class PresetBankForm;
}

class PresetBankForm : public QWidget
{
    Q_OBJECT

public:

    friend class MainWindow;

    explicit PresetBankForm(QWidget *parent = 0);
    ~PresetBankForm();


    void resizeEvent(QResizeEvent *);


    QPushButton *sampleButtonClicked() const;

private:
    Ui::PresetBankForm *ui;
    ADSRGraph *m_adsrGraph1;
    ADSRGraph *m_adsrGraph2;
    ADSRGraph *m_adsrGraph3;
    ADSRGraph *m_adsrGraph4;

    QPushButton *m_sampleButtonClicked;

private slots:
    void setSampleButtonClicked();
public slots:
    void modifySampleButtonText(QString text);
};

#endif // PRESETBANKFORM_H
