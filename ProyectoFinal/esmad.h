#ifndef ESMAD_H
#define ESMAD_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPainter>
#include <QRectF>

class esmad : public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit esmad(QObject *parent = nullptr);
    QTimer *timer,*timer2;
    QPixmap *agente;

    float filas,columnas,ancho,alto;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void actualizar();
    void mover();


};

#endif // ESMAD_H
