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

    QTimer *timer=new QTimer;
    QTimer *timer2= new QTimer;
    QTimer *timer3= new QTimer;
    QTimer *timer4=new QTimer;
    QTimer *timer5=new QTimer;
    QTimer *timer6= new QTimer;
    QTimer *timer7=new QTimer;
    QGraphicsScene *escena;
    QGraphicsPixmapItem *fondo;
    capuchonegro *capuchoN = new capuchonegro();
    capuchonegro *capuchoN2 = new capuchonegro();
    capuchoblanco *capuchoB = new capuchoblanco();
    capuchoblanco *capuchoB2= new capuchoblanco();
    //tanqueta *tanque=new tanqueta;
    puntaje *score = new puntaje();
    Gamines *gamin = new Gamines();
    baretos *bareto= new baretos();
    int ejecucionespolicias=0;
    int ejecucionesesmad=0;

   void primernivel();
   void segundonivel();
   void tercerrnivel();



public slots:
    void generargamines();
    void generarbaret();
    void generaresmad();
    void generarpolicia();
    void generarpolicianivel3();
    void generaresmadnivel3();
    void on_pausar_clicked();

private:

    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
