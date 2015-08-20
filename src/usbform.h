#ifndef USBFORM_H
#define USBFORM_H

#include <QWidget>

namespace Ui {
class USBForm;
}

class USBForm : public QWidget
{
    Q_OBJECT

public:

    friend class Mainwindow;

    explicit USBForm(QWidget *parent = 0);
    ~USBForm();

private:
    Ui::USBForm *ui;
};

#endif // USBFORM_H
