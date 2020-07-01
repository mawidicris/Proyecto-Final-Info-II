#include "capuchonegro.h"

capuchonegro::capuchonegro(QObject *parent) : QObject(parent)
{
  ancho=175;
  alto=154;
  cnegro= new QPixmap(":/capucho negro.png");
}

QRectF capuchonegro::boundingRect() const
{
   return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void capuchonegro::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
   painter->drawPixmap(-ancho/2,-alto/2,*cnegro,0,0,ancho,alto);
}
