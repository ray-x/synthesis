#ifndef EFFECTSEDITFORM_H
#define EFFECTSEDITFORM_H

#include <QWidget>

namespace Ui {
class EffectsEditForm;
}

class EffectsEditForm : public QWidget
{
    Q_OBJECT

public:

    friend class MainWindow;

    explicit EffectsEditForm(QWidget *parent = 0);
    ~EffectsEditForm();

private:
    Ui::EffectsEditForm *ui;
};

#endif // EFFECTSEDITFORM_H
