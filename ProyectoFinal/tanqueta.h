#ifndef TANQUETA_H
#define TANQUETA_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QList>
#include <QGraphicsScene>
#include "misil.h"
#include "papas.h"
#include "piedras.h"
#include "puntaje.h"

class tanqueta : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit tanqueta(QObject *parent = nullptr);
    QPixmap *carro;
    QTimer *timer,*timer2,*timer3;
    int vida=100; //Vida incial
    puntaje *_puntos=new puntaje;
    float ancho,alto;//Ancho y alto de la imagen

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    int getVida();

signals:
public slots:
     void lanzar();
     void colisionconpapas();
     void colisionconpiedras();

};

#endif // TANQUETA_H
