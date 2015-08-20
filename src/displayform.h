#ifndef DISPLAYFORM_H
#define DISPLAYFORM_H

#include <QWidget>

namespace Ui {
class DisplayForm;
}

class DisplayForm : public QWidget
{
    Q_OBJECT

public:
    explicit DisplayForm(QWidget *parent = 0);
    ~DisplayForm();

private:
    Ui::DisplayForm *ui;
};

#endif // DISPLAYFORM_H
