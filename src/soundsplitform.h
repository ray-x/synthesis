#ifndef SOUNDSPLITFORM_H
#define SOUNDSPLITFORM_H

#include <QWidget>

namespace Ui {
class SoundSplitForm;
}

class SoundSplitForm : public QWidget
{
    Q_OBJECT

public:

    friend class MainWindow;

    explicit SoundSplitForm(QWidget *parent = 0);
    ~SoundSplitForm();

private:
    Ui::SoundSplitForm *ui;
};

#endif // SOUNDSPLITFORM_H
