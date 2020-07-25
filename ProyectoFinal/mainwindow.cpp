#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    escena= new QGraphicsScene;
    fondo =new QGraphicsPixmapItem;
    nivel1 =new QGraphicsPixmapItem;
    nivel2 =new QGraphicsPixmapItem;
    nivel3 =new QGraphicsPixmapItem;

    ui->graphicsView->setScene(escena);
    escena->setSceneRect(0,0,1285,695);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    fondo->setPixmap(QPixmap(":/fondo.tiff"));
    nivel1->setPixmap(QPixmap(":/nivel1.png"));
    nivel1->setPos(500,250);
    nivel2->setPixmap(QPixmap(":/nivel2.png"));
    nivel2->setPos(500,250);
    nivel3->setPixmap(QPixmap(":/nivel3.png"));
    nivel3->setPos(500,250);


    connect(timer,&QTimer::timeout,this,&MainWindow::generargamines);
    connect(timer2,&QTimer::timeout,this,&MainWindow::generarbaret);
    connect(timer4,&QTimer::timeout,this,&MainWindow::generaresmad);
    connect(timer5,&QTimer::timeout,this,&MainWindow::generarpolicia);
    connect(timer3,&QTimer::timeout,this,&MainWindow::generarpolicianivel3);
    connect(timer7,&QTimer::timeout,this,&MainWindow::generaresmadnivel3);

    connect(timer8,&QTimer::timeout,this,&MainWindow::borrarnivel1);
    connect(timer9,&QTimer::timeout,this,&MainWindow::borrarnivel2);
    connect(timer10,&QTimer::timeout,this,&MainWindow::borrarnivel3);
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
    escena->addItem(nivel1);
    timer8->start(2000);
}

void MainWindow::segundonivel()
{
    timer2->stop();
    timer->start(2500);
    timer4->start(6000);
    escena->addItem(fondo);
    escena->addItem(score);
    escena->addItem(capuchoN);
    escena->addItem(capuchoN2);
    escena->addItem(nivel2);
    timer9->start(2000);
}

void MainWindow::tercerrnivel()
{
    timer4->stop();
    timer5->stop();
    timer2->start(3000);
    timer3->start(6500);
    timer7->start(7000);
    escena->addItem(fondo);
    escena->addItem(score);
    escena->addItem(nivel3);
    timer10->start(2000);
}

void MainWindow::niveltanqueta()
{
    tanqueta *tanque= new tanqueta;
    tanque->_puntos=score;
    timer7->stop();
    escena->addItem(tanque);
}


void MainWindow::generarbaret()
{
    bareto->punto=score;
    int randomValue = rand() % 1200;
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
    int randomValue = rand() % 4;
    QList<QGraphicsItem*>agentes;
    agentes.push_back(esm);
    agentes.last()->setPos(1233,carriles[randomValue]);
    escena->addItem(agentes.last());
    if(ejecucionesesmad==8){
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
    int randomValue = rand() % 4;
    QList<QGraphicsItem*>policias;

    policias.push_back(em);
    policias.last()->setPos(1233,carriles[randomValue]);
    escena->addItem(policias.last());
    if(ejecucionespolicias==8){
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
    int randomValue = rand() % 4;
    QList<QGraphicsItem*>policias;

    policias.push_back(em);
    policias.last()->setPos(1233,carriles[randomValue]);
    escena->addItem(policias.last());
    if(ejecucionespolicias3==5){
       timer3->stop();
       niveltanqueta();
        }
}

void MainWindow::generaresmadnivel3()
{
    esmad *esm = new esmad;
    esm->_puntaje = score;
    int carriles2[4]={300,450,150,600};
    int randomValue2= rand() % 4;
    QList<QGraphicsItem*>agentes;
    agentes.push_back(esm);
    agentes.last()->setPos(1233,carriles2[randomValue2]);
    escena->addItem(agentes.last());
}

void MainWindow::generargamines()
{
    gamin->puntos=score;
    int randomValue = rand() % 1200;
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

void MainWindow::borrarnivel1()
{
  delete nivel1;
  timer8->stop();
}

void MainWindow::borrarnivel2()
{
  delete nivel2;
  timer9->stop();
}

void MainWindow::borrarnivel3()
{
  delete nivel3;
    timer10->stop();
}


