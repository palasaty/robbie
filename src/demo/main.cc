#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QPushButton *button = new QPushButton ("Hello world!");
    button->show();
    return app.exec();
}
