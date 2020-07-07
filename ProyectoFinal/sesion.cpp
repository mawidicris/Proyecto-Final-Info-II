#include "sesion.h"
#include "ui_sesion.h"

sesion::sesion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sesion)
{
    ui->setupUi(this);
}

sesion::~sesion()
{
    delete ui;
}



void sesion::on_registrarse_clicked()
{
    sesion *registrarse=new sesion;
    registrarse->show();
    QString usu,cla;
    ui->ingresar->setHidden(true);
    ui->registrarse->setHidden(true);
    ui->guardar->setHidden(false);
    usu= ui->usuario->toPlainText();
    cla= ui->contra->toPlainText();
    std::string usuario=usu.toUtf8().constData();
    std::string clave=cla.toUtf8().constData();
}

void sesion::on_guardar_clicked()
{
    sesion *guardar=new sesion;
    guardar->show();
    QString usu,cla;
    ui->ingresar->setHidden(false);
    ui->registrarse->setHidden(false);
    ui->guardar->setHidden(true);
    std::string usuario=usu.toUtf8().constData();
    std::string clave=cla.toUtf8().constData();
}

void sesion::on_ingresar_clicked()
{
    sesion *ingresar=new sesion;
    ingresar->show();
    QString usu,cla;
    usu= ui->usuario->toPlainText();
    cla= ui->contra->toPlainText();
    std::string usuario=usu.toUtf8().constData();
    std::string clave=cla.toUtf8().constData();
}
