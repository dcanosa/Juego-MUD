#ifndef SETAS_H
#define SETAS_H
#include <iostream>
#include <string>
#include "Pasivos.h"
class Setas: public Pasivos{
public:
    void incr_decr_vida(int salud);
};
#endif // SETAS_H
