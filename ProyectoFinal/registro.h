#ifndef REGISTRO_H
#define REGISTRO_H

using namespace std;
#include <QWidget>
#include <fstream>
#include <iostream>
namespace Ui {
class registro;
}

class registro : public QWidget
{
    Q_OBJECT

public:
    explicit registro(QWidget *parent = nullptr);
    ~registro();


public slots:


    void on_registrar_clicked();

private:
    Ui::registro *ui;
    ofstream guardar;
};

#endif // REGISTRO_H
