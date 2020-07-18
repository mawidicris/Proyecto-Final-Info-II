#ifndef INGRESAR_H
#define INGRESAR_H

using namespace std;

#include <QMainWindow>
#include <QWidget>
#include <fstream>
#include <iostream>
#include <QDebug>
#include <QGraphicsScene>
#include "registro.h"
#include "partidas.h"
#include "mainwindow.h"


namespace Ui {
class ingresar;
}

class ingresar : public QMainWindow
{
    Q_OBJECT

public:
    explicit ingresar(QWidget *parent = nullptr);
    ~ingresar();

public slots:
    void on_ingresar_2_clicked();

    void on_registrarse_clicked();

private:
    Ui::ingresar *ui;
    ifstream leer;
};

#endif // INGRESAR_H
