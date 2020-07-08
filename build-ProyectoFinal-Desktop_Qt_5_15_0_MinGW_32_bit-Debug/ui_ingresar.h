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

    void setupUi(QWidget *ingresar)
    {
        if (ingresar->objectName().isEmpty())
            ingresar->setObjectName(QString::fromUtf8("ingresar"));
        ingresar->resize(721, 554);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        ingresar->setPalette(palette);
        label = new QLabel(ingresar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 220, 61, 21));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QBrush brush2(QColor(255, 255, 255, 127));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Playbill"));
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(ingresar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 260, 55, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_2->setPalette(palette2);
        label_2->setFont(font);
        ingresar_2 = new QPushButton(ingresar);
        ingresar_2->setObjectName(QString::fromUtf8("ingresar_2"));
        ingresar_2->setGeometry(QRect(320, 340, 151, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Playbill"));
        font1.setPointSize(14);
        ingresar_2->setFont(font1);
        usuario = new QLineEdit(ingresar);
        usuario->setObjectName(QString::fromUtf8("usuario"));
        usuario->setGeometry(QRect(310, 210, 181, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        QBrush brush4(QColor(231, 231, 231, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        usuario->setPalette(palette3);
        usuario->setFont(font);
        contra = new QLineEdit(ingresar);
        contra->setObjectName(QString::fromUtf8("contra"));
        contra->setGeometry(QRect(310, 250, 181, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        contra->setPalette(palette4);
        contra->setFont(font);
        contra->setEchoMode(QLineEdit::Password);
        error = new QLabel(ingresar);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(300, 410, 181, 41));
        QPalette palette5;
        QBrush brush5(QColor(116, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush5);
        QBrush brush6(QColor(116, 0, 0, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        error->setPalette(palette5);
        error->setFont(font);

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
    } // retranslateUi

};

namespace Ui {
    class ingresar: public Ui_ingresar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGRESAR_H
