#include "baretos.h"

baretos::baretos(QObject *parent) : QObject(parent)
{
    ancho=70;
    alto=70;
    bareto= new QPixmap(":/baretin.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&baretos::caida);
    timer->start(100);

}

QRectF baretos::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void baretos::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*bareto,0,0,ancho,alto);
}

void baretos::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    //AUMENTAR bare CADA VEZ QUE SE DA CLICK EN UN ITEM
    this->setCursor(QCursor(Qt::PointingHandCursor));
    Q_UNUSED(event);
   increasebareto();
   if(baret%5==0){
       scene()->addItem(new capuchoblanco);
   }
    scene()->removeItem(this);
 }

void baretos::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}

void baretos::increasebareto()
{
    baret++;
}

int baretos::getbareto()
{
    return baret;
}

void baretos::caida()
{
    setPos(x(),y()+20);
}


