#ifndef PAPAS_H
#define PAPAS_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QGraphicsScene>

class papas : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit papas(QObject *parent = nullptr);
    QPixmap *papa;
    QTimer *timer;
    float ancho,alto;//Ancho y alto de la imagen

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void mover();

};

#endif // PAPAS_H
