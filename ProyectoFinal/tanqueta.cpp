#include "tanqueta.h"

tanqueta::tanqueta(QObject *parent) : QObject(parent)
{
    ancho=512;
    alto=512;
    carro= new QPixmap(":/tanqueta.png");
}

QRectF tanqueta::boundingRect() const
{
   return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void tanqueta::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*carro,0,0,ancho,alto);
}
