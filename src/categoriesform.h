#ifndef CATEGORIESFORM_H
#define CATEGORIESFORM_H

#include <QWidget>

namespace Ui {
class CategoriesForm;
}

class CategoriesForm : public QWidget
{
    Q_OBJECT

public:

    friend class MainWindow;

    explicit CategoriesForm(QWidget *parent = 0);
    ~CategoriesForm();

private:
    Ui::CategoriesForm *ui;
};

#endif // CATEGORIESFORM_H
