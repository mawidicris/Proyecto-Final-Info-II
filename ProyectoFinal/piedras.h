#ifndef PIEDRAS_H
#define PIEDRAS_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QGraphicsScene>

class piedras : public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit piedras(QObject *parent = nullptr);
    QPixmap *piedra;
    QTimer *timer;
    double xo,yo,g=9.8,vix=60,t=0.1;


    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
 public slots:
   void mover();

};

#endif // PIEDRAS_H
