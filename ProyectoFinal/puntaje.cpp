#include "puntaje.h"
#include <QFont>

puntaje::puntaje(QGraphicsItem *parent)
{
    //inicializar score en 0
    //score = 0;

    //draw the text
    timer = new QTimer;
    //connect(timer,&QTimer::timeout,this,&puntaje::increasepapa);
    //timer->start(200);
    setPlainText(QString("Score: ")+QString::number(score));
    setDefaultTextColor(Qt::black);
    setFont(QFont("playbill",18));


}

void puntaje::increasepapa(int puntos)
{
    score+=puntos;
    setPlainText(QString("Score: ")+QString::number(score));
    qDebug()<<score;
}

void puntaje::increaserock(int puntos)
{
    score+=puntos;
    setPlainText(QString("Score: ")+QString::number(score));
    qDebug()<<score;
}

int puntaje::getScore()
{
    return score;
}




