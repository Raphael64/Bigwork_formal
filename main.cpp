#include "mw1.h"
#include <QApplication>
#include"mainwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    MW1 mw;
    mw.show();

    return a.exec();
}
