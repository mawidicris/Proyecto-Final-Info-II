#include "papas.h"

papas::papas(QObject *parent) : QObject(parent)
{
    ancho=32;
    alto=32;
    papa= new QPixmap(":/papa.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&papas::mover);
    timer->start(200);
}

QRectF papas::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void papas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*papa,0,0,ancho,alto);
}

void papas::mover()
{
  setPos(x()+15,y());
  if((this->x())>=1233) delete this;
}


