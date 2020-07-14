#include "piedras.h"

piedras::piedras(QObject *parent) : QObject(parent)
{
    ancho=25;
    alto=25;
    piedra= new QPixmap(":/piedra.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&piedras::mover);
    timer->start(200);
}

QRectF piedras::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void piedras::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*piedra,0,0,ancho,alto);
}

void piedras::mover()
{
    setPos(x()+15,y());

   QList<QGraphicsItem*>piedritas= collidingItems();
    for (int i=0,n=piedritas.size();i<n;i++){

        if(typeid (*(piedritas[i]))==typeid(esmad)){
           /* vx=v*cos(angulo);
            vy=-a*dt;
            angulo=atan2(vy,vx);
            v= sqrt(vx*vx+ vy*vy);
            px+=vx*dt;
            py+=-(a/2)*dt*dt;
            piedritas.last()->setPos(px,-py);*/
            piedritas.append(this);
            piedritas.last()->setPos(400,450);
            scene()->addItem(piedritas.last());
        }
        else if (typeid (*(piedritas[i]))==typeid(policia)){
            piedritas.append(this);
            piedritas.last()->setPos(capuchobla->x(),capuchobla->y());
            scene()->addItem(piedritas.last());
            if(n==3) scene()->removeItem(piedritas.at(i));
      }
   }
}
