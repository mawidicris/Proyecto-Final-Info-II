#ifndef PARTIDAS_H
#define PARTIDAS_H

#include <QWidget>
#include <QGraphicsScene>
#include "mainwindow.h"

namespace Ui {
class partidas;
}

class partidas : public QWidget
{
    Q_OBJECT

public:
    explicit partidas(QWidget *parent = nullptr);
    ~partidas();



private slots:
    void on_nuevapartida_clicked();

    void on_cargarpartida_clicked();

    void on_unjugador_clicked();

    void on_dosjugadores_clicked();

private:
    Ui::partidas *ui;

};

#endif // PARTIDAS_H
