#include "aceite.h"

aceite::aceite(QObject *parent) : QObject(parent)
{
    ancho=109;
    alto=42;
    timer=new QTimer;
    liquido= new QPixmap(":/aceite.png");
    connect(timer,&QTimer::timeout,this,&aceite::desaparecer);
    timer->start(10000);
}

QRectF aceite::boundingRect() const
{
   return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void aceite::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*liquido,0,0,ancho,alto);
}

void aceite::desaparecer()
{
    delete this;
}



