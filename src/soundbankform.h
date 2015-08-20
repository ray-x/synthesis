#ifndef SOUNDBANKFORM_H
#define SOUNDBANKFORM_H

#include <QWidget>

namespace Ui {
class SoundBankForm;
}

class SoundBankForm : public QWidget
{
    Q_OBJECT

public:

    friend class MainWindow;

    explicit SoundBankForm(QWidget *parent = 0);
    ~SoundBankForm();

private:
    Ui::SoundBankForm *ui;
};

#endif // SOUNDBANKFORM_H
