#ifndef BARETOS_H
#define BARETOS_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QCursor>
#include "capuchoblanco.h"
#include "puntaje.h"


class baretos : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit baretos(QObject *parent = nullptr);
     QTimer *timer=new QTimer;
     puntaje *punto=new puntaje();
     //float y,yo=20,vo=2,t=0.001,g=-9.8;//Posicion, posición inicial, velocidad inicial,tiempo y gravedad para la caida libre del objeto
     int ejecuciones=0;

private:
    QPixmap *bareto;
    int baret=0; //Numero de baretos presionados
    float ancho,alto; //Ancho y alto de la imagen

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mousePressEvent(QGraphicsSceneMouseEvent *event) ;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void increasebareto(); //Función para aumentar el puntaje

signals:
public slots:
    void caida(); //Función para generar caida libre

};

#endif // BARETOS_H
