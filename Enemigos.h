#ifndef ENEMIGOS_H
#define ENEMIGOS_H
#include <iostream>
#include <string>
#include "Activos.h"
class Enemigos:public Activos{
public:
    void quitar_salud();
};

#endif // ENEMIGOS_H
