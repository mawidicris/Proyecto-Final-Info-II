#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    escena= new QGraphicsScene;
    ui->graphicsView->setScene(escena);
    fondo =new QGraphicsPixmapItem;
    fondo->setPixmap(QPixmap(":/fondo.tiff"));
    //escena->addItem(fondo);
    capuchoN= new capuchonegro;
    capuchoB= new capuchoblanco;
    capuchoN->setPos(500,300);
    //escena->addItem(capuchoN);
    capuchoB->setPos(500,450);
    //escena->addItem(capuchoB);
    agenteesmad= new esmad;
    agenteesmad->setPos(1130,430);
    //escena->addItem(agenteesmad);
    roca=new piedras;
    roca->setPos(capuchoB->x(),capuchoB->y());
    //escena->addItem(roca);
    papabomba=new papas;
    papabomba->setPos(capuchoN->x(),capuchoN->y());
    //escena->addItem(papabomba);
    pol=new policia;
    pol->setPos(1130,430);
    //escena->addItem(pol);
    baret= new baretos;
    baret->setPos(500,50);
    //scena->addItem(baret);
    tanque= new tanqueta;
    tanque->setPos(1233,450);
    //escena->addItem(tanque);
    balaa=new misil;
    //balaa->setPos(1000,300);
    escena->addItem(balaa);
    gamin= new Gamines;
    gamin->setPos(800,50);
    //escena->addItem(gamin);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete escena;
    delete fondo;
    delete capuchoN;
    delete capuchoB;
    delete agenteesmad;
    delete papabomba;
    delete pol;
    delete roca;
    delete baret;
    delete tanque;
    delete balaa;
    delete gamin;
}

void MainWindow::on_ingresar_clicked()
{
    ingresar *ingreso = new ingresar;
    ingreso->show();
    ui->ingresar->setHidden(true);
    ui->registrarse->setHidden(true);
    this->close();
}

void MainWindow::on_registrarse_clicked()
{
    registro *registrar=new registro;
    registrar->show();
}








