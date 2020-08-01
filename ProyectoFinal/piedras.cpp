#include "piedras.h"

piedras::piedras(QObject *parent) : QObject(parent)
{
    ancho=25;
    alto=25;
    piedra= new QPixmap(":/piedra.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&piedras::mover);    
    timer->start(150);
}

QRectF piedras::boundingRect() const //Construye el rectángulo sobre el que se dibuja la imagen
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void piedras::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) //Dibuja la imagen
{
    painter->drawPixmap(-ancho/2,-alto/2,*piedra,0,0,ancho,alto);
}

void piedras::mover() //Mueve la piedra de forma horizontal
{
   setPos(x()+15,y());
   if((this->x())>=1233) delete this;
}

