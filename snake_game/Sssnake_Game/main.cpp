#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    Gamezone g;
    Gameover v;
    QObject::connect(&w,SIGNAL(mainGame()),&g,SLOT(recvwidget()));
    QObject::connect(&g,SIGNAL(over()),&v,SLOT(recv()));
    return a.exec();
}
