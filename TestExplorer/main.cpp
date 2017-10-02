#include "mainwindow.h"
#include "secondframe.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    SecondFrame secondFrame;
    secondFrame.show();

    return a.exec();
}
