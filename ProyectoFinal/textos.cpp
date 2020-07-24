#include "textos.h"

textos::textos(QObject *parent) : QObject(parent)
{
  ganaste->setPixmap(QPixmap(":/ganaste.png"));
  perdiste->setPixmap(QPixmap(":/perdiste.png"));
}

void textos::lose()
{
  scene()->addItem(perdiste);
}

void textos::win()
{
  scene()->addItem(ganaste);
}
