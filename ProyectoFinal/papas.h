#ifndef PAPAS_H
#define PAPAS_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "esmad.h"
#include "policia.h"
#include "capuchonegro.h"
#include "explosion.h"


class papas : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit papas(QObject *parent = nullptr);
    QPixmap *papa;
    QTimer *timer;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    capuchonegro *capucho;
    Explosion *pum;
    esmad *ujum;

signals:
public slots:
    void mover();

};

#endif // PAPAS_H
