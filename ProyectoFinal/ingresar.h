#ifndef INGRESAR_H
#define INGRESAR_H

using namespace std;
#include <QWidget>
#include <fstream>
#include <iostream>
#include <QDebug>
#include "registro.h"


namespace Ui {
class ingresar;
}

class ingresar : public QWidget
{
    Q_OBJECT

public:
    explicit ingresar(QWidget *parent = nullptr);
    ~ingresar();
    bool comprobar(string clave,string usser,bool correcto);

private slots:
    void on_ingresar_2_clicked();

private:
    Ui::ingresar *ui;
    ifstream leer;
};

#endif // INGRESAR_H
