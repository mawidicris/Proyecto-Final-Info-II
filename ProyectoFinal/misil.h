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
    double vxo,vyo,vx=0,vy=0,xo,yo,y,x,a,T,yd=0;
    int n=0;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void mover();
};

#endif // MISIL_H
