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


void ingresar::on_ingresar_2_clicked() //Evento al presionar el botón ingresar
{
    int niv;
    int punt;
    string nivel;
    string puntaje;
    string usuario,clave;

    QString usu=ui->usuario->text();//Se recibe el usuario
    QString cla=ui->contra->text(); //Se recibe la clave
    std::string usuari=usu.toUtf8().constData(); //Se cambia de QString a string
    std::string clav=cla.toUtf8().constData();  //Se cambia de QString a string

      leer.open("usuarios.txt", ios::app); // Leo el archivo donde están almacendas las claves y usuarios
      leer2.open("registro.txt"); //Se lee el archivo donde se almacena el nivel y puntaje de la partida anterior
    while (!leer.eof()){
      getline(leer,usuario,',');
      getline(leer,clave);

      while (!leer2.eof()){
          getline(leer2,nivel,',');
          getline(leer2,puntaje);
          niv= stoi(nivel);
          punt=stoi(puntaje);
      }

    if((clav.compare(clave)==0)&&(usuari.compare(usuario)==0)){ //Se realiza la comparación entre claves y usuarios

        partidas *partida=new partidas(niv,punt);
        partida->show();
        this->close();
    }

      else {
          ui->error->setHidden(false);
          }
      }
       leer.close();
}


void ingresar::on_registrarse_clicked() //Abre la ventana de registro al presionar el botón registrarse
{
    registro *registrar=new registro;
    registrar->show();
}
