#include "papas.h"

papas::papas(piedras *parent) : piedras(parent)
{
    ancho=32;
    alto=32;
    papa= new QPixmap(":/papa.png");
}

QRectF papas::boundingRect() const //Construye el rectángulo sobre el que se dibuja la imagen
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void papas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) //Dibuja la imagen
{
    painter->drawPixmap(-ancho/2,-alto/2,*papa,0,0,ancho,alto);
}
