#include "dialog.h"
#include "ui_dialog.h"

const static double PI=3.1416;

AreaCounter::AreaCounter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AreaCounterDialog)
{
    ui->setupUi(this);
}

AreaCounter::~AreaCounter()
{
    delete ui;
}

void AreaCounter::on_countButton_clicked()
{
    ui->radiusLabelEdit->setText("0.0");
    ui->areaLabel_2->setText("0.0");
}

void AreaCounter::on_radiusLabelEdit_textChanged(const QString &arg1)
{
    bool ok;
    QString tempStr;
    QString valueStr=ui->radiusLabelEdit->text();
    //int valueInt=valueStr.toInt(&ok);
    //double area=valueInt*valueInt*PI;

    double valueDouble=valueStr.toDouble(&ok);
    double area=valueDouble*valueDouble*PI;
    ui->areaLabel_2->setText(tempStr.setNum(area));
}
