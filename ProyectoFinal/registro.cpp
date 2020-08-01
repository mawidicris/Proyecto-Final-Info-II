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
    QString usu=ui->usuario->text();
    QString cla=ui->contra->text();
    std::string usuario=usu.toUtf8().constData();
    std::string clave=cla.toUtf8().constData();
    guardar.open("usuarios.txt", ios::app);
    guardar <<usuario<<","<<clave<<endl;
    this->close();

}
