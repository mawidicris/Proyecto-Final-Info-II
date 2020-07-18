#ifndef BARETOS_H
#define BARETOS_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QList>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QCursor>
#include "capuchoblanco.h"

class baretos : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit baretos(QObject *parent = nullptr);
    QPixmap *bareto;
    QTimer *timer;

    int bare=0;
    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mousePressEvent(QGraphicsSceneMouseEvent *event) ;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);


signals:
public slots:
    void caida();
};

#endif // BARETOS_H
