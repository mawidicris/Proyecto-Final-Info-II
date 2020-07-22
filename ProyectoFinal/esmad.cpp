#include "esmad.h"
#include "puntaje.h"

esmad::esmad(QObject *parent) : QObject(parent)
{
  timer= new QTimer;
  timer2 =new QTimer;
  timer3= new QTimer;
  timer4=new QTimer;
  timer5=new QTimer;
  filas=0;
  columnas=0;
  ancho=115;
  alto=180;
  agente = new QPixmap(":/esmad.png");
  connect(timer,&QTimer::timeout,this,&esmad::actualizar);
  connect(timer2,&QTimer::timeout,this,&esmad::mover);
  connect(timer3,&QTimer::timeout,this,&esmad::colisionpapas);
  connect(timer4,&QTimer::timeout,this,&esmad::colisionpiedras);
  connect(timer5,&QTimer::timeout,this,&esmad::retroceder);
  timer->start(500);
  timer2->start(250);
  timer3->start(100);
  timer4->start(500);

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
 xo-=(1/mu)*v*dt;
 setPos(xo,y());
 QList<QGraphicsItem *>colision1=collidingItems();
 for (int i=0,j=colision1.size();i<j;i++){
         if(typeid (*colision1[i])==typeid(aceite)){
          mu=0.9;
          setPos(xo,y());
      }
   }
 if((this->x())<=0) delete this;
 }

void esmad::colisionpapas()
{
  Explosion *pum= new Explosion;
  aceite *liquid= new aceite;
  QList<QGraphicsItem *>colisiones=collidingItems();
  for (int i=0,j=colisiones.size();i<j;i++){
         if(typeid (*colisiones[i])==typeid(papas)){

           _puntaje->increasepapa(10);
           pum->setPos(colisiones.at(i)->x(),colisiones.at(i)->y());
           liquid->setPos(colisiones.at(i)->x(),(colisiones.at(i)->y())+50);
           scene()->addItem(pum);
           scene()->addItem(liquid);
           delete (colisiones.at(i));
           if(j%2==0) delete this;

         }
    }
}

void esmad::colisionpiedras()
{
    piedras *pied= new piedras;
    QList<QGraphicsItem *>colisio=collidingItems();
    for (int i=0,n=colisio.size();i<n;i++){
           if(typeid (*colisio[i])==typeid(piedras)){
              timer5->start(200);
              timer2->stop();
             pied->timer2->start(250);
            _puntaje->increaserock(5);
             delete (colisio.at(i));

          }
    }
}

void esmad::retroceder()
{
   ejecuciones++;
   xo+=10;
   setPos(xo,y());
   if(ejecuciones==4){
       timer5->stop();
       ejecuciones=0;
       timer2->start(250);
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


