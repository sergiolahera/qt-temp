#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QFile>
#include <QTextStream>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "windowStats_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    // DARK THEME
    a.setStyleSheet(
        "QMainWindow {"
        " background-color: rgb(36, 36, 36);"
        "}"
        "QMenuBar {"
        " background-color: rgb(45, 45, 45);"
        " color: white;"
        "}"
        "QMenuBar::item:selected {"
        " background-color: rgb(60, 60, 60);"
        "}"
        "QMenu {"
        " background-color: rgb(45, 45, 45);"
        " color: white;"
        "}"
        "QMenu::item:selected {"
        " background-color: rgb(60, 60, 60);"
        "}"
        );

    MainWindow w;
    w.show();
    return a.exec();
}


