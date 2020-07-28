#include "capuchonegro.h"

capuchonegro::capuchonegro(QObject *parent) : QObject(parent)
{
  ancho=52;
  alto=145;
  cnegro= new QPixmap(":/capucho negro.png");
  setPos(130,500);
  timer= new QTimer;
  timer2=new QTimer;
  timer3= new QTimer;
  timer4= new QTimer;
  timer5=new QTimer;
  connect(timer,&QTimer::timeout,this,&capuchonegro::lanzarpapas);
  connect(timer2,&QTimer::timeout,this,&capuchonegro::colisionesmad);
  connect(timer3,&QTimer::timeout,this,&capuchonegro::colisionpolicia);
  connect(timer4,&QTimer::timeout,this,&capuchonegro::colisionmisiles);
  connect(timer5,&QTimer::timeout,this,&capuchonegro::eliminar);
  timer2->start(300);
  timer3->start(300);
  timer4->start(300);
}

QRectF capuchonegro::boundingRect() const
{
   return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void capuchonegro::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
   painter->drawPixmap(-ancho/2,-alto/2,*cnegro,0,0,ancho,alto);
}

void capuchonegro::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    this->setPos(mapToScene(event->pos()));
    if((this->x())>300) timer->start(5000);
}

void capuchonegro::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ClosedHandCursor));
       Q_UNUSED(event);
}

void capuchonegro::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}

void capuchonegro::lanzarpapas()
{
   papas *papa=new papas;
   QList<QGraphicsItem*> paps;
   paps.push_back(papa);
   paps.last()->setPos(this->x(),this->y());
   scene()->addItem(paps.last());

}

void capuchonegro::colisionesmad()
{
    QList<QGraphicsItem *>col=collidingItems();
    for (int i=0,n=col.size();i<n;i++){
           if(typeid (*col[i])==typeid(esmad)){
            delete this;
            timer->stop();
          }
    }
}

void capuchonegro::colisionpolicia()
{
    QList<QGraphicsItem *>coli=collidingItems();
    for (int i=0,n=coli.size();i<n;i++){
           if(typeid (*coli[i])==typeid(policia)){
            delete this;
            timer->stop();
          }
    }
}

void capuchonegro::colisionmisiles()
{
    Explosion *pum= new Explosion;
    QList<QGraphicsItem *>colis=collidingItems();
    for (int i=0,n=colis.size();i<n;i++){
           if(typeid (*colis[i])==typeid(misil)){
               pum->setPos(colis.at(i)->x(),colis.at(i)->y());
               scene()->addItem(pum);
               delete colis.at(i);
               delete this;
               timer->stop();
          }
    }
}

void capuchonegro::eliminar()
{
   delete this;
}

