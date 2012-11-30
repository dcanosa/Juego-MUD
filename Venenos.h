#ifndef VENENOS_H
#define VENENOS_H
#include <iostream>
#include <string>
#include "Pasivos.h"
class Venenos: public Pasivos{
public:
    void decr_vida(int salud);
};

#endif // VENENOS_H
