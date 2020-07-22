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
    escena->addItem(score);
    escena->addItem(capuchoN);
    escena->addItem(capuchoN2);
    //escena->addItem(capuchoB);
    //escena->addItem(capuchoB2);
    //escena->addItem(tanque);


    connect(timer,&QTimer::timeout,this,&MainWindow::generargamines);
    timer->start(3000);
    connect(timer2,&QTimer::timeout,this,&MainWindow::generarbaret);
    //timer2->start(3000);
    connect(timer4,&QTimer::timeout,this,&MainWindow::generaresmad);
    timer4->start(5000);
    connect(timer5,&QTimer::timeout,this,&MainWindow::generarpolicia);
    //timer5->start(5000);
    ui->pausar->setHidden(true);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete escena;
    delete fondo;
    delete capuchoN;
    delete capuchoB;
}

void MainWindow::generarbaret()
{
    int randomValue = qrand() % 1200;
    QList<QGraphicsItem*>bareti;
    bareti.push_back(bareto);
    bareti.last()->setPos(randomValue,50);
    escena->addItem(bareti.last());
}

void MainWindow::generaresmad()
{
    esmad *em = new esmad;
    em->_puntaje = score;
    int carriles[4]={150,300,450,600};
    int randomValue = qrand() % 4;
    QList<QGraphicsItem*>agentes;
    agentes.push_back(em);
    agentes.last()->setPos(1233,carriles[randomValue]);
    escena->addItem(agentes.last());
}

void MainWindow::generarpolicia()
{
    policia *em = new policia;
    em->_puntaje = score;
    int carriles[4]={150,300,450,600};
    int randomValue = qrand() % 4;
    QList<QGraphicsItem*>policias;
    policias.push_back(em);
    policias.last()->setPos(1233,carriles[randomValue]);
    escena->addItem(policias.last());
}

void MainWindow::generargamines()
{
    int randomValue = qrand() % 1200;
    QList<QGraphicsItem*>gamines;
    gamines.push_back(gamin);
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
 gamin->timer->stop();
 bareto->timer->stop();
 //tanque->timer->stop();
}

