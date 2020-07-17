#ifndef PAPAS_H
#define PAPAS_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>

class papas : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit papas(QObject *parent = nullptr);
    QPixmap *papa;
    QTimer *timer;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void mover();

};

#endif // PAPAS_H
