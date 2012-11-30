#include <iostream>
#include <string>
#include "Presentacion.h"
#include "Inicio.h"
#include "Juego.h"
Personaje *pj;
mundo*w;
using namespace std;
int main()
{
Presentacion();
pj=Seleccion();
mundo *w=new mundo;
w->crear_mundo();
w->mostrar_mundo();
inicio();
do
{
juego(pj,w);
play(pj,w);
}
while (pj->mostrar_vida()>0);
}


