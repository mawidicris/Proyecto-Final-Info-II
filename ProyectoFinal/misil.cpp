#include "misil.h"

misil::misil(QObject *parent) : QObject(parent)
{
    ancho=55;
    alto=55;
    bala= new QPixmap(":/misil.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&misil::mover);
    timer->start(2000);
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
  /* double rela=0.002;
   vy+=(a*T);
   x+=vx*T;
   y+=vy*T-(a/2)*T*T;
   yd=2*300-y;
   setPos(int(x*rela),int(yd*rela));*/
}
