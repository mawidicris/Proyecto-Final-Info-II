#ifndef ACEITE_H
#define ACEITE_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>
#include <QRectF>
#include <QGraphicsScene>


class aceite : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit aceite(QObject *parent = nullptr);
    QPixmap *liquido;
    QTimer *timer;


    float ancho,alto; //Ancho y alto de la imagen
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
 public slots:
     void desaparecer();
};

#endif // ACEITE_H
