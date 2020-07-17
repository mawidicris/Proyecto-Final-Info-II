#include "esmad.h"

esmad::esmad(QObject *parent) : QObject(parent)
{
  timer= new QTimer;
  timer2 =new QTimer;
  timer3= new QTimer;
  timer4=new QTimer;
  filas=0;
  columnas=0;
  ancho=115;
  alto=180;
  agente = new QPixmap(":/esmad.png");
  connect(timer,&QTimer::timeout,this,&esmad::actualizar);
  connect(timer2,&QTimer::timeout,this,&esmad::mover);
  connect(timer3,&QTimer::timeout,this,&esmad::colisionpapas);
  connect(timer4,&QTimer::timeout,this,&esmad::colisionpiedras);
  timer->start(500);
  timer2->start(300);
  timer3->start(300);
  timer4->start(300);
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

void esmad::colisionpapas()
{
  Explosion *pum= new Explosion;
  QList<QGraphicsItem *>colisiones=collidingItems();
  for (int i=0,j=colisiones.size();i<j;i++){
         if(typeid (*colisiones[i])==typeid(papas)){
           pum->setPos(colisiones.at(i)->x(),colisiones.at(i)->y());
           scene()->addItem(pum);
           scene()->removeItem(colisiones.at(i));
           qDebug()<<j;
           if(j%2==0) scene()->removeItem(this);
         }
    }
}

void esmad::colisionpiedras()
{
    QList<QGraphicsItem *>colisio=collidingItems();
    for (int i=0,n=colisio.size();i<n;i++){
           if(typeid (*colisio[i])==typeid(piedras)){
             scene()->removeItem(colisio.at(i));
             //Falta generar movimiento semiparabólico cuando colisionen
          }
    }
}

QRectF esmad::boundingRect() const
{
 return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void esmad::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*agente,columnas,filas,ancho,alto);
}


