#include "misil.h"

misil::misil(QObject *parent) : QObject(parent)
{
    ancho=55;
    alto=55;
    bala= new QPixmap(":/misil.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&misil::mover);
    timer->start(10);
}

QRectF misil::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void misil::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*bala,0,0,ancho,alto);
}


void misil::mover()
{

//implementacion de ecuaciones en diferencias
  /* vy+=(a*dt);
   x+=vx*dt;
   y+=vy*dt-(a/2)*dt*dt;
   //yd=2*300-y;
   setPos(x,y);*/

//implementacion de ecuaciones paramétricas
    /*x+=cos(1.39)*dt;
    y+=sin(1.39)*dt-(a/2)*dt*dt;
    yd=-y;
    setPos(x,yd);*/
}
