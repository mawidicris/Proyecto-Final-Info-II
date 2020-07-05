#include "gamines.h"

Gamines::Gamines()
{
    ancho=70;
    alto=70;
    Gamine= new QPixmap(":/gamin.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&Gamines::caida);
    timer->start(200);

}
QRectF Gamines::boundingRect() const
{
     return QRectF(-ancho/2,-alto/2,ancho,alto);
}
void Gamines::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*Gamine,0,0,ancho,alto);
}

void Gamines::caida()
{
   setPos(x(),y()+15);
}

