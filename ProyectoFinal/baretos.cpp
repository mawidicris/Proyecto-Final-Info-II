#include "baretos.h"

baretos::baretos(QObject *parent) : QObject(parent)
{
    ancho=70;
    alto=70;
    bareto= new QPixmap(":/baretin.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&baretos::caida);
    timer->start(200);
}

QRectF baretos::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void baretos::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*bareto,0,0,ancho,alto);
}

void baretos::caida()
{
   setPos(x(),y()+15);
}