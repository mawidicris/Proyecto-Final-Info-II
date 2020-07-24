#include "gamines.h"

Gamines::Gamines(QObject *parent)
{
    ancho=60;
    alto=90;
    Gamine= new QPixmap(":/gamin.png");
    timer= new QTimer;
    connect(timer,&QTimer::timeout,this,&Gamines::caida);
    timer->start(100);
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

    this->setCursor(QCursor(Qt::PointingHandCursor));
    Q_UNUSED(event);
    increaseGamin();
    if(getGamin()%5==0){
        capuchonegro *cap= new capuchonegro;
    scene()->addItem(cap);
    cap->timer5->start(10000);
    }
    scene()->removeItem(this);
}

void Gamines::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}

void Gamines::increaseGamin()
{
    gamin++;
}

int Gamines::getGamin()
{
    return gamin;
}


void Gamines::caida()
{
    setPos(x(),y()+20);
}






