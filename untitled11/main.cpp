#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQuick/QQuickView>
#include "bai4.h"
#include "b43.h"
#include "b44.h"
#include "b46.h"
#include "b45.h"
#include "b47.h"
int main(int argc, char *argv[])
{
   QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    qmlRegisterType<Bai4>("Bai4", 1, 0, "Bai4");
    qmlRegisterType<B43>("B43",1,0, "B43");
    qmlRegisterType<B44>("B44",1,0, "B44");
    qmlRegisterType<B46>("B46",1,0, "B46");
    qmlRegisterType<B45>("B45",1,0, "B45");
    qmlRegisterType<B47>("B47",1,0, "B47");
     //QQuickView view;
    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();
}
