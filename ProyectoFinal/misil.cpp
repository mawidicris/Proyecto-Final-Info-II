#include "misil.h"

misil::misil(QObject *parent) : QObject(parent)
{
    ancho=55;
    alto=55;
    bala= new QPixmap(":/misil.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&misil::mover);
    timer->start(5);
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
    int randomValue = qrand() % 60;
    setPos(x,-y);
    vx=v*cos(angulo);
    vy=v*sin(angulo)-a*dt;
    angulo=atan2(vy,vx);
    v= sqrt(vx*vx+ vy*vy);
    x+=vx*dt;
    y+=vy*dt-(a/2)*dt*dt;

    QList<QGraphicsItem*>balitas= collidingItems();
    for (int i=0,n=balitas.size();i<n;i++){
        if(typeid (*(balitas[i]))==typeid(capuchonegro)){
            balitas.append(this);
            x=1000;
            y=-250;
            v=80;
            angulo=randomValue;
            balitas.last()->setPos(x,-y);
            scene()->addItem(balitas.last());
            if(n==2)scene()->removeItem(balitas.at(i));
        }
        else if (typeid (*(balitas[i]))==typeid(capuchoblanco)){
            balitas.append(this);
            x=1000;
            y=-250;
            v=80;
            angulo=randomValue;
            balitas.last()->setPos(x,-y);
            scene()->addItem(balitas.last());
            scene()->removeItem(balitas.at(i));
    }
  }
}


