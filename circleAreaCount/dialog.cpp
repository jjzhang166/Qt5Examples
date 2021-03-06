#include "dialog.h"
#include "ui_dialog.h"

const static double PI=3.1416;

AreaCounter::AreaCounter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AreaCounterDialog)
{
    ui->setupUi(this);
    //方案二：利用正则表达式来约束输入框中输入的数字是否为数值数据
    QRegExp rRegExp("[0-9]+[.]{1}[0-9]+");
    ui->radiusLabelEdit->setValidator(new QRegExpValidator(rRegExp,this));
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

    /*
    //输入框输入数据认证——缺省采用方案二
    //方案一：利用QByteArray分析半径输入框数据是否为数字或字母及其他符号
    QByteArray strByteArray = valueStr.toLatin1();
    const char *chString = strByteArray.data();
    int dotCount=0;
    while (*chString && *chString>='0' && *chString<='9' || *chString=='.')
    {
            if(dotCount<2)
                chString++;
            else
                break;

            if(*chString=='.') dotCount+=1;
    }

    if (*chString)
    {//not a digit,reset the number!
        ui->radiusLabelEdit->setText("0.0");
        ui->areaLabel_2->setText("0.0");
    }
    else
    {//is a digit,show the result!
        double valueDouble=valueStr.toDouble(&ok);
        double area=valueDouble*valueDouble*PI;
        ui->areaLabel_2->setText(tempStr.setNum(area));
    }
    //若要采用方案二，请注释掉方案一
    */


    double valueDouble=valueStr.toDouble(&ok);
    double area=valueDouble*valueDouble*PI;
    ui->areaLabel_2->setText(tempStr.setNum(area));
}

