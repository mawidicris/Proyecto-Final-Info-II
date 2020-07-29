#include "ingresar.h"
#include "ui_ingresar.h"

ingresar::ingresar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ingresar)
{
    ui->setupUi(this);
    ui->error->setHidden(true);
}

ingresar::~ingresar()
{
    delete ui;
}


void ingresar::on_ingresar_2_clicked()
{
    int niv;
    int punt;
    string nivel;
    string puntaje;
    QString usu=ui->usuario->text();
    QString cla=ui->contra->text();
    std::string usuari=usu.toUtf8().constData();
    std::string clav=cla.toUtf8().constData();
    string usuario,clave;
      leer.open("usuarios.txt", ios::app);
      while (!leer.eof()){
      getline(leer,usuario,',');
      getline(leer,clave);

    if((clav.compare(clave)==0)&&(usuari.compare(usuario)==0)){
    this->close();
    }

      else {
          ui->error->setHidden(false);
          }
       }
       leer.close();
       leer.open("registro.txt");
       while (!leer.eof()){
           getline(leer,nivel,',');
           getline(leer,puntaje);
           niv= stoi(nivel);
           punt=stoi(puntaje);
       }
       partidas *partida=new partidas(niv,punt);
       partida->show();
}


void ingresar::on_registrarse_clicked()
{
    registro *registrar=new registro;
    registrar->show();
}
