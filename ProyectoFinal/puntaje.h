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
    //explicit puntaje(QObject *parent = nullptr);
    puntaje(QGraphicsItem * parent=0);
        void increasepapa();
        void increaserock();
       // int getScore();
        int score=0;
   // void aumentarpuntaje(int a);
signals:

};

#endif // PUNTAJE_H
