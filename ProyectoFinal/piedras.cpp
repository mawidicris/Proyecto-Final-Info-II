#include "piedras.h"

piedras::piedras(QObject *parent) : QObject(parent)
{
    ancho=25;
    alto=25;
    piedra= new QPixmap(":/piedra.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&piedras::mover);
    timer->start(200);
}

QRectF piedras::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void piedras::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*piedra,0,0,ancho,alto);
}

void piedras::mover()
{
    setPos(x()+15,y());

}
