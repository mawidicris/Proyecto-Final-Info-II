#include "ingresar.h"
#include "ui_ingresar.h"

ingresar::ingresar(QWidget *parent) :
    QWidget(parent),
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
       //return true;
         }

      else {
          ui->error->setHidden(false);
        //return false;
          }
       }
       leer.close();

}

bool ingresar::comprobar(string usuari,string clav,bool correcto)
{
 /* string usuario,clave;
  leer.open("usuarios.txt", ios::app);
  while (!leer.eof()){
  getline(leer,usuario,',');
  getline(leer,clave);

  if((clav.compare(clave)==0)&&(usuari.compare(usuario)==0)){
   this->close();
   return true;
     }

  else {
      ui->error->setHidden(false);
    return false;
      }
   }
   leer.close(); */
}
//if(correcto) w.show();


