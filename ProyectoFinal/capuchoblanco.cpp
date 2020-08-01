#include "capuchoblanco.h"

capuchoblanco::capuchoblanco(QObject *parent) : QObject(parent)
{
   ancho=52;
   alto=145;
   cblanco= new QPixmap(":/capucho blanco.png");
   setPos(150,350);
   timer= new QTimer;
   timer2=new QTimer;
   timer3= new QTimer;
   timer4= new QTimer;
   timer5=new QTimer;
   connect(timer,&QTimer::timeout,this,&capuchoblanco::lanzarpiedras);
   connect(timer2,&QTimer::timeout,this,&capuchoblanco::colisionesmad);
   connect(timer3,&QTimer::timeout,this,&capuchoblanco::colisionpolicia);
   connect(timer4,&QTimer::timeout,this,&capuchoblanco::colisionmisiles);
   connect(timer5,&QTimer::timeout,this,&capuchoblanco::eliminar);
   timer2->start(300);
   timer3->start(300);
   timer4->start(300);
}

QRectF capuchoblanco::boundingRect() const //Construye el rectángulo sobre el que se dibuja la imagen
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void capuchoblanco::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) //Dibujar la imagen
{
    painter->drawPixmap(-ancho/2,-alto/2,*cblanco,0,0,ancho,alto);
}

void capuchoblanco::mouseMoveEvent(QGraphicsSceneMouseEvent *event) //Eventos al mover mientras se presiona el mouse
{
    this->setPos(mapToScene(event->pos())); //Mueve el capucho a la posición que se indique con el mouse
    if((this->x())>300) {
        timer->start(4000);
    }
}

void capuchoblanco::mousePressEvent(QGraphicsSceneMouseEvent *event) //Eventos al presionar el mouse
{
    this->setCursor(QCursor(Qt::ClosedHandCursor));
       Q_UNUSED(event);
}

void capuchoblanco::mouseReleaseEvent(QGraphicsSceneMouseEvent *event) //Eventos al liberar el mouse
{
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}

void capuchoblanco::lanzarpiedras() //Se crea un objeto de la clase piedras cada 4 segundos
{
    piedras *piedra= new piedras;
    QList<QGraphicsItem*> pied;
    pied.push_back(piedra);
    pied.last()->setPos(this->x(),this->y()); //La piedra sale de la posición del capucho
    scene()->addItem(pied.last());
}

void capuchoblanco::colisionesmad() //Se elimina el capucho si hay una colisión con un objeto del tipo esmad
{
    QList<QGraphicsItem *>col=collidingItems();
    for (int i=0,n=col.size();i<n;i++){
           if(typeid (*col[i])==typeid(esmad)){
            delete this;
            timer->stop();
          }
    }
}

void capuchoblanco::colisionpolicia() //Se elimina el capucho si hay una colisión con un objeto del tipo policia
{
    QList<QGraphicsItem *>coli=collidingItems();
    for (int i=0,n=coli.size();i<n;i++){
           if(typeid (*coli[i])==typeid(policia)){
            delete this;
            timer->stop();
          }
     }
}

void capuchoblanco::colisionmisiles() //Se elimina el capucho si hay una colisión con un objeto del tipo misil
{
    QMediaPlayer *sonido= new QMediaPlayer();
    sonido->setMedia(QUrl("qrc:/explosion.wav")); //Se agrega sonido de explosión
    Explosion *pum= new Explosion;
    QList<QGraphicsItem *>colis=collidingItems();
    for (int i=0,n=colis.size();i<n;i++){
           if(typeid (*colis[i])==typeid(misil)){
            pum->setPos(colis.at(i)->x(),colis.at(i)->y());
            sonido->play();
            scene()->addItem(pum);
            delete colis.at(i);
            delete this;
            timer->stop();
          }
    }
}

void capuchoblanco::eliminar() //Se elimina el capucho cada 11 segundos
{
   delete this;
}

