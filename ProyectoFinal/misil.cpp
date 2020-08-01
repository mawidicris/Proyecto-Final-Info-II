#include "misil.h"

misil::misil(QObject *parent) : QObject(parent)
{
    ancho=55;
    alto=55;
    bala= new QPixmap(":/misil.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&misil::mover);
    timer->start(15);
}

QRectF misil::boundingRect() const //Construye el rectángulo sobre el que se dibuja la imagen
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void misil::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) //Dibujar la imagen
{
    painter->drawPixmap(-ancho/2,-alto/2,*bala,0,0,ancho,alto);
}


void misil::mover() //Genera el movimiento parabólico del misil
{

    setPos(x,-y);
    vx=v*cos(angulo);
    vy=v*sin(angulo)-a*dt;
    angulo=atan2(vy,vx);
    v= sqrt(vx*vx+ vy*vy);
    x+=vx*dt;
    y+=vy*dt-(a/2)*dt*dt;

}



