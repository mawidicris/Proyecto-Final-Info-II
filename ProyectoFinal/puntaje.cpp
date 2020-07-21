#include "puntaje.h"
#include <QFont>

puntaje::puntaje(QGraphicsItem *parent)
{
    //inicializar score en 0
    score = 0;

    //draw the text
    timer = new QTimer;
    connect(timer,&QTimer::timeout,this,&puntaje::increasepapa);
    timer->start(200);
    setPlainText(QString("Score: ")+QString::number(score));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));


}

void puntaje::increasepapa()
{
    score+=10;
    setPlainText(QString("Score: ")+QString::number(score));
    qDebug()<<score;
}

void puntaje::increaserock()
{
    score+=5;
    setPlainText(QString("Score: ")+QString::number(score));
    qDebug()<<score;
}




