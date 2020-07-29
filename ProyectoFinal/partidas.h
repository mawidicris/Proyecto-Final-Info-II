#ifndef PARTIDAS_H
#define PARTIDAS_H

#include <QWidget>
#include <QGraphicsScene>
#include "mainwindow.h"
#include "puntaje.h"

namespace Ui {
class partidas;
}

class partidas : public QWidget
{
    Q_OBJECT

public:
    explicit partidas(int nivel,int puntaje,QWidget *parent = nullptr);
    ~partidas();
    int niv;
    int puntos;
    puntaje *puntuacion=new puntaje();


private slots:
    void on_nuevapartida_clicked();

    void on_cargarpartida_clicked();

    void on_unjugador_clicked();

    void on_dosjugadores_clicked();

    void on_salir_clicked();

private:
    Ui::partidas *ui;

};

#endif // PARTIDAS_H
