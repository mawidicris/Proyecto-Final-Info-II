#include "misil.h"

misil::misil(QObject *parent) : QObject(parent)
{
    ancho=55;
    alto=55;

    vxo=30;
    vyo=60;
    xo=30;
    yo=230;
    //x=xo;
    //y=yo;
    a=-9.8;
    T=0.0001;

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
    n++;
    vx=vxo;
    vy=vyo+a*(n*T);
    x=xo+vx*(n*T);
    y=yo+vy*(n*T)-(a/2)*(n*T)*(n*T);
    yd=yo-y;*/

   //double rela=0.02;

   vx=vxo;
   vy+=(a*T);
   x+=vxo*T;
   y+=vy*T-(a/2)*(T*T);
   yd=2*yo-y;
   setPos(x,yd);
}
