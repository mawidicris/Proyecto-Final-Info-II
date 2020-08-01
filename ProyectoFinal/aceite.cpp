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

QRectF aceite::boundingRect() const //Construye el rectángulo sobre el que se dibuja la imagen
{
   return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void aceite::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) //Dibujar la imagen
{
    painter->drawPixmap(-ancho/2,-alto/2,*liquido,0,0,ancho,alto);
}

void aceite::desaparecer() //Función para eliminar el aceite cada 10 segundos
{
    delete this;
}



