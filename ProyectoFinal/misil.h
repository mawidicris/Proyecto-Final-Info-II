#ifndef MISIL_H
#define MISIL_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <math.h>


#define dt 0.08


class misil : public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit misil(QObject *parent = nullptr);
    QPixmap *bala;
    QTimer *timer;
    float vx,vy,x,y,a=9.8,yd;

    float ancho,alto;
    float px,py;
    float acum;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void mover();
};

#endif // MISIL_H

