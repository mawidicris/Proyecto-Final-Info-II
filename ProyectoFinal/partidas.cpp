#include "partidas.h"
#include "ui_partidas.h"

partidas::partidas(int nivel,int puntaje,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::partidas)
{
    ui->setupUi(this);
    ui->unjugador->setHidden(true);
    ui->dosjugadores->setHidden(true);

    niv=nivel;
    puntos=puntaje;
}

partidas::~partidas()
{
    delete ui;
}

void partidas::on_nuevapartida_clicked() //Eventos al presionar el botón de nueva partida
{
  ui->unjugador->setHidden(false);
  ui->dosjugadores->setHidden(true);
  ui->nuevapartida->setHidden(true);
  ui->cargarpartida->setHidden(true);
}

void partidas::on_cargarpartida_clicked()

//Al presionar continuar partida se toman los datos almacenados sobre el nivel y el puntaje y se crea un nuevo juego partiendo de estos datos
{
    MainWindow *juego= new MainWindow();

    if(niv==1){
        juego->primernivel();
    }
    if(niv==2){
        juego->segundonivel();
        puntuacion->score=puntos;
        juego->score->score=puntuacion->score;
    }
    if(niv==3){
        juego->tercerrnivel();
        puntuacion->score=puntos;
        juego->score->score=puntuacion->score;
    }
    if(niv==4){
        juego->niveltanqueta();
        puntuacion->score=puntos;
        juego->score->score=puntuacion->score;
    }
    this->close();
    juego->show();
}

void partidas::on_unjugador_clicked() //Eventos al presionar un jugador
{
     MainWindow *juego= new MainWindow();
     this->close();
     juego->primernivel();
     juego->show();
}

void partidas::on_dosjugadores_clicked() //Eventos al presionar dos jugadores
{
 this->close();
}

void partidas::on_salir_clicked()
{
  this->close();
}
