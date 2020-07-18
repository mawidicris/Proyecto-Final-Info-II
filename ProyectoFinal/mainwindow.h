#ifndef MAINWINDOW_H
#define MAINWINDOW_H

using namespace std;

#include <QMainWindow>
#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent>
#include <QList>
#include <QGraphicsItem>
#include "capuchonegro.h"
#include "capuchoblanco.h"
#include "esmad.h"
#include "piedras.h"
#include "papas.h"
#include "policia.h"
#include "baretos.h"
#include "tanqueta.h"
#include "misil.h"
#include "gamines.h"
#include "registro.h"
#include "ingresar.h"
#include "explosion.h"
#include "puntaje.h"
#include "aceite.h"
#include "ingresar.h"
#include <QDebug>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTimer *timer,*timer2,*timer3,*timer4,*timer5,*timer6;

    QGraphicsScene *escena;
    QGraphicsPixmapItem *fondo;
    capuchonegro *capuchoN;
    capuchoblanco *capuchoB;
    tanqueta *tanque;
    puntaje *puntos;



public slots:
    void generargamines();
    void generarbaret();
    void generaresmad();
    void generarpolicia();
    void generarcapuchosnegros();
    void generarcapuchosblancos();
    void on_pausar_clicked();

private:

    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
