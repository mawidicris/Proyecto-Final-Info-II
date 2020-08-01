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
    perdiste=new QGraphicsPixmapItem;
    poli = new QPixmap(":/policia.png");
    perdiste->setPixmap(QPixmap(":/perdiste.png"));
    connect(timer,&QTimer::timeout,this,&policia::actualizar);
    connect(timer2,&QTimer::timeout,this,&policia::mover);
    connect(timer3,&QTimer::timeout,this,&policia::colisionpapas);
    connect(timer4,&QTimer::timeout,this,&policia::colisionpiedras);
    timer->start(500);
    timer2->start(250);
    timer3->start(300);
    timer4->start(300);
}

QRectF policia::boundingRect() const //Construye el rectángulo sobre el que se dibuja la imagen
{
  return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void policia::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) //Dibuja la imagen
{
    painter->drawPixmap(-ancho/2,-alto/2,*poli,columnas,0,ancho,alto);
}


void policia::actualizar() //Se mueve entre columnas para actualizar el sprite
{
    columnas+=70;
    if(columnas>=280){
        columnas=0;
    }

this->update(-ancho/2,-alto/2,ancho,alto);
}

void policia::mover() //Movimiento rectilíneo del agente
{
    xo-=(1/mu)*v*dt;
    setPos(xo,y());
    QList<QGraphicsItem *>colision1=collidingItems();
    for (int i=0,j=colision1.size();i<j;i++){
           if(typeid (*colision1[i])==typeid(aceite)){
             mu=0.85; //Se cambia el coeficiente de fricción cuando colisiona con un objeto de la clase aceite
         }
      }
    if((this->x()<300)){
        perdiste->setPos(500,250);
        scene()->addItem(perdiste);
        _puntaje->mover(650,380);

    }
}

void policia::colisionpapas()
{
    /*Se eliminia de la escena si colisiona con un objeto de la clase papas,
    aumenta el puntaje y se agrega un objeto de las clases aceite y explosión*/
    QMediaPlayer *sonido= new QMediaPlayer();
    sonido->setMedia(QUrl("qrc:/explosion.wav"));//Se agrega sonido de explosión
    Explosion *pum= new Explosion;
    aceite *liquid= new aceite;
    QList<QGraphicsItem *>colisiones=collidingItems();
    for (int i=0,j=colisiones.size();i<j;i++){
           if(typeid (*colisiones[i])==typeid(papas)){
              _puntaje->increasepuntaje(10); //Se aumenta el puntaje en 10
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

void policia::colisionpiedras() //Se elimina de la escena colisiona con un objeto de la clase piedras y aumenta el puntaje
{
    QList<QGraphicsItem *>colisio=collidingItems();
    for (int i=0,n=colisio.size();i<n;i++){
           if(typeid (*colisio[i])==typeid(piedras)){
             scene()->removeItem(colisio.at(i));
             _puntaje->increasepuntaje(8); //Se aumenta el puntaje en 8
             delete this;
          }
    }
}

