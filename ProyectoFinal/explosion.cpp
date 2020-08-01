#include "explosion.h"
Explosion::Explosion(QObject *parent) : QObject(parent)
{
  timer= new QTimer();

  filas=0;
  columnas=0;
  ancho=128;
  alto=128;
  bomba = new QPixmap(":/explo.png");
  connect(timer,&QTimer::timeout,this,&Explosion::actualizarbomba);
  timer->start(50);

}

void Explosion::actualizarbomba() //Mover entre filas y columnas de la imagen para actualizar el sprite
{
    columnas+=128;
    if(columnas>=512){
       columnas = 0;
       filas+=128;

    }

    this->update(-ancho/2,-alto/2,ancho,alto);

}
QRectF Explosion::boundingRect() const //Construye el rectángulo sobre el que se dibuja la imagen
{
 return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void Explosion::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) //Dibujar la imagen
{
    painter->drawPixmap(-ancho/2,-alto/2,*bomba,columnas,filas,ancho,alto);
}
