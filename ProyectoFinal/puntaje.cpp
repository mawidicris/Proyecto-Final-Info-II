#include "puntaje.h"
#include <QFont>

puntaje::puntaje(QGraphicsItem *parent)
{

    timer = new QTimer;
    setPlainText(QString("PUNTAJE: ")+QString::number(score));
    setDefaultTextColor(Qt::black);
    setFont(QFont("playbill",18));
    setPos(500,30);


}

void puntaje::increasepapa(int puntos)
{
    score+=puntos;
    setPlainText(QString("PUNTAJE: ")+QString::number(score));
}

void puntaje::increaserock(int puntos)
{
    score+=puntos;
    setPlainText(QString("PUNTAJE: ")+QString::number(score));
}

int puntaje::getScore()
{
    return score;
}




