#ifndef EFFECTSFORM_H
#define EFFECTSFORM_H

#include <QWidget>
#include <QStandardItem>

namespace Ui {
class EffectsForm;
}

class EffectsForm : public QWidget
{
    Q_OBJECT

public:

    friend class MainWindow;

    explicit EffectsForm(QWidget *parent = 0);
    ~EffectsForm();

private:
    Ui::EffectsForm *ui;
    QStandardItemModel* m_listModel;

signals:
    void effectSelected(QString effect);

public slots:
    void selectEffect();
};

#endif // EFFECTSFORM_H
