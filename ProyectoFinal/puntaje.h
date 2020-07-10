#ifndef PUNTAJE_H
#define PUNTAJE_H

#include <QObject>

class puntaje : public QObject
{
    Q_OBJECT
public:
    explicit puntaje(QObject *parent = nullptr);
    int Puntaje;
signals:

};

#endif // PUNTAJE_H
