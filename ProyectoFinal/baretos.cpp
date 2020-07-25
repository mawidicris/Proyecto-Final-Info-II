#include "baretos.h"

baretos::baretos(QObject *parent) : QObject(parent)
{
    ancho=80;
    alto=80;
    bareto= new QPixmap(":/baretin.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&baretos::caida);
    timer->start(150);

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
    this->setCursor(QCursor(Qt::PointingHandCursor));
    Q_UNUSED(event);
    increasebareto();
    punto->increasepuntaje(5);
   if(baret%5==0){
       capuchoblanco *cap= new capuchoblanco;
     scene()->addItem(cap);
     cap->timer5->start(13000);
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

void baretos::caida()
{
    setPos(x(),y()+20);
}






