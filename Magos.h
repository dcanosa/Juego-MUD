#ifndef MAGOS_H
#define MAGOS_H
#include <iostream>
#include <string>
#include "Activos.h"
class Magos: public Activos{
public:
    void trasladar_pos(int pos_x, int pos_y);
    void quitar_salud(int salud);
    void quitar_destruccion(int destruccion);
};

#endif // MAGOS_H
