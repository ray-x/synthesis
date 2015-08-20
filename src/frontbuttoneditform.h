#ifndef FRONTBUTTONEDITFORM_H
#define FRONTBUTTONEDITFORM_H

#include <QWidget>

namespace Ui {
class FrontButtonEditForm;
}

class FrontButtonEditForm : public QWidget
{
    Q_OBJECT

public:

    friend class MainWindow;

    explicit FrontButtonEditForm(QWidget *parent = 0);
    ~FrontButtonEditForm();

private:
    Ui::FrontButtonEditForm *ui;
};

#endif // FRONTBUTTONEDITFORM_H
