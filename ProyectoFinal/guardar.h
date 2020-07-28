#ifndef GUARDAR_H
#define GUARDAR_H

#include <QObject>
#include "capuchoblanco.h"
#include "capuchonegro.h"
#include "aceite.h"
#include "esmad.h"
#include "policia.h"


class guardar : public QObject
{
    Q_OBJECT
public:
    explicit guardar(QObject *parent = nullptr);

signals:

};
class capuchoN : public QObject
{
    capuchoN();
};

#endif // GUARDAR_H
