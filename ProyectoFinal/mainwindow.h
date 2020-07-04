#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include "capuchonegro.h"
#include "capuchoblanco.h"
#include "esmad.h"
#include "piedras.h"
#include "papas.h"
#include "policia.h"
#include "baretos.h"
#include "tanqueta.h"
#include "misil.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *escena;
    QGraphicsPixmapItem *fondo;
    capuchonegro *capuchoN;
    capuchoblanco *capuchoB;
    esmad *agenteesmad;
    piedras *roca;
    papas *papabomba;
    policia *pol;
    baretos *baret;
    tanqueta *tanque;
    misil *balaa;
};
#endif // MAINWINDOW_H
