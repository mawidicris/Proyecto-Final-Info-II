#include "ingresar.h"
#include <QApplication>
#include <QGraphicsScene>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ingresar w;
    w.show();
    return a.exec();
}
