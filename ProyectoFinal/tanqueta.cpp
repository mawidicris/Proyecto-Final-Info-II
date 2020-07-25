#include "tanqueta.h"

tanqueta::tanqueta(QObject *parent) : QObject(parent)
{
    ancho=286;
    alto=200;
    timer= new QTimer;
    timer2=new QTimer;
    timer3=new QTimer;

    carro= new QPixmap(":/tanqueta.png");
    setPos(1135,355);
    connect(timer,&QTimer::timeout,this,&tanqueta::lanzar);
    connect(timer2,&QTimer::timeout,this,&tanqueta::colisionconpapas);
    connect(timer3,&QTimer::timeout,this,&tanqueta::colisionconpiedras);
    timer->start(4000);
    timer2->start(300);
    timer3->start(300);
}

QRectF tanqueta::boundingRect() const
{
   return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void tanqueta::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*carro,0,0,ancho,alto);
}


void tanqueta::colisionconpapas()
{
   QMediaPlayer *sonido= new QMediaPlayer();
   sonido->setMedia(QUrl("qrc:/explosion.wav"));
   QGraphicsPixmapItem *ganaste= new QGraphicsPixmapItem;
   ganaste->setPixmap(QPixmap(":/ganaste.png"));
   ganaste->setPos(400,250);
   QList<QGraphicsItem *>colisiones=collidingItems();

   for (int i=0,j=colisiones.size();i<j;i++){
           if(typeid (*colisiones[i])==typeid(papas)){
               //_puntos->increasepuntaje(15);
               sonido->play();
               delete (colisiones.at(i));
               vida-=3;
               if(vida<=0){
                  scene()->addItem(ganaste);
                  //_puntos->mover(650,380);
                  delete this;
            }        }
    }
}

void tanqueta::colisionconpiedras()
{
    QGraphicsPixmapItem *ganaste= new QGraphicsPixmapItem;
    ganaste->setPixmap(QPixmap(":/ganaste.png"));
    ganaste->setPos(400,250);
    QList<QGraphicsItem *>colisiones=collidingItems();

    for (int i=0,j=colisiones.size();i<j;i++){
           if(typeid (*colisiones[i])==typeid(piedras)){
               //_puntos->increasepuntaje(10);
               delete (colisiones.at(i));
               vida-=1;
               if(vida<=0){
                   scene()->addItem(ganaste);
                   //_puntos->mover(650,380);
                   delete this;
               }
         }
    }
}

void tanqueta::lanzar()
{
    misil *bala= new misil;
    QList<QGraphicsItem*>balas;
    balas.push_back(bala);
    scene()->addItem(balas.last());
}



