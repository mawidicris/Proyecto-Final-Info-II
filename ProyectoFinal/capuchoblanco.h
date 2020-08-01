#ifndef CAPUCHOBLANCO_H
#define CAPUCHOBLANCO_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QCursor>
#include <QTimer>
#include <QList>
#include "piedras.h"
#include "policia.h"
#include "esmad.h"
#include "misil.h"
#include "explosion.h"


class capuchoblanco : public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit capuchoblanco(QObject *parent = nullptr);
    QPixmap *cblanco;
    QTimer *timer,*timer2,*timer3,*timer4,*timer5;
    float ancho,alto;//Ancho y alto de la imagen

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mouseMoveEvent (QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

signals:
    public slots:
      void lanzarpiedras();
      void colisionesmad();
      void colisionpolicia();
      void colisionmisiles();
      void eliminar();
};

#endif // CAPUCHOBLANCO_H
