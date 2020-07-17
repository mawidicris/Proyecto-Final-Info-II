#include "tanqueta.h"

tanqueta::tanqueta(QObject *parent) : QObject(parent)
{
    ancho=512;
    alto=512;
    timer= new QTimer;
    carro= new QPixmap(":/tanqueta.png");
    setPos(1233,450);
    connect(timer,&QTimer::timeout,this,&tanqueta::lanzar);
    //timer->start(2000);
}

QRectF tanqueta::boundingRect() const
{
   return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void tanqueta::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*carro,0,0,ancho,alto);
}

void tanqueta::lanzar()
{
    QList<QGraphicsItem*>balas;
    balas.push_back(new misil);
    scene()->addItem(balas.last());
}



