/********************************************************************************
** Form generated from reading UI file 'ingresar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGRESAR_H
#define UI_INGRESAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ingresar
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *ingresar_2;
    QLineEdit *usuario;
    QLineEdit *contra;
    QLabel *error;
    QPushButton *registrarse;
    QLabel *label_3;

    void setupUi(QWidget *ingresar)
    {
        if (ingresar->objectName().isEmpty())
            ingresar->setObjectName(QString::fromUtf8("ingresar"));
        ingresar->resize(721, 554);
        QPalette palette;
        QBrush brush(QColor(48, 48, 48, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(50, 50, 50, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        ingresar->setPalette(palette);
        ingresar->setAutoFillBackground(true);
        ingresar->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(ingresar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 250, 61, 21));
        QPalette palette1;
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        QBrush brush3(QColor(255, 255, 255, 127));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Playbill"));
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(ingresar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 300, 55, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_2->setPalette(palette2);
        label_2->setFont(font);
        ingresar_2 = new QPushButton(ingresar);
        ingresar_2->setObjectName(QString::fromUtf8("ingresar_2"));
        ingresar_2->setGeometry(QRect(290, 370, 151, 61));
        QPalette palette3;
        QBrush brush4(QColor(216, 216, 216, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush5(QColor(63, 63, 63, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush5);
        QBrush brush6(QColor(61, 61, 61, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush7(QColor(231, 231, 231, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush5);
        QBrush brush8(QColor(56, 56, 56, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        QBrush brush9(QColor(231, 231, 231, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        ingresar_2->setPalette(palette3);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Playbill"));
        font1.setPointSize(14);
        ingresar_2->setFont(font1);
        ingresar_2->setCursor(QCursor(Qt::OpenHandCursor));
        ingresar_2->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 97, 97);\n"
"background-color: rgb(63, 63, 63);"));
        usuario = new QLineEdit(ingresar);
        usuario->setObjectName(QString::fromUtf8("usuario"));
        usuario->setGeometry(QRect(280, 240, 171, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush10(QColor(0, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        usuario->setPalette(palette4);
        usuario->setFont(font);
        usuario->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        contra = new QLineEdit(ingresar);
        contra->setObjectName(QString::fromUtf8("contra"));
        contra->setGeometry(QRect(280, 300, 171, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        contra->setPalette(palette5);
        contra->setFont(font);
        contra->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        contra->setEchoMode(QLineEdit::Password);
        error = new QLabel(ingresar);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(490, 260, 181, 41));
        QPalette palette6;
        QBrush brush12(QColor(240, 111, 12, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QBrush brush13(QColor(234, 117, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush13);
        QBrush brush14(QColor(116, 0, 0, 128));
        brush14.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush13);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        error->setPalette(palette6);
        error->setFont(font);
        registrarse = new QPushButton(ingresar);
        registrarse->setObjectName(QString::fromUtf8("registrarse"));
        registrarse->setGeometry(QRect(290, 440, 151, 61));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        registrarse->setPalette(palette7);
        registrarse->setFont(font1);
        registrarse->setCursor(QCursor(Qt::OpenHandCursor));
        registrarse->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);"));
        label_3 = new QLabel(ingresar);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-70, -250, 861, 801));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/logo.png);\n"
"background-image: url(:/piedra (2).jpg);"));
        label_3->raise();
        label->raise();
        label_2->raise();
        ingresar_2->raise();
        usuario->raise();
        contra->raise();
        error->raise();
        registrarse->raise();

        retranslateUi(ingresar);

        QMetaObject::connectSlotsByName(ingresar);
    } // setupUi

    void retranslateUi(QWidget *ingresar)
    {
        ingresar->setWindowTitle(QCoreApplication::translate("ingresar", "Form", nullptr));
        label->setText(QCoreApplication::translate("ingresar", "USUARIO:", nullptr));
        label_2->setText(QCoreApplication::translate("ingresar", "CLAVE:", nullptr));
        ingresar_2->setText(QCoreApplication::translate("ingresar", "INGRESAR", nullptr));
        error->setText(QCoreApplication::translate("ingresar", "Clave o usuario incorrectos.", nullptr));
        registrarse->setText(QCoreApplication::translate("ingresar", "REGISTRARSE", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ingresar: public Ui_ingresar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGRESAR_H
