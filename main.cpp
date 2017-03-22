#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QZXing.h>

int main(int argc, char *argv[])
{
	QGuiApplication app(argc, argv);

	QQmlApplicationEngine engine;
	QZXing::registerQMLTypes();
	engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

	return app.exec();
}
