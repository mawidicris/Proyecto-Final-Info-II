#include "partidas.h"
#include "ui_partidas.h"

partidas::partidas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::partidas)
{
    ui->setupUi(this);
    ui->unjugador->setHidden(true);
    ui->dosjugadores->setHidden(true);
}

partidas::~partidas()
{
    delete ui;
}

void partidas::on_nuevapartida_clicked()
{
  ui->unjugador->setHidden(false);
  ui->dosjugadores->setHidden(false);
  ui->nuevapartida->setHidden(true);
  ui->cargarpartida->setHidden(true);
}

void partidas::on_cargarpartida_clicked()
{
    ui->nuevapartida->setHidden(true);
    ui->cargarpartida->setHidden(true);
}

void partidas::on_unjugador_clicked()
{
 MainWindow *juego= new MainWindow;
 this->close();
 juego->primernivel();
 juego->show();
}

void partidas::on_dosjugadores_clicked()
{
 this->close();
// MainWindow *juego= new MainWindow;
 //juego->show();
}
