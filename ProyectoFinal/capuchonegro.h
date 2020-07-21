#ifndef CAPUCHONEGRO_H
#define CAPUCHONEGRO_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QGraphicsSceneMouseEvent>
#include <QCursor>
#include <QList>
#include <QTimer>
#include <QGraphicsScene>
#include "papas.h"
#include "policia.h"
#include "esmad.h"
#include "misil.h"
#include "explosion.h"
#include "mainwindow.h"

class capuchonegro : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit capuchonegro(QObject *parent = nullptr);
    QPixmap *cnegro;
    QTimer *timer,*timer2,*timer3,*timer4;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mouseMoveEvent (QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

signals:

    public slots:
       void lanzarpapas();
       void colisionesmad();
       void colisionpolicia();
       void colisionmisiles();
};

#endif // CAPUCHONEGRO_H
