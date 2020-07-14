#include "gamines.h"

Gamines::Gamines(QObject *parent)
{
    ancho=60;
    alto=90;
    Gamine= new QPixmap(":/gamin.png");
     timer= new QTimer;
    //timer2= new QTimer;
    connect(timer,&QTimer::timeout,this,&Gamines::caida);
    //connect(timer2,&QTimer::timeout,this,&Gamines::generar);
    timer->start(500);
 //   timer2->start(3500);
}

QRectF Gamines::boundingRect() const
{
     return QRectF(-ancho/2,-alto/2,ancho,alto);
}
void Gamines::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*Gamine,0,0,ancho,alto);
}

void Gamines::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ClosedHandCursor));
    Q_UNUSED(event);
    gamin+=1;
    //scene()->removeItem(this);
}

void Gamines::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}

void Gamines::caida()
{
    setPos(x(),y()+20);
}

/*void Gamines::generar()
{
    QList<QGraphicsItem*>gamines;
    int randomValue = qrand() % 1200;
    gamines.push_back(this);
    scene()->addItem(gamines.last());
    gamines.last()->setPos(randomValue,50);

}*/

