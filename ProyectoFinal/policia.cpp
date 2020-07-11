#include "policia.h"

policia::policia(QObject *parent) : QObject(parent)
{
    timer= new QTimer();
    timer2 =new QTimer();
    columnas=0;
    ancho=70;
    alto=210;
    poli = new QPixmap(":/policia.png");
    connect(timer,&QTimer::timeout,this,&policia::actualizar);
    connect(timer2,&QTimer::timeout,this,&policia::mover);
    timer->start(500);
    timer2->start(300);

}

QRectF policia::boundingRect() const
{
  return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void policia::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*poli,columnas,0,ancho,alto);
}

void policia::actualizar()
{
    columnas+=70;
    if(columnas>=280){
        columnas=0;
    }

this->update(-ancho/2,-alto/2,ancho,alto);
}

void policia::mover()
{
  setPos(x()-10,y());
}
