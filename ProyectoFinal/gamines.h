#ifndef GAMINES_H
#define GAMINES_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
class Gamines : public QObject,public QGraphicsItem
{
public:
    Gamines();
    explicit Gamines(QObject *parent = nullptr);
    QPixmap *Gamine;
    QTimer *timer;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
void caida();
};

#endif // GAMINES_H
