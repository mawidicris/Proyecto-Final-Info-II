#ifndef PAPAS_H
#define PAPAS_H

#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QGraphicsScene>
#include "piedras.h"

class papas : public piedras //Se hereda la clase piedras
{
    Q_OBJECT
public:
    explicit papas(piedras *parent = nullptr);
    QPixmap *papa;
    float ancho,alto;//Ancho y alto de la imagen

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // PAPAS_H
