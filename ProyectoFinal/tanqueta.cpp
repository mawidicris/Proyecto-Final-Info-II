#include "tanqueta.h"

tanqueta::tanqueta(QObject *parent) : QObject(parent)
{
    ancho=286;
    alto=200;
    timer= new QTimer;
    timer2=new QTimer;
    timer3=new QTimer;
    timer4=new QTimer;
    carro= new QPixmap(":/tanqueta.png");
    setPos(1135,355);

    //Conexión de los timer
    connect(timer,&QTimer::timeout,this,&tanqueta::lanzar);
    connect(timer2,&QTimer::timeout,this,&tanqueta::colisionconpapas);
    connect(timer3,&QTimer::timeout,this,&tanqueta::colisionconpiedras);
    connect(timer4,&QTimer::timeout,this,&tanqueta::retroceder);
    timer->start(4000);
    timer2->start(300);
    timer3->start(300);
}

QRectF tanqueta::boundingRect() const  //Construye el rectángulo sobre el que se dibuja la imagen
{
   return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void tanqueta::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) //Dibjula la imagen
{
    painter->drawPixmap(-ancho/2,-alto/2,*carro,0,0,ancho,alto);
}

int tanqueta::getVida() //Retorna la vida de la tanqueta
{
    return vida;
}


void tanqueta::colisionconpapas() //Disminuye la vida cuando colisiona con un objeto de la clase papas
{
   QMediaPlayer *sonido= new QMediaPlayer();
   sonido->setMedia(QUrl("qrc:/explosion.wav")); // Se agrega sonido de explosión
   QGraphicsPixmapItem *ganaste= new QGraphicsPixmapItem;
   ganaste->setPixmap(QPixmap(":/ganaste.png")); //Se agrega imagen de 'ganaste'
   ganaste->setPos(400,250);
   QList<QGraphicsItem *>colisiones=collidingItems();

   for (int i=0,j=colisiones.size();i<j;i++){
           if(typeid (*colisiones[i])==typeid(papas)){
               _puntos->increasepuntaje(15);
               sonido->play();
               delete (colisiones.at(i));
               vida-=5;
               if(vida<=0){ //Elimina la tanqueta cuando la vida es cero
                   timer4->start(300);
                  scene()->addItem(ganaste); //Se agrega a la escena imagen de 'ganaste'
                  _puntos->mover(500,380);

            }        }
    }
}

void tanqueta::colisionconpiedras() //Disminuye la vida cuando colisiona con un objeto de la clase piedras
{
    QGraphicsPixmapItem *ganaste= new QGraphicsPixmapItem;
    ganaste->setPixmap(QPixmap(":/ganaste.png")); //Se agrega imagen de 'ganaste'
    ganaste->setPos(400,250);
    QList<QGraphicsItem *>colisiones=collidingItems();

    for (int i=0,j=colisiones.size();i<j;i++){
           if(typeid (*colisiones[i])==typeid(piedras)){
               _puntos->increasepuntaje(10);
               delete (colisiones.at(i));
               vida-=2;
               if(vida<=0){ //Elimina la tanqueta cuando la vida es cero
                   timer4->start(300);
                   scene()->addItem(ganaste); //Se agrega a la escena imagen de 'ganaste'
                   _puntos->mover(650,380);
               }
         }
    }
}

void tanqueta::retroceder()
{
   setPos(x()+10,y());
}

void tanqueta::lanzar() //Se crea un objeto de la clase misil cada 4 segundos
{
    misil *bala= new misil;
    QList<QGraphicsItem*>balas;

    balas.push_back(bala);
    scene()->addItem(balas.last());
}



