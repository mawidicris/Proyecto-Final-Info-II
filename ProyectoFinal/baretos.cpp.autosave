#include "baretos.h"

baretos::baretos(QObject *parent) : QObject(parent)
{
    ancho=80;
    alto=80;
    bareto= new QPixmap(":/baretin.png");

    connect(timer,&QTimer::timeout,this,&baretos::caida); //Conexión del timer con la función caida
    timer->start(150);

}

QRectF baretos::boundingRect() const //Construye el rectángulo sobre el que se dibuja la imagen
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void baretos::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) //Dibujar la imagen
{
    painter->drawPixmap(-ancho/2,-alto/2,*bareto,0,0,ancho,alto);
}

void baretos::mousePressEvent(QGraphicsSceneMouseEvent *event) //Eventos al presionar el mouse
{
    this->setCursor(QCursor(Qt::PointingHandCursor));
    Q_UNUSED(event);

    increasebareto();
    punto->increasepuntaje(5); //Se aumenta el puntaje en 5 cada vez que presiono sobre un bareto

    if(baret%5==0){
      capuchoblanco *cap= new capuchoblanco; //Agregar un capucho cada vez que se presione 5 veces sobre un bareto
      scene()->addItem(cap);
      cap->timer5->start(11000); //Se activa el timer que elimina los capuchos blancos
    }

    scene()->removeItem(this);
 }

void baretos::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)  //Evento al liberar el mouse
{
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}

void baretos::increasebareto() //Aumentar el número de baretos
{
    baret++;
}

void baretos::caida() //Caida del bareto
{
   ejecuciones++; //Número de veces que se ejecuta la función

    y+=yo+vo*t+0.5*g*t*t; //Fórmula de caida libre
    setPos(x(),y);
    if(ejecuciones==12){
        y=20;
        ejecuciones=0;
    }
}






