/********************************************************************************
** Form generated from reading UI file 'partidas.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTIDAS_H
#define UI_PARTIDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_partidas
{
public:
    QPushButton *nuevapartida;
    QPushButton *cargarpartida;
    QPushButton *unjugador;
    QPushButton *dosjugadores;

    void setupUi(QWidget *partidas)
    {
        if (partidas->objectName().isEmpty())
            partidas->setObjectName(QString::fromUtf8("partidas"));
        partidas->resize(800, 573);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush1(QColor(255, 255, 255, 127));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        partidas->setPalette(palette);
        nuevapartida = new QPushButton(partidas);
        nuevapartida->setObjectName(QString::fromUtf8("nuevapartida"));
        nuevapartida->setGeometry(QRect(280, 120, 231, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("Playbill"));
        font.setPointSize(18);
        nuevapartida->setFont(font);
        nuevapartida->setCursor(QCursor(Qt::OpenHandCursor));
        cargarpartida = new QPushButton(partidas);
        cargarpartida->setObjectName(QString::fromUtf8("cargarpartida"));
        cargarpartida->setGeometry(QRect(280, 290, 231, 101));
        cargarpartida->setFont(font);
        cargarpartida->setCursor(QCursor(Qt::OpenHandCursor));
        unjugador = new QPushButton(partidas);
        unjugador->setObjectName(QString::fromUtf8("unjugador"));
        unjugador->setGeometry(QRect(290, 210, 211, 101));
        unjugador->setFont(font);
        unjugador->setCursor(QCursor(Qt::OpenHandCursor));
        dosjugadores = new QPushButton(partidas);
        dosjugadores->setObjectName(QString::fromUtf8("dosjugadores"));
        dosjugadores->setGeometry(QRect(290, 370, 211, 101));
        dosjugadores->setFont(font);
        dosjugadores->setCursor(QCursor(Qt::OpenHandCursor));

        retranslateUi(partidas);

        QMetaObject::connectSlotsByName(partidas);
    } // setupUi

    void retranslateUi(QWidget *partidas)
    {
        partidas->setWindowTitle(QCoreApplication::translate("partidas", "Form", nullptr));
        nuevapartida->setText(QCoreApplication::translate("partidas", "NUEVA PARTIDA", nullptr));
        cargarpartida->setText(QCoreApplication::translate("partidas", "CARGAR PARTIDA ANTERIOR", nullptr));
        unjugador->setText(QCoreApplication::translate("partidas", "1 JUGADOR", nullptr));
        dosjugadores->setText(QCoreApplication::translate("partidas", "2 JUGADORES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class partidas: public Ui_partidas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTIDAS_H
