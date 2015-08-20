#include "mainwindow.h"
#include <QApplication>
#include <QFontDatabase>
#include <QDebug>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString fontName(QLatin1String(":font/OpenSans/OpenSans-Bold.ttf"));
    int appFontId = QFontDatabase::addApplicationFont(fontName);
    if (appFontId < 0){
        qWarning() << "Attempt to load application font: "<< fontName << " failed.";
    }

    MainWindow w;
    w.setWindowFlags( Qt::CustomizeWindowHint );
    w.show();

    return a.exec();
}
