#include "papas.h"

papas::papas(QObject *parent) : QObject(parent)
{
    ancho=32;
    alto=32;
    papa= new QPixmap(":/papa.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&papas::mover);
    timer->start(150);
}

QRectF papas::boundingRect() const //Construye el rectángulo sobre el que se dibuja la imagen
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void papas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) //Dibuja la imagen
{
    painter->drawPixmap(-ancho/2,-alto/2,*papa,0,0,ancho,alto);
}

void papas::mover() //Mueve la papa de forma horizontal
{
  setPos(x()+20,y());
  if((this->x())>=1233) delete this;
}


