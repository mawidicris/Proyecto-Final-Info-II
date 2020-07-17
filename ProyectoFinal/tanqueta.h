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

class tanqueta : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit tanqueta(QObject *parent = nullptr);
    QPixmap *carro;
    QTimer *timer;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
     void lanzar();

};

#endif // TANQUETA_H
