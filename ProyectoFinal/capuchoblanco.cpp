#include "capuchoblanco.h"

capuchoblanco::capuchoblanco(QObject *parent) : QObject(parent)
{
   ancho=175;
   alto=154;
    cblanco= new QPixmap(":/capucho blanco.png");
}

QRectF capuchoblanco::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void capuchoblanco::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*cblanco,0,0,ancho,alto);
}
