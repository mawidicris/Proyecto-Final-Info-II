#ifndef MISIL_H
#define MISIL_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QGraphicsScene>
#include <math.h>
#include <QList>
#include "capuchoblanco.h"
#include "capuchonegro.h"
#include "explosion.h"


#define dt 0.1


class misil : public QObject,public QGraphicsItem
{

    Q_OBJECT
public:
    explicit misil(QObject *parent = nullptr);
    QPixmap *bala;
    QTimer *timer;
    double angulos[3]={40,90,210}; //Ángulos de disparo del misil
    int pos = rand() % 3;
    double v=64,vx,vy,x=990,y=-250,a=9.8,yd,angulo=angulos[pos]; //velocidad, aceleración y posiciones del misil


    float ancho,alto; //Ancho y alto de la imagen
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void mover();
};

#endif // MISIL_H

