#ifndef GAMINES_H
#define GAMINES_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QCursor>
#include "capuchonegro.h"
#include "puntaje.h"

#include "baretos.h"


class Gamines : public baretos //se hereda la clase baretos
{
     Q_OBJECT

public:
    explicit Gamines(baretos *parent = nullptr);
    QPixmap *Gamine;
    float ancho,alto; //Ancho y alto de la imagen
    int gamin=0;//Número de gamines presionados
    puntaje *puntos= new puntaje;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void increaseGamin();

};

#endif // GAMINES_H
