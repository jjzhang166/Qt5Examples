#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AreaCounter w;
    //禁止窗口最大化
    w.setWindowFlags(w.windowFlags()&~Qt::WindowMaximizeButtonHint&~Qt::WindowMaximized);
    //固定窗口大小
    w.setFixedSize(294,91);
    w.show();

    return a.exec();
}
