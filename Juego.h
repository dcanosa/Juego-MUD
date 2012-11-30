#ifndef JUEGO_H
#define JUEGO_H
#include "Seleccion.h"
#include "Crear_Mundo.h"
#include "Juego2.h"
void juego (Personaje*p,mundo*w)
{
    char mov;
    cout << "Ahora mismo su "<<p->nombre()<<" se encuentra en la posicion ("<< 5-p->x()<<","<<p->y()<<")";
    cout << "\n¿Hacia donde desea moverse? (N,S,E,O)\n";
    cin >> mov;
    if (((mov=='n')||(mov=='N'))&&(p->x()!=0))
    {
        p->disminuir_x();
        cout << "Se ha movido hacia la posición ("<<5-p->x()<<","<<p->y()<<")";

    }
     if (((mov=='s')||(mov=='S'))&&(p->x()!=5))
     {
         p->aumentar_x();
         cout << "Se ha movido hacia la posición ("<<5-p->x()<<","<<p->y()<<")";
     }
     if (((mov=='e')||(mov=='E'))&&(p->y()!=5))
     {
         p->aumentar_y();
         cout << "Se ha movido hacia la posición ("<<5-p->x()<<","<<p->y()<<")";
     }
     if (((mov=='o')||(mov=='O'))&&(p->y()!=0))
     {
         p->disminuir_y();
         cout << "Se ha movido hacia la posición ("<<5-p->x()<<","<<p->y()<<")";
     }

}
#endif // JUEGO_H
