#ifndef ESMAD_H
#define ESMAD_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPainter>
#include <QRectF>
#include <QList>
#include <QGraphicsScene>
#include "papas.h"
#include "explosion.h"
#include "piedras.h"
#include "aceite.h"
#include "math.h"
#include "puntaje.h"
#include <QDebug>

#define dt 0.1

class esmad : public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit esmad(QObject *parent = nullptr);
    QTimer *timer,*timer2,*timer3,*timer4;
    QPixmap *agente;

    float filas,columnas,ancho,alto;
    float xo=1233, v=60, mu=0.3; //mu: coeficiente de fricción

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void actualizar();
    void mover();
    void colisionpapas();
    void colisionpiedras();

};

#endif // ESMAD_H
