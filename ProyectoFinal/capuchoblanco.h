#ifndef CAPUCHOBLANCO_H
#define CAPUCHOBLANCO_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QCursor>

class capuchoblanco : public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit capuchoblanco(QObject *parent = nullptr);
    QPixmap *cblanco;


    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mouseMoveEvent (QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
signals:
};

#endif // CAPUCHOBLANCO_H
