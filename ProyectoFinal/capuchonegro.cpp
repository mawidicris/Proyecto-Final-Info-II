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

void capuchonegro::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    this->setPos(mapToScene(event->pos()));
}

void capuchonegro::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ClosedHandCursor));
       Q_UNUSED(event);
}

void capuchonegro::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}
