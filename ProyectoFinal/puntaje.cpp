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

void puntaje::increasepuntaje(int puntos)
{
    score+=puntos;
    setPlainText(QString("PUNTAJE: ")+QString::number(score));
}

int puntaje::getScore()
{
    return score;
}

void puntaje::mover(int x, int y)
{
    setPos(x,y);
}




