#ifndef SESION_H
#define SESION_H

#include <QWidget>

namespace Ui {
class sesion;
}

class sesion : public QWidget
{
    Q_OBJECT

public:
    explicit sesion(QWidget *parent = nullptr);
    ~sesion();

private slots:

    void on_registrarse_clicked();

    void on_guardar_clicked();

    void on_ingresar_clicked();

private:
    Ui::sesion *ui;
};

#endif // SESION_H
