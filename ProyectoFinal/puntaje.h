#ifndef PUNTAJE_H
#define PUNTAJE_H

#include <QObject>
#include <QGraphicsTextItem>
#include <QFont>
#include <QGraphicsScene>
#include <QDebug>
#include <QTimer>

class puntaje :public QGraphicsTextItem
{

public:
    QTimer *timer;

    puntaje(QGraphicsItem * parent=0);
        void increasepuntaje(int puntos);
        int score=0; //Puntaje inicial
        int getScore();
        void mover(int x, int y); //Función para mover el item de puntaje

signals:

};

#endif // PUNTAJE_H
