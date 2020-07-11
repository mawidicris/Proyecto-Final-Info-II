#include "baretos.h"

baretos::baretos(QObject *parent) : QObject(parent)
{
    ancho=70;
    alto=70;
    bareto= new QPixmap(":/baretin.png");
    timer= new QTimer;
    timer2=new QTimer;
    connect(timer,&QTimer::timeout,this,&baretos::caida);
  // connect(timer2,&QTimer::timeout,this,&baretos::generar);
    timer->start(200);
    //timer2->start(2500);
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
    setPos(x(),y()+20);
}

void baretos::generar()
{
    int randomValue = qrand() % 1200;
    QList<QGraphicsItem*>bareti;
    bareti.append(this);
    bareti.last()->setPos(randomValue,50);

}
