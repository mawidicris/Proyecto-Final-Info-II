#ifndef EXPLOSION_H
#define EXPLOSION_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPainter>
#include <QRectF>

class Explosion : public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit Explosion(QObject *parent = nullptr);
    QTimer *timer;
    QPixmap *bomba;
    float filas,columnas,ancho,alto;//Ancho, alto, filas y columnas de la imagen

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void actualizarbomba();

};

#endif // EXPLOSION_H
