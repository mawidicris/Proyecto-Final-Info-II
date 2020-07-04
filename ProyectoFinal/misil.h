#ifndef MISIL_H
#define MISIL_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>

class misil : public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit misil(QObject *parent = nullptr);
    QPixmap *bala;
    QTimer *timer;
    //double vxo=-2,vyo=2,vx,vy,xo=100,yo=300,x,y,a=-9.8,T=0.00001,yd;
    //int n=0;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void mover();
};

#endif // MISIL_H
