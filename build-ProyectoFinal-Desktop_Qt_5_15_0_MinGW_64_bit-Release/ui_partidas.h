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
#include <QtWidgets/QLabel>
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
    QPushButton *salir;
    QLabel *fondo;

    void setupUi(QWidget *partidas)
    {
        if (partidas->objectName().isEmpty())
            partidas->setObjectName(QString::fromUtf8("partidas"));
        partidas->resize(717, 573);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(50, 50, 50, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 127));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        partidas->setPalette(palette);
        partidas->setAutoFillBackground(true);
        partidas->setStyleSheet(QString::fromUtf8(""));
        nuevapartida = new QPushButton(partidas);
        nuevapartida->setObjectName(QString::fromUtf8("nuevapartida"));
        nuevapartida->setGeometry(QRect(270, 140, 181, 81));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(84, 84, 84, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        QBrush brush4(QColor(216, 216, 216, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(231, 231, 231, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush6(QColor(231, 231, 231, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        nuevapartida->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Playbill"));
        font.setPointSize(18);
        nuevapartida->setFont(font);
        nuevapartida->setCursor(QCursor(Qt::OpenHandCursor));
        nuevapartida->setStyleSheet(QString::fromUtf8("background-color: rgb(84, 84, 84);\n"
""));
        cargarpartida = new QPushButton(partidas);
        cargarpartida->setObjectName(QString::fromUtf8("cargarpartida"));
        cargarpartida->setGeometry(QRect(270, 260, 181, 81));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        cargarpartida->setPalette(palette2);
        cargarpartida->setFont(font);
        cargarpartida->setCursor(QCursor(Qt::OpenHandCursor));
        cargarpartida->setStyleSheet(QString::fromUtf8("background-color: rgb(84, 84, 84);\n"
""));
        unjugador = new QPushButton(partidas);
        unjugador->setObjectName(QString::fromUtf8("unjugador"));
        unjugador->setGeometry(QRect(270, 210, 181, 81));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        unjugador->setPalette(palette3);
        unjugador->setFont(font);
        unjugador->setCursor(QCursor(Qt::OpenHandCursor));
        unjugador->setStyleSheet(QString::fromUtf8("background-color: rgb(84, 84, 84);\n"
""));
        dosjugadores = new QPushButton(partidas);
        dosjugadores->setObjectName(QString::fromUtf8("dosjugadores"));
        dosjugadores->setGeometry(QRect(270, 330, 181, 81));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        dosjugadores->setPalette(palette4);
        dosjugadores->setFont(font);
        dosjugadores->setCursor(QCursor(Qt::OpenHandCursor));
        dosjugadores->setStyleSheet(QString::fromUtf8("background-color: rgb(84, 84, 84);\n"
""));
        salir = new QPushButton(partidas);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(280, 490, 151, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        salir->setPalette(palette5);
        salir->setFont(font);
        salir->setCursor(QCursor(Qt::OpenHandCursor));
        salir->setStyleSheet(QString::fromUtf8("background-color: rgb(84, 84, 84);\n"
""));
        fondo = new QLabel(partidas);
        fondo->setObjectName(QString::fromUtf8("fondo"));
        fondo->setGeometry(QRect(0, 0, 721, 581));
        fondo->setStyleSheet(QString::fromUtf8("background-image: url(:/piedra (2).jpg);"));
        fondo->raise();
        nuevapartida->raise();
        cargarpartida->raise();
        unjugador->raise();
        dosjugadores->raise();
        salir->raise();

        retranslateUi(partidas);

        QMetaObject::connectSlotsByName(partidas);
    } // setupUi

    void retranslateUi(QWidget *partidas)
    {
        partidas->setWindowTitle(QCoreApplication::translate("partidas", "Form", nullptr));
        nuevapartida->setText(QCoreApplication::translate("partidas", "NUEVA PARTIDA", nullptr));
        cargarpartida->setText(QCoreApplication::translate("partidas", "CONTINUAR PARTIDA", nullptr));
        unjugador->setText(QCoreApplication::translate("partidas", "1 JUGADOR", nullptr));
        dosjugadores->setText(QCoreApplication::translate("partidas", "2 JUGADORES", nullptr));
        salir->setText(QCoreApplication::translate("partidas", " SALIR Y GUARDAR ", nullptr));
        fondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class partidas: public Ui_partidas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTIDAS_H
