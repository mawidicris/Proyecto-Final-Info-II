#ifndef TEXTOS_H
#define TEXTOS_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsScene>

class textos : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit textos(QObject *parent = nullptr);
    QGraphicsPixmapItem *perdiste=new QGraphicsPixmapItem;
    QGraphicsPixmapItem *ganaste=new QGraphicsPixmapItem;

    void lose();
    void win();

signals:

};

#endif // TEXTOS_H
