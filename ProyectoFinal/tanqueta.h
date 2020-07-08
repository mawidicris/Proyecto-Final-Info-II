#ifndef TANQUETA_H
#define TANQUETA_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
//#include "capuchoblanco.h"
//#include "capuchonegro.h"
//#include "misil.h"

class tanqueta : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit tanqueta(QObject *parent = nullptr);
    QPixmap *carro;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:

};

#endif // TANQUETA_H
