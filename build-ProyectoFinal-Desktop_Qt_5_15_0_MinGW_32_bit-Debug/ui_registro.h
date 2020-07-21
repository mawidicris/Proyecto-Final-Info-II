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
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush2(QColor(231, 231, 231, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        registro->setPalette(palette);
        label = new QLabel(registro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 130, 61, 21));
        QPalette palette1;
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        QBrush brush4(QColor(255, 255, 255, 127));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Playbill"));
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(registro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 180, 55, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label_2->setPalette(palette2);
        label_2->setFont(font);
        registrar = new QPushButton(registro);
        registrar->setObjectName(QString::fromUtf8("registrar"));
        registrar->setGeometry(QRect(290, 250, 131, 61));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        registrar->setPalette(palette3);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Playbill"));
        font1.setPointSize(14);
        registrar->setFont(font1);
        registrar->setCursor(QCursor(Qt::OpenHandCursor));
        usuario = new QLineEdit(registro);
        usuario->setObjectName(QString::fromUtf8("usuario"));
        usuario->setGeometry(QRect(290, 120, 181, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush3);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        usuario->setPalette(palette4);
        usuario->setFont(font);
        contra = new QLineEdit(registro);
        contra->setObjectName(QString::fromUtf8("contra"));
        contra->setGeometry(QRect(290, 170, 181, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush3);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        contra->setPalette(palette5);
        contra->setFont(font);
        contra->setEchoMode(QLineEdit::Password);

        retranslateUi(registro);

        QMetaObject::connectSlotsByName(registro);
    } // setupUi

    void retranslateUi(QWidget *registro)
    {
        registro->setWindowTitle(QCoreApplication::translate("registro", "Form", nullptr));
        label->setText(QCoreApplication::translate("registro", "USUARIO:", nullptr));
        label_2->setText(QCoreApplication::translate("registro", "CLAVE:", nullptr));
        registrar->setText(QCoreApplication::translate("registro", "REGISTRARSE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registro: public Ui_registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_H
