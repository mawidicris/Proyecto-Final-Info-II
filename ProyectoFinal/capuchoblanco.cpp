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

QRectF capuchoblanco::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void capuchoblanco::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*cblanco,0,0,ancho,alto);
}

void capuchoblanco::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    this->setPos(mapToScene(event->pos()));
    if((this->x())>300) timer->start(3500);
}

void capuchoblanco::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ClosedHandCursor));
       Q_UNUSED(event);
}

void capuchoblanco::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}

void capuchoblanco::lanzarpiedras()
{
    QList<QGraphicsItem*> pied;
    pied.push_back(new piedras);
    pied.last()->setPos(this->x(),this->y());
    scene()->addItem(pied.last());
}

void capuchoblanco::colisionesmad()
{
    QList<QGraphicsItem *>col=collidingItems();
    for (int i=0,n=col.size();i<n;i++){
           if(typeid (*col[i])==typeid(esmad)){
            delete this;
            timer->stop();
          }
    }
}

void capuchoblanco::colisionpolicia()
{
    QList<QGraphicsItem *>coli=collidingItems();
    for (int i=0,n=coli.size();i<n;i++){
           if(typeid (*coli[i])==typeid(policia)){
            delete this;
            timer->stop();
          }
    }
}

void capuchoblanco::colisionmisiles()
{
    QMediaPlayer *sonido= new QMediaPlayer();
    sonido->setMedia(QUrl("qrc:/explosion.wav"));
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

void capuchoblanco::eliminar()
{
   delete this;
}

