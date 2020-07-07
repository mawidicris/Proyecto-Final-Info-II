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

void registro::on_registrarse_clicked()
{
    QString usu=ui->usuario->toPlainText();
    QString cla=ui->contra->toPlainText();
    std::string usuario=usu.toUtf8().constData();
    std::string clave=cla.toUtf8().constData();
    guardar.open("usuarios", ios::app);
    guardar <<usuario<<" "<<clave;
    guardar.close();
}
