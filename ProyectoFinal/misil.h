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
    double v=80,vx,vy,x=1000,y=-250,a=9.8,yd,angulo=40;


    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void mover();
};

#endif // MISIL_H

