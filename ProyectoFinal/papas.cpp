#include "papas.h"

papas::papas(QObject *parent) : QObject(parent)
{
    ancho=32;
    alto=32;
    papa= new QPixmap(":/papa.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&papas::mover);
    timer->start(200);
}

QRectF papas::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void papas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*papa,0,0,ancho,alto);
}

void papas::mover()
{
  setPos(x()+15,y());

QList<QGraphicsItem*>papass= collidingItems();

  for (int i=0,n=papass.size();i<n;i++){
      if(typeid (*(papass[i]))==typeid(esmad)){
          pum->setPos(ujum->x(),ujum->y());
          scene()->addItem(new Explosion);
          papass.append(this);
          papass.last()->setPos(300,450);
         if(n==3) scene()->removeItem(papass.at(i));
      }
      else if (typeid (*(papass[i]))==typeid(policia)){
          papass.append(this);
          papass.last()->setPos(capucho->x(),capucho->y());
          if(n==2) scene()->removeItem(papass.at(i));
    }
  }
}


