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

    escena->addItem(fondo);
    escena->addItem(score);

    connect(timer,&QTimer::timeout,this,&MainWindow::generargamines);
    connect(timer2,&QTimer::timeout,this,&MainWindow::generarbaret);
    connect(timer4,&QTimer::timeout,this,&MainWindow::generaresmad);
    connect(timer5,&QTimer::timeout,this,&MainWindow::generarpolicia);
    connect(timer3,&QTimer::timeout,this,&MainWindow::generarpolicianivel3);
    connect(timer7,&QTimer::timeout,this,&MainWindow::generaresmadnivel3);

    connect(timer8,&QTimer::timeout,this,&MainWindow::borrarnivel1);
    connect(timer9,&QTimer::timeout,this,&MainWindow::borrarnivel2);
    connect(timer10,&QTimer::timeout,this,&MainWindow::borrarnivel3);

    connect(timercerrar,&QTimer::timeout,this,&MainWindow::cerrar);
    connect(timerganar,&QTimer::timeout,this,&MainWindow::ganar);
    connect(timerperder,&QTimer::timeout,this,&MainWindow::perder);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete escena;
    delete fondo;
    delete capuchoN;
    delete capuchoB;
}

int MainWindow::primernivel() //Se inicilizan los timers que generan lo elementos correspondientes añ nivel 1
{
    niv=1;
    timerperder->start(500);
    timer2->start(2000);
    timer5->start(5500);
    escena->addItem(capuchoB);
    escena->addItem(capuchoB2);
    escena->addItem(nivel1);
    timer8->start(2000);
    return  niv; //Se retorna el nivel actual
}

int MainWindow::segundonivel() //Se inicilizan (o pausan) los timers que generan lo elementos correspondientes al nivel 2
{
    niv=2;
    timer2->stop();
    timer->start(2500);
    timer4->start(6000);
    capuchoB->timer->stop();
    capuchoB2->timer->stop();
    delete capuchoB;
    delete capuchoB2;
    escena->addItem(capuchoN);
    escena->addItem(capuchoN2);
    escena->addItem(nivel2);
    timer9->start(2000);
    return niv; //Se retorna el nivel actual
}

int MainWindow::tercerrnivel() //Se inicilizan (o pausan) los timers que generan lo elementos correspondientes al nivel 3
{
    niv=3;
    timer4->stop();
    timer5->stop();
    timer2->start(3000);
    timer3->start(8000);
    timer7->start(9000);
    escena->addItem(nivel3);
    timer10->start(2000);
    return niv; //Se retorna el nivel actual
}

int MainWindow::niveltanqueta() //Se pausan los timers y se agrega la tanqueta
{
    timerganar->start(500);
    tanque=new tanqueta;
    niv=4;
    escena->addItem(fondo);
    escena->addItem(score);
    tanque->_puntos=score;
    timer->stop();
    timer2->stop();
    escena->addItem(tanque);
    return niv; //Se retorna el nivel actual
}

void MainWindow::guardarnivel() //Guarda los datos corrspondientes al nivel y puntaje en un archivo de texto
{
    string puntos= std::to_string(score->getScore());
    guardar.open("registro.txt");
    if(niv==1) guardar<<"1"<<","<<puntos;
    if(niv==2) guardar<<"2"<<","<<puntos;
    if(niv==3) guardar<<"3"<<","<<puntos;
    if(niv==4) guardar<<"4"<<","<<puntos;
    guardar.close();
}


void MainWindow::generarbaret() //Genera baretos en posiciones aleatorias
{
    bareto->punto=score;
    int randomValue = rand() % 1200;
    QList<QGraphicsItem*>bareti;
    bareti.push_back(bareto);
    bareti.last()->setPos(randomValue,50);
    escena->addItem(bareti.last());
}

void MainWindow::generaresmad() //Genera agentes del esmad para el segundo nivel
{

    esmad *esm = new esmad;
    ejecucionesesmad++;
    esm->_puntaje = score;
    int carriles[4]={150,300,450,600}; //Posiciones de los cuatro carriles
    int randomValue = rand() % 4;
    agentes2.push_back(esm);
    agentes2.last()->setPos(1233,carriles[randomValue]);
    escena->addItem(agentes2.last());
    if(ejecucionesesmad==6){ //Si han salido 6 agentes se incia el tercer nivel
       timer4->stop();
       /*for (int i=0;i<agentes2.length();i++){
       delete agentes2.at(i);
       }*/
     tercerrnivel();
        }
}

