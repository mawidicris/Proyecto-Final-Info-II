#ifndef GAMINES_H
#define GAMINES_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QList>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QCursor>


class Gamines : public QObject,public QGraphicsItem
{
     Q_OBJECT
public:
    explicit Gamines(QObject *parent = nullptr);
    QPixmap *Gamine;
    QTimer *timer;

    float ancho,alto;
    int gamin=0;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

signals:
public slots:
    void caida();
};

#endif // GAMINES_H
