#ifndef MAINSYSTEMFORM_H
#define MAINSYSTEMFORM_H

#include <QWidget>

namespace Ui {
class MainSystemForm;
}

class MainSystemForm : public QWidget
{
    Q_OBJECT

public:
    explicit MainSystemForm(QWidget *parent = 0);
    ~MainSystemForm();

private:
    Ui::MainSystemForm *ui;
};

#endif // MAINSYSTEMFORM_H
