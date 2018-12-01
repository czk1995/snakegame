#include "widget.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QDesktopWidget *desktop=a.desktop();
//    int width=desktop->width();
//    int height=desktop->height();
//    qDebug()<<"screen resolution: "<<width<<height;
    Widget w;
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.setWindowState(Qt::WindowFullScreen);
    w.show();
    return a.exec();
}
