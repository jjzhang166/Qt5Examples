#ifndef DIALOG_H
#define DIALOG_H

#include <QMainWindow>

namespace Ui {
class AreaCounterDialog;
}

class AreaCounter : public QMainWindow
{
    Q_OBJECT

public:
    explicit AreaCounter(QWidget *parent = 0);
    ~AreaCounter();

private slots:
    void on_countButton_clicked();

    void on_radiusLabelEdit_textChanged(const QString &arg1);

private:
    Ui::AreaCounterDialog *ui;
};

#endif // DIALOG_H
