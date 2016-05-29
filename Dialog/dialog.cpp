#include "dialog.h"
#include "ui_dialog.h"

const static double PI=3.1416;

Dialog::Dialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_countButton_clicked()
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

void Dialog::on_radiusLabelEdit_textChanged(const QString &arg1)
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
