#ifndef BARETOS_H
#define BARETOS_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QCursor>
#include "capuchoblanco.h"
#include "puntaje.h"


class baretos : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit baretos(QObject *parent = nullptr);
    QPixmap *bareto;
    QTimer *timer;
    int baret=0; //Numero de baretos presionados
    float ancho,alto; //Ancho y alto de la imagen
    puntaje *punto=new puntaje();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mousePressEvent(QGraphicsSceneMouseEvent *event) ;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void increasebareto();

signals:
public slots:
    void caida();

};

#endif // BARETOS_H
