#ifndef BARETOS_H
#define BARETOS_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QTimer>

class baretos : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit baretos(QObject *parent = nullptr);
    QPixmap *bareto;
    QTimer *timer;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:
public slots:
    void caida();
};

#endif // BARETOS_H
