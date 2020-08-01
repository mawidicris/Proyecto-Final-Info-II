#ifndef ESMAD_H
#define ESMAD_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPainter>
#include <QRectF>
#include <QList>
#include <QGraphicsScene>
#include <QMediaPlayer>
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
    QTimer *timer,*timer2,*timer3,*timer4,*timer5;
    QPixmap *agente;
    QGraphicsPixmapItem *perdiste;
    puntaje *_puntaje;
    int ejecuciones=0;
    float filas,columnas,ancho,alto; //Ancho, alto, filas y columnas de la imagen
    float xo=1233, v=60, mu=0.3; //mu: coeficiente de fricción, velocidad y posición inicial

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void actualizar();
    void mover();
    void colisionpapas();
    void colisionpiedras();
    void retroceder();

};

#endif // ESMAD_H
