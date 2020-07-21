#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    escena= new QGraphicsScene;
    timer=new QTimer;
    timer2=new QTimer;
    timer3=new QTimer;
    timer4=new QTimer;
    timer5=new QTimer;
    timer6=new QTimer;
    ui->graphicsView->setScene(escena);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    fondo =new QGraphicsPixmapItem;
    fondo->setPixmap(QPixmap(":/fondo.tiff"));
    escena->addItem(fondo);
    score = new puntaje;
    escena->addItem(score);
    //capuchoN= new capuchonegro;
    //capuchoB= new capuchoblanco;
    /*ingresar *ingreso= new ingresar;
    ingreso->show();*/
    //escena->addItem(capuchoN);
    //escena->addItem(capuchoB);
    //tanque= new tanqueta;
    //escena->addItem(tanque);


    connect(timer,&QTimer::timeout,this,&MainWindow::generargamines);
    timer->start(4000);
    connect(timer2,&QTimer::timeout,this,&MainWindow::generarbaret);
    //timer2->start(3500);
    connect(timer4,&QTimer::timeout,this,&MainWindow::generaresmad);
    //timer4->start(5000);
    connect(timer5,&QTimer::timeout,this,&MainWindow::generarpolicia);
   // timer5->start(5000);
    connect(timer6,&QTimer::timeout,this,&MainWindow::generarcapuchosnegros);
    //timer6->start(5000);
    connect(timer3,&QTimer::timeout,this,&MainWindow::generarcapuchosblancos);
    //timer3->start(5000);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete escena;
    delete fondo;
  //delete capuchoN;
   // delete capuchoB;
    //delete tanque;
}


void MainWindow::generarbaret()
{
    int randomValue = qrand() % 1200;
    QList<QGraphicsItem*>bareti;
    bareti.push_back(new baretos);
    bareti.last()->setPos(randomValue,50);
    escena->addItem(bareti.last());
}

void MainWindow::generaresmad()
{
    int carriles[4]={150,300,450,600};
    int randomValue = qrand() % 4;
    QList<QGraphicsItem*>agentes;
    agentes.push_back(new esmad);
    agentes.last()->setPos(1233,carriles[randomValue]);
    escena->addItem(agentes.last());
}

void MainWindow::generarpolicia()
{
    int carriles[4]={150,300,450,600};
    int randomValue = qrand() % 4;
    QList<QGraphicsItem*>policias;
    policias.push_back(new policia);
    policias.last()->setPos(1233,carriles[randomValue]);
    escena->addItem(policias.last());
}

void MainWindow::generarcapuchosnegros()
{
    QList<QGraphicsItem*>capnegros;
    capnegros.push_back(new capuchonegro);
    escena->addItem(capnegros.last());
}

void MainWindow::generarcapuchosblancos()
{
    QList<QGraphicsItem*>capblancos;
    capblancos.push_back(new capuchoblanco);
    escena->addItem(capblancos.last());
}

void MainWindow::generargamines()
{
    int randomValue = qrand() % 1200;
    QList<QGraphicsItem*>gamines;
    gamines.push_back(new Gamines);
    gamines.last()->setPos(randomValue,50);
    escena->addItem(gamines.last());
}

void MainWindow::on_pausar_clicked()
{
 timer->stop();
 timer2->stop();
 timer3->stop();
 timer4->stop();
 timer5->stop();
 timer6->stop();
}
