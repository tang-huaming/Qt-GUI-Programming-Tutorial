#include "mainwindow.h"
#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    // reset the main window size
    w.resize(640, 480);
    // set application main window title
    w.setWindowTitle(QObject::tr("My Application"));
    w.show();

    return a.exec();
}
