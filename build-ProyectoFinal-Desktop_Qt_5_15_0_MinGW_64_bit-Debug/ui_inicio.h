/********************************************************************************
** Form generated from reading UI file 'inicio.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIO_H
#define UI_INICIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inicio
{
public:
    QPushButton *registrarse;
    QPushButton *registrarse_2;

    void setupUi(QWidget *inicio)
    {
        if (inicio->objectName().isEmpty())
            inicio->setObjectName(QString::fromUtf8("inicio"));
        inicio->resize(938, 644);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(51, 51, 51, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush2(QColor(255, 255, 255, 127));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        inicio->setPalette(palette);
        registrarse = new QPushButton(inicio);
        registrarse->setObjectName(QString::fromUtf8("registrarse"));
        registrarse->setGeometry(QRect(370, 470, 211, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("Playbill"));
        font.setPointSize(18);
        registrarse->setFont(font);
        registrarse_2 = new QPushButton(inicio);
        registrarse_2->setObjectName(QString::fromUtf8("registrarse_2"));
        registrarse_2->setGeometry(QRect(370, 340, 211, 101));
        registrarse_2->setFont(font);

        retranslateUi(inicio);

        QMetaObject::connectSlotsByName(inicio);
    } // setupUi

    void retranslateUi(QWidget *inicio)
    {
        inicio->setWindowTitle(QCoreApplication::translate("inicio", "Form", nullptr));
        registrarse->setText(QCoreApplication::translate("inicio", "REGISTRARSE", nullptr));
        registrarse_2->setText(QCoreApplication::translate("inicio", "INGRESAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inicio: public Ui_inicio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIO_H
