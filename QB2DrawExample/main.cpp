#include <QApplication>
#include "mainwindow.h"
#include "graphicsviewwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GraphicsViewWindow w;
    w.show();
    
    return a.exec();
}
