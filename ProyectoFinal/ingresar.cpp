#include "ingresar.h"

ingresar::ingresar(QObject *parent) : QObject(parent)
{

}

bool ingresar::comprobar()
{
    leer.open("usuarios.txt");
    while (!leer.eof()){
        leer>>usuario>>clave;
        qDebug()<<usuario;
    }
}
