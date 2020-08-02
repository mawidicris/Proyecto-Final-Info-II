#ifndef POLICIA_H
#define POLICIA_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPainter>
#include <QRectF>
#include <QMediaPlayer>
#include "explosion.h"
#include "papas.h"
#include "piedras.h"
#include "math.h"
#include "aceite.h"
#include <QDebug>
#include "puntaje.h"
#include "textos.h"

#define dt 0.1

class policia : public QObject,public QGraphicsItem

{
    Q_OBJECT
public:
    explicit policia(QObject *parent = nullptr);
    QTimer *timer,*timer2,*timer3,*timer4;
    QPixmap *poli;
    QGraphicsPixmapItem *perdiste;
    puntaje *_puntaje;
    //bool perdi=false;

    float filas,columnas,ancho,alto; //Ancho, alto, filas y columnas de la imagen
    float xo=1233, v=60, mu=0.3; //mu: coeficiente de fricción, velocidad y posición

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void actualizar();
    void mover();
    void colisionpapas();
    void colisionpiedras();
};

#endif // POLICIA_H
