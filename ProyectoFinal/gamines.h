#ifndef GAMINES_H
#define GAMINES_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QList>
#include <QGraphicsScene>


class Gamines : public QObject,public QGraphicsItem
{
     Q_OBJECT
public:
    explicit Gamines(QObject *parent = nullptr);
    QPixmap *Gamine;
    QTimer *timer,*timer2;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void caida();
    void generar();
};

#endif // GAMINES_H
