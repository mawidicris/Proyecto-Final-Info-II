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
    //Q_OBJECT
public:
    QTimer *timer;

    puntaje(QGraphicsItem * parent=0);
        void increasepapa(int puntos);
        void increaserock(int puntos);
        int score=0;
        int getScore();

signals:

};

#endif // PUNTAJE_H
