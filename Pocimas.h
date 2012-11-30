#ifndef POCIMAS_H
#define POCIMAS_H
#include <iostream>
#include <string>
#include "Pasivos.h"
class Pocimas: public Pasivos{
public:
    void incr_vida (int salud);
};

#endif // POCIMAS_H
