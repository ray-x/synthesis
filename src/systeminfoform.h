#ifndef SYSTEMINFOFORM_H
#define SYSTEMINFOFORM_H

#include <QWidget>

namespace Ui {
class SystemInfoForm;
}

class SystemInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit SystemInfoForm(QWidget *parent = 0);
    ~SystemInfoForm();

private:
    Ui::SystemInfoForm *ui;
};

#endif // SYSTEMINFOFORM_H
