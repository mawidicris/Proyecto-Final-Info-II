#ifndef INGRESAR_H
#define INGRESAR_H
#include "registro.h"
#include <fstream>
#include <iostream>
#include <QObject>

class ingresar : public QObject
{
    Q_OBJECT
public:
    explicit ingresar(QObject *parent = nullptr);
    fstream leer;
    bool comprobar();

signals:

};

#endif // INGRESAR_H
