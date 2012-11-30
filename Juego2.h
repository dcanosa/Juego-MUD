#ifndef JUEGO2_H
#define JUEGO2_H
#include <iostream>
#include "Juego.h"
#include <string>
using namespace std;
void play(Personaje*p,mundo*w)
{
    if ((w->mostrar_pos(p->x(),p->y()))==0)
    {
        cout << "\nEsta posicion esta vacía.";
    }
    if ((w->mostrar_pos(p->x(),p->y()))==1)
    {
        cout << "\nEn esta posición hay un enemigo.";
    }
    if ((w->mostrar_pos(p->x(),p->y()))==2)
    {
        cout << "\nEn esta posición hay un mago.";
    }
    if ((w->mostrar_pos(p->x(),p->y()))==3)
    {
        cout << "\nEn esta posición hay una pócima.";
    }
    if ((w->mostrar_pos(p->x(),p->y()))==4)
    {
        cout << "\nEn esta posición hay una seta.";
    }
    if ((w->mostrar_pos(p->x(),p->y()))==5)
    {
        cout << "\nEn esta posición hay un veneno.";
    }
    if ((w->mostrar_pos(p->x(),p->y()))==6)
    {
        cout << "\nEn esta posición hay un arma.";
    }
}

#endif // JUEGO2_H
