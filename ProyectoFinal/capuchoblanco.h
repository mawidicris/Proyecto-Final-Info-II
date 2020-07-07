#ifndef CAPUCHOBLANCO_H
#define CAPUCHOBLANCO_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QGraphicsScene>
//#include <QTimer>
#include <piedras.h>


class capuchoblanco : public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit capuchoblanco(QObject *parent = nullptr);
    QPixmap *cblanco;
    //QTimer *timer;

    float ancho,alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void lanzar(QList<piedras *> &piedritas,QGraphicsScene *escena);

signals:
//public slots:
  //   void disparar(QList<piedras *> &lanzarpiedras,QGraphicsScene *escena);
};

#endif // CAPUCHOBLANCO_H
