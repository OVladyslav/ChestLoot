#include "mainwindow.h"
#include "logger.h"

#include <QApplication>

Logger* Logger::instance = nullptr;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
