#include "capuchoblanco.h"

capuchoblanco::capuchoblanco(QObject *parent) : QObject(parent)
{
   ancho=175;
   alto=154;
   cblanco= new QPixmap(":/capucho blanco.png");
  // connect(timer,&QTimer::timeout,this,&capuchoblanco::disparar);
   //timer->start(200);
}

QRectF capuchoblanco::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void capuchoblanco::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*cblanco,0,0,ancho,alto);
}

/*void capuchoblanco::disparar(QList<piedras *> &lanzarpiedras, QGraphicsScene *escena)
{
    lanzarpiedras.append(new piedras);
    lanzarpiedras.last()->setPos(this->x()+10,this->y());
    escena->addItem(lanzarpiedras.last());
}*/



/*void capuchoblanco::mover()
{

}*/
