/********************************************************************************
** Form generated from reading UI file 'registro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_H
#define UI_REGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registro
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *registrar;
    QLineEdit *usuario;
    QLineEdit *contra;
    QLabel *fondo;

    void setupUi(QWidget *registro)
    {
        if (registro->objectName().isEmpty())
            registro->setObjectName(QString::fromUtf8("registro"));
        registro->resize(682, 461);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush);
        QBrush brush1(QColor(231, 231, 231, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(50, 50, 50, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush3(QColor(231, 231, 231, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        registro->setPalette(palette);
        label = new QLabel(registro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 140, 61, 21));
        QPalette palette1;
        QBrush brush4(QColor(255, 255, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        QBrush brush5(QColor(255, 255, 255, 127));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Playbill"));
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(registro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 180, 55, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_2->setPalette(palette2);
        label_2->setFont(font);
        registrar = new QPushButton(registro);
        registrar->setObjectName(QString::fromUtf8("registrar"));
        registrar->setGeometry(QRect(290, 250, 131, 61));
        QPalette palette3;
        QBrush brush6(QColor(216, 216, 216, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush7(QColor(84, 84, 84, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush7);
        QBrush brush8(QColor(231, 231, 231, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        QBrush brush9(QColor(231, 231, 231, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        QBrush brush10(QColor(231, 231, 231, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        registrar->setPalette(palette3);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Playbill"));
        font1.setPointSize(14);
        registrar->setFont(font1);
        registrar->setCursor(QCursor(Qt::OpenHandCursor));
        registrar->setStyleSheet(QString::fromUtf8("background-color: rgb(84, 84, 84);"));
        usuario = new QLineEdit(registro);
        usuario->setObjectName(QString::fromUtf8("usuario"));
        usuario->setGeometry(QRect(270, 130, 181, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush4);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        QBrush brush13(QColor(0, 0, 0, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        usuario->setPalette(palette4);
        usuario->setFont(font);
        contra = new QLineEdit(registro);
        contra->setObjectName(QString::fromUtf8("contra"));
        contra->setGeometry(QRect(270, 180, 181, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush4);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        QBrush brush15(QColor(0, 0, 0, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        QBrush brush16(QColor(0, 0, 0, 128));
        brush16.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        contra->setPalette(palette5);
        contra->setFont(font);
        contra->setEchoMode(QLineEdit::Password);
        fondo = new QLabel(registro);
        fondo->setObjectName(QString::fromUtf8("fondo"));
        fondo->setGeometry(QRect(0, 0, 681, 461));
        fondo->setStyleSheet(QString::fromUtf8("background-image: url(:/piedra (2).jpg);"));
        fondo->raise();
        label->raise();
        label_2->raise();
        registrar->raise();
        usuario->raise();
        contra->raise();

        retranslateUi(registro);

        QMetaObject::connectSlotsByName(registro);
    } // setupUi

    void retranslateUi(QWidget *registro)
    {
        registro->setWindowTitle(QCoreApplication::translate("registro", "Form", nullptr));
        label->setText(QCoreApplication::translate("registro", "USUARIO:", nullptr));
        label_2->setText(QCoreApplication::translate("registro", "CLAVE:", nullptr));
        registrar->setText(QCoreApplication::translate("registro", "REGISTRARSE", nullptr));
        fondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class registro: public Ui_registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_H
