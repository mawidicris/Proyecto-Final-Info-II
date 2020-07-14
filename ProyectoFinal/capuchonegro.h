#ifndef CAPUCHONEGRO_H
#define CAPUCHONEGRO_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QGraphicsSceneMouseEvent>
#include <QCursor>

class capuchonegro : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit capuchonegro(QObject *parent = nullptr);
    QPixmap *cnegro;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mouseMoveEvent (QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

signals:

};

#endif // CAPUCHONEGRO_H
