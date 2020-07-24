#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    escena= new QGraphicsScene;
    fondo =new QGraphicsPixmapItem;

    ui->graphicsView->setScene(escena);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    fondo->setPixmap(QPixmap(":/fondo.tiff"));
    ganaste->setPixmap(QPixmap(":/ganaste.png"));


    connect(timer,&QTimer::timeout,this,&MainWindow::generargamines);
    connect(timer2,&QTimer::timeout,this,&MainWindow::generarbaret);
    connect(timer4,&QTimer::timeout,this,&MainWindow::generaresmad);
    connect(timer5,&QTimer::timeout,this,&MainWindow::generarpolicia);
    connect(timer3,&QTimer::timeout,this,&MainWindow::generarpolicianivel3);
    connect(timer7,&QTimer::timeout,this,&MainWindow::generaresmadnivel3);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete escena;
    delete fondo;
    delete capuchoN;
    delete capuchoB;
}

void MainWindow::primernivel()
{
    timer2->start(2000);
    timer5->start(5500);
    escena->addItem(fondo);
    escena->addItem(score);
    escena->addItem(capuchoB);
    escena->addItem(capuchoB2);
}

void MainWindow::segundonivel()
{
    timer2->stop();
    timer->start(3000);
    timer4->start(5000);
    escena->addItem(fondo);
    escena->addItem(score);
    escena->addItem(capuchoN);
    escena->addItem(capuchoN2);
}

void MainWindow::tercerrnivel()
{
    timer4->stop();
    timer5->stop();
    timer2->start(3000);
    timer3->start(5000);
    timer7->start(5000);
    escena->addItem(fondo);
    escena->addItem(score);
}

void MainWindow::niveltanqueta()
{
    tanqueta *tanque= new tanqueta;
    timer7->stop();
    escena->addItem(tanque);
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
    ejecucionesesmad++;
    esmad *esm = new esmad;
    esm->_puntaje = score;
    int carriles[4]={150,300,450,600};
    int randomValue = qrand() % 4;
    QList<QGraphicsItem*>agentes;
    agentes.push_back(esm);
    agentes.last()->setPos(1233,carriles[randomValue]);
    escena->addItem(agentes.last());
    if(ejecucionesesmad==6){
       timer4->stop();
       tercerrnivel();
        }
}

void MainWindow::generarpolicia()
{
    policia *em = new policia;
    ejecucionespolicias++;
    em->_puntaje = score;
    int carriles[4]={150,300,450,600};
    int randomValue = qrand() % 4;
    QList<QGraphicsItem*>policias;

    policias.push_back(em);
    policias.last()->setPos(1233,carriles[randomValue]);
    escena->addItem(policias.last());
    if(ejecucionespolicias==6){
       timer5->stop();
       segundonivel();
     }
}

void MainWindow::generarpolicianivel3()
{
    ejecucionespolicias3++;
    policia *em = new policia;
    em->_puntaje = score;
    int carriles[4]={150,300,450,600};
    int randomValue = qrand() % 4;
    QList<QGraphicsItem*>policias;

    policias.push_back(em);
    policias.last()->setPos(1233,carriles[randomValue]);
    escena->addItem(policias.last());
    if(ejecucionespolicias3==5){
       timer3->stop();
       //niveltanqueta();
        }
}

void MainWindow::generaresmadnivel3()
{
    esmad *esm = new esmad;
    esm->_puntaje = score;
    int carriles2[4]={300,450,150,600};
    int randomValue2= qrand() % 4;
    QList<QGraphicsItem*>agentes;
    agentes.push_back(esm);
    agentes.last()->setPos(1233,carriles2[randomValue2]);
    escena->addItem(agentes.last());
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
 partidas *part=new partidas;
 this->close();
 part->show();
}

