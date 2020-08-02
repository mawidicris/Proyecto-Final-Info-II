#ifndef PIEDRAS_H
#define PIEDRAS_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QGraphicsScene>

class piedras : public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit piedras(QObject *parent = nullptr);
    QPixmap *piedra;
    QTimer *timer;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
 public slots:
   void mover();

};

#endif // PIEDRAS_H
