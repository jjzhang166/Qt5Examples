#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AreaCounter w;
    w.setWindowFlags(w.windowFlags()&~Qt::WindowMaximizeButtonHint&~Qt::WindowMaximized);
    w.show();

    return a.exec();
}
