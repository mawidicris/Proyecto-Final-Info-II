#include "esmad.h"
#include "puntaje.h"

esmad::esmad(QObject *parent) : QObject(parent)
{
  timer= new QTimer;
  timer2 =new QTimer;
  timer3= new QTimer;
  timer4=new QTimer;
  timer5=new QTimer;
  perdiste= new QGraphicsPixmapItem;
  filas=0;
  columnas=0;
  ancho=115;
  alto=180;
  agente = new QPixmap(":/esmad.png");
  perdiste->setPixmap( QPixmap(":/perdiste.png"));

  connect(timer,&QTimer::timeout,this,&esmad::actualizar);
  connect(timer2,&QTimer::timeout,this,&esmad::mover);
  connect(timer3,&QTimer::timeout,this,&esmad::colisionpapas);
  connect(timer4,&QTimer::timeout,this,&esmad::colisionpiedras);
  connect(timer5,&QTimer::timeout,this,&esmad::retroceder);
  timer->start(500);
  timer2->start(200);
  timer3->start(100);
  timer4->start(500);

}

QRectF esmad::boundingRect() const //Construye el rectángulo sobre el que se dibuja la imagen
{
 return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void esmad::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) //Dibujar la imagen
{
    painter->drawPixmap(-ancho/2,-alto/2,*agente,columnas,filas,ancho,alto);
}

void esmad::actualizar() //Mover entre filas y columnas de la imagen para actualizar el sprite
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

void esmad::mover() //Movimiento rectilíneo del agente
{
 xo-=(1/mu)*v*dt;
 setPos(xo,y());
 QList<QGraphicsItem *>colision1=collidingItems();
 for (int i=0,j=colision1.size();i<j;i++){
         if(typeid (*colision1[i])==typeid(aceite)){
          mu=0.85; //Se cambia el coeficiente de fricción cuando colisiona con un objeto de la clase aceite
          setPos(xo,y());
      }
   }
 if((this->x())<=300){
     perdiste->setPos(500,250);
     scene()->addItem(perdiste);
     _puntaje->mover(650,380);
   }
}

void esmad::colisionpapas()
/*Se eliminia de la escena si colisiona con un objeto de la clase papas,
aumenta el puntaje y se agrega un objeto de las clases aceite y explosión*/
{
  QMediaPlayer *sonido= new QMediaPlayer();
  sonido->setMedia(QUrl("qrc:/explosion.wav")); //Se agrega sonido de explosión

  Explosion *pum= new Explosion;
  aceite *liquid= new aceite;
  QList<QGraphicsItem *>colisiones=collidingItems();
  for (int i=0,j=colisiones.size();i<j;i++){
         if(typeid (*colisiones[i])==typeid(papas)){

           _puntaje->increasepuntaje(10);//Se aumenta el puntaje en 10
           pum->setPos(colisiones.at(i)->x(),colisiones.at(i)->y());
           liquid->setPos(colisiones.at(i)->x(),(colisiones.at(i)->y())+50);
           scene()->addItem(pum);
           sonido->play();
           scene()->addItem(liquid);
           delete (colisiones.at(i));
           delete this;
         }
    }
}

void esmad::colisionpiedras() //Se activa la función retroceder si colisiona con un objeto de la clase piedras y aumenta el puntaje
{
    QList<QGraphicsItem *>colisio=collidingItems();
    for (int i=0,n=colisio.size();i<n;i++){
           if(typeid (*colisio[i])==typeid(piedras)){
              timer5->start(200);
              timer2->stop();
            _puntaje->increasepuntaje(5); // Se aumenta el puntaje en 5
             delete (colisio.at(i));
          }
    }
}

void esmad::retroceder() //Retocede al colisionar con una roca
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





