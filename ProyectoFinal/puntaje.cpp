#include "puntaje.h"


puntaje::puntaje(QObject *parent)
{
}

void puntaje::aumentarpuntaje(int a)
{
    Puntaje+=a;
    qDebug()<<"Puntaje"<<Puntaje;

}
