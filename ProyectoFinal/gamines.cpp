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

QRectF Gamines::boundingRect() const //Construye el rectángulo sobre el que se dibuja la imagen
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void Gamines::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)//Dibujar la imagen
{
    painter->drawPixmap(-ancho/2,-alto/2,*Gamine,0,0,ancho,alto);
}

void Gamines::mousePressEvent(QGraphicsSceneMouseEvent *event) //Eventos al presionar el mouse
{
    this->setCursor(QCursor(Qt::PointingHandCursor));
    Q_UNUSED(event);
    increaseGamin();
    puntos->increasepuntaje(10); //Se aumenta el puntaje en 10 cada vez que presiono sobre un gamin
    if(gamin%5==0){
    capuchonegro *cap= new capuchonegro; //Agregar un capucho cada vez que se presione 5 veces sobre un gamin
    scene()->addItem(cap);
    cap->timer5->start(11000); //Se activa el timer que elimina los capuchos negros
    }
    scene()->removeItem(this);
}

void Gamines::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)  //Evento al liberar el mouse
{
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}

void Gamines::increaseGamin() //Aumentar el número de gamines
{
    gamin++;
}

void Gamines::caida() //Caida de los gamines
{
    setPos(x(),y()+20);
}






