#include "esmad.h"

esmad::esmad(QObject *parent) : QObject(parent)
{
  timer= new QTimer();
  timer2 =new QTimer();
  filas=0;
  columnas=0;
  ancho=115;
  alto=180;
  agente = new QPixmap(":/esmad.png");
  connect(timer,&QTimer::timeout,this,&esmad::actualizar);
  connect(timer2,&QTimer::timeout,this,&esmad::mover);
  timer->start(500);
  timer2->start(300);
}

void esmad::actualizar()
{
    columnas+=120;
    if(columnas>=345){
        columnas=0;
        filas+=170;
       if(filas>170){
           filas=0;
        }
    }

    this->update(-ancho/2,-alto/2,ancho,alto);
}

void esmad::mover()
{
 setPos(x()-10,y());
}

QRectF esmad::boundingRect() const
{
 return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void esmad::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*agente,columnas,filas,ancho,alto);
}

