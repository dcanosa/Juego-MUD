#ifndef SELECCION_H
#define SELECCION_H
#include <iostream>
#include <string>
#include "Personaje.h"
using namespace std;
Personaje* Seleccion()
{
    int a, sal, arm, dest, pos;
    string nombre;
    do{
        cin >> a;
        if ((a>3)||(a<1)) cout << "No existe el personaje seleccionado, por favor, introduzca uno de nuevo: ";
        switch (a)
        {
        case 1:
        {
            sleep(1);
            cout << "El personaje ESPADACHIN ha sido seleccionado correctamente.";
            nombre="Espadachin";
            sal=100;
            arm=16;
            dest=10;
            break;}
        case 2:
        {
            sleep(1);
            cout <<"El personaje ARQUERO ha sido seleccionado correctamente.";
            nombre="Arquero";
            sal=100;
            arm=8;
            dest=16;
            break;}
        case 3:
        {
            sleep(1);
            cout <<"El personaje LANCERO ha sido seleccionado correctamente.\nComienza el juego!";
            nombre="Lancero";
            sal=100;
            arm=20;
            dest=8;
            break;}
        default: break;
        }
    }
        while ((a>3)||(a<1));
        Personaje *pj= new Personaje(sal,arm,dest,5,0,nombre);
        return pj;

}
#endif // SELECCION_H
