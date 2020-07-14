#ifndef PIEDRAS_H
#define PIEDRAS_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QList>
#include <QGraphicsScene>
#include "policia.h"
#include "esmad.h"
#include "capuchoblanco.h"
#include "math.h"

#define dt 0.1

class piedras : public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit piedras(QObject *parent = nullptr);
    QPixmap *piedra;
    QTimer *timer;
    double v=80,vx,vy,px=1000,py=-450,a=9.8,yd,angulo=40;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    capuchoblanco *capuchobla;

signals:
 public slots:
   void mover();

};

#endif // PIEDRAS_H
