#ifndef POLICIA_H
#define POLICIA_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPainter>
#include <QRectF>

class policia : public QObject,public QGraphicsItem

{
    Q_OBJECT
public:
    explicit policia(QObject *parent = nullptr);
    QTimer *timer,*timer2;
    QPixmap *poli;
    float filas,columnas,ancho,alto;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void actualizar();
    void mover();
};

#endif // POLICIA_H
