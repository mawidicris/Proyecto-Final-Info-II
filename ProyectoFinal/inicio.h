#ifndef INICIO_H
#define INICIO_H

#include <QWidget>
#include "ingresar.h"
#include "registro.h"

namespace Ui {
class inicio;
}

class inicio : public QWidget
{
    Q_OBJECT

public:
    explicit inicio(QWidget *parent = nullptr);
    ~inicio();

/*private slots:
    void on_ingresar_clicked();

    void on_registrarse_clicked();*/

private:
    Ui::inicio *ui;
};

#endif // INICIO_H
