#include "registro.h"
#include "ui_registro.h"

registro::registro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registro)
{
    ui->setupUi(this);
}

registro::~registro()
{
    delete ui;
}

void registro::on_registrar_clicked() //Al presionar el botón registrar se escribe en un archivo de texto la información de usuario y clave
{
    QString usu=ui->usuario->text();//Se recibe el usuario
    QString cla=ui->contra->text();//Se recibe la clave
    std::string usuario=usu.toUtf8().constData(); //Se cambia de QString a string
    std::string clave=cla.toUtf8().constData(); //Se cambia de QString a string

    guardar.open("usuarios.txt", ios::app); //Se guarda en el archivo de texto "usuarios.txt"
    guardar <<usuario<<","<<clave<<endl;
    this->close();

}
