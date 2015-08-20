#ifndef MULTISAMPLESFORM_H
#define MULTISAMPLESFORM_H

#include <QWidget>
#include <QStandardItem>

namespace Ui {
class MultiSamplesForm;
}

class MultiSamplesForm : public QWidget
{
    Q_OBJECT

public:

    friend class MainWindow;

    explicit MultiSamplesForm(QWidget *parent = 0);
    ~MultiSamplesForm();

private:
    Ui::MultiSamplesForm *ui;
    QStandardItemModel* m_listModel;

signals:
    void sampleSelected(QString sample);
    void sampleSelected(int row);

public slots:
    void selectSample();
};

#endif // MULTISAMPLESFORM_H
