#include "policia.h"

policia::policia(QObject *parent) : QObject(parent)
{
    timer= new QTimer;
    timer2 =new QTimer;
    timer3= new QTimer;
    timer4 =new QTimer;
    columnas=0;
    ancho=70;
    alto=210;
    poli = new QPixmap(":/policia.png");
    connect(timer,&QTimer::timeout,this,&policia::actualizar);
    connect(timer2,&QTimer::timeout,this,&policia::mover);
    connect(timer3,&QTimer::timeout,this,&policia::colisionpapas);
    connect(timer4,&QTimer::timeout,this,&policia::colisionpiedras);
    timer->start(500);
    timer2->start(300);
    timer3->start(300);
    timer4->start(300);
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
    xo-=(1/mu)*v*dt;
    setPos(xo,y());
    QList<QGraphicsItem *>colision1=collidingItems();
    for (int i=0,j=colision1.size();i<j;i++){
           if(typeid (*colision1[i])==typeid(aceite)){
             mu=0.9;
         }
      }
}

void policia::colisionpapas()
{
    //FALTA AUMENTAR EL PUNTAJE CADA VEZ QUE COLISIONEN
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
             scene()->removeItem(colisiones.at(i));
             scene()->removeItem(this);
      }
   }
}

void policia::colisionpiedras()
{
    //FALTA AUMENTAR EL PUNTAJE CADA VEZ QUE COLISIONEN
    QList<QGraphicsItem *>colisio=collidingItems();
    for (int i=0,n=colisio.size();i<n;i++){
           if(typeid (*colisio[i])==typeid(piedras)){
             scene()->removeItem(colisio.at(i));
              _puntaje->increaserock(8);
             if(n%3==0) scene()->removeItem(this); //REVISAR (NO ESTÁ FUNCIONANDO EL NÚMERO DE COLISIONES)
          }
    }
}

