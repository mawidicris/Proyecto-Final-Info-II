QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aceite.cpp \
    baretos.cpp \
    capuchoblanco.cpp \
    capuchonegro.cpp \
    esmad.cpp \
    explosion.cpp \
    gamines.cpp \
    guardar.cpp \
    ingresar.cpp \
    main.cpp \
    mainwindow.cpp \
    misil.cpp \
    papas.cpp \
    partidas.cpp \
    piedras.cpp \
    policia.cpp \
    puntaje.cpp \
    registro.cpp \
    tanqueta.cpp

HEADERS += \
    aceite.h \
    baretos.h \
    capuchoblanco.h \
    capuchonegro.h \
    esmad.h \
    explosion.h \
    gamines.h \
    guardar.h \
    ingresar.h \
    mainwindow.h \
    misil.h \
    papas.h \
    partidas.h \
    piedras.h \
    policia.h \
    puntaje.h \
    registro.h \
    tanqueta.h

FORMS += \
    ingresar.ui \
    mainwindow.ui \
    partidas.ui \
    registro.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    imagenes.qrc

DISTFILES +=
