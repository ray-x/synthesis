#ifndef FAVORITEFORM_H
#define FAVORITEFORM_H

#include <QWidget>

namespace Ui {
class FavoriteForm;
}

class FavoriteForm : public QWidget
{
    Q_OBJECT

public:

    friend class MainWindow;

    explicit FavoriteForm(QWidget *parent = 0);
    ~FavoriteForm();

private:
    Ui::FavoriteForm *ui;
};

#endif // FAVORITEFORM_H
