#ifndef SPLITBANKFORM_H
#define SPLITBANKFORM_H

#include <QWidget>

namespace Ui {
class SplitBankForm;
}

class SplitBankForm : public QWidget
{
    Q_OBJECT

public:

    friend class MainWindow;

    explicit SplitBankForm(QWidget *parent = 0);
    ~SplitBankForm();

private:
    Ui::SplitBankForm *ui;
};

#endif // SPLITBANKFORM_H
