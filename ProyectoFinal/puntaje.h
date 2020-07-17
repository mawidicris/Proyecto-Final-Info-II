#ifndef PUNTAJE_H
#define PUNTAJE_H

#include <QObject>
#include <QGraphicsTextItem>
#include <QFont>
#include <QGraphicsScene>
class puntaje : public QObject
{
    Q_OBJECT
public:
    explicit puntaje(QObject *parent = nullptr);
    int Puntaje;
    //QGraphicsTextItem *punt;
signals:

};

#endif // PUNTAJE_H
