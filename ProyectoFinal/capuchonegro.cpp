#include "capuchonegro.h"

capuchonegro::capuchonegro(QObject *parent) : QObject(parent)
{
  ancho=175;
  alto=154;
  cnegro= new QPixmap(":/capucho negro.png");
  setPos(130,500);
  timer= new QTimer;
  timer2=new QTimer;
  timer3= new QTimer;
  timer4= new QTimer;
  connect(timer,&QTimer::timeout,this,&capuchonegro::lanzarpapas);
  connect(timer2,&QTimer::timeout,this,&capuchonegro::colisionesmad);
  connect(timer3,&QTimer::timeout,this,&capuchonegro::colisionpolicia);
  connect(timer3,&QTimer::timeout,this,&capuchonegro::colisionmisiles);
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
    if((this->x())>300) timer->start(3000);
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

   QList<QGraphicsItem*> paps;
   paps.push_back(new papas);
   paps.last()->setPos(this->x(),this->y());
   scene()->addItem(paps.last());

}

void capuchonegro::colisionesmad()
{
    QList<QGraphicsItem *>col=collidingItems();
    for (int i=0,n=col.size();i<n;i++){
           if(typeid (*col[i])==typeid(esmad)){
            scene()->removeItem(this);
          }
    }
}

void capuchonegro::colisionpolicia()
{
    QList<QGraphicsItem *>coli=collidingItems();
    for (int i=0,n=coli.size();i<n;i++){
           if(typeid (*coli[i])==typeid(policia)){
            scene()->removeItem(this);
          }
    }
}

void capuchonegro::colisionmisiles()
{
    QList<QGraphicsItem *>colis=collidingItems();
    for (int i=0,n=colis.size();i<n;i++){
           if(typeid (*colis[i])==typeid(misil)){
            scene()->removeItem(this);
          }
    }
}