void MainWindow::generarpolicia() //Genera policias para el primer nivel
{
    policia *em = new policia;
    ejecucionespolicias++;
    em->_puntaje = score;
    int carriles[4]={150,300,450,600}; //Posiciones de los 4 carriles
    int randomValue = rand() % 4;
    policias.push_back(em);
    policias.last()->setPos(1233,carriles[randomValue]);
    escena->addItem(policias.last());
    if(ejecucionespolicias==6){ //Si han salido 6 policias se inicia el segundo nivel
       timer5->stop();
      /* for (int i=0;i<policias.length();i++){
         delete policias.at(i);
       }*/
       segundonivel();
     }
}

void MainWindow::generarpolicianivel3() //Genera policias en el nivel 3
{
    ejecucionespolicias3++;
    policia *pol = new policia;
    pol->_puntaje = score;
    int carriles[4]={150,300,450,600}; //Posiciones de los 4 carriles
    int randomValue = rand() % 4;


    policias3.push_back(pol);
    policias3.last()->setPos(1233,carriles[randomValue]);
    escena->addItem(policias3.last());
    if(ejecucionespolicias3==3){ //Si han salido 4 policias se agrega la tanqueta
       timer3->stop();
       /*for (int i=0;i<policias3.length();i++){
         delete policias3.at(i);
       }*/
       niveltanqueta();
    }
}

void MainWindow::generaresmadnivel3() //Genera esmad en el nivel 3
{
    ejecucionesesmad3++;
    esmad *esma = new esmad;
    esma->_puntaje = score;
    int carriles2[4]={300,450,150,600}; //Posiciones de los 4 carriles
    int randomValue2= rand() % 4;

    agentes3.push_back(esma);
    agentes3.last()->setPos(1233,carriles2[randomValue2]);
    escena->addItem(agentes3.last());
    if(ejecucionesesmad3==4){
       timer7->stop();
       /*for (int i=0;i<agentes3.length();i++){
       delete agentes3.at(i);
       }*/
    }
}

void MainWindow::generargamines() //Genera gamines en posiciones aleatorias
{
    gamin->puntos=score;
    int randomValue = rand() % 1200;
    QList<QGraphicsItem*>gamines;
    gamines.push_back(gamin);
    gamines.last()->setPos(randomValue,50);
    escena->addItem(gamines.last());
}

void MainWindow::on_pausar_clicked() //Eventos al presionar el botón menú
{
    timer->stop();
    timer2->stop();
    timer3->stop();
    timer4->stop();
    timer5->stop();
    timer6->stop();
    timer7->stop();
    timer8->stop();
    timer9->stop();
    timer10->stop();
    gamin->timer->stop();
    bareto->timer->stop();
    guardarnivel(); //Se activa la función que guarda los datos de la partida
    partidas *part=new partidas(niv,score->getScore()); //Se abre la ventana de partidas
    part->show();
    this->close();
}

void MainWindow::borrarnivel1() //Borra el letrero de nivel 1
{
  delete nivel1;
  timer8->stop();
}

void MainWindow::borrarnivel2() //Borra el letrero de nivel 2
{
  delete nivel2;
  timer9->stop();
}

void MainWindow::borrarnivel3() //Borra el letrero de nivel 3
{
  delete nivel3;
    timer10->stop();
}

void MainWindow::cerrar() //Cerrar la ventana del juego y abrir el menú
{
    timercerrar->stop();
    this->close();
    partidas *nuevapartida= new partidas(1,0);
    nuevapartida->show();
}

void MainWindow::ganar() //Evalua si se derrotó a la tanqueta
{
  if(tanque->x()>1180){
      timerganar->stop();
      timercerrar->start(500);
  }
}

void MainWindow::perder()
{

   if(!policias.isEmpty()){
       for(int i=0;i<policias.length();i++){
           if(policias.at(i)->x()<0){
              timerperder->stop();
              timercerrar->start(500);
          }
      }
   }

   /*if(niv==2){
     for(int i=0;i<agentes2.length();i++){
         if(agentes2.at(i)->x()<0){
             timerperder->stop();
             timercerrar->start(500);
         }
      }
   }*/
}


