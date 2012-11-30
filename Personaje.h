#ifndef PERSONAJE_H
#define PERONAJE_H
#include <iostream>
#include <string>
using namespace std;
class Personaje{
public:
    Personaje (int a, int b, int c, int d, int e, string f):salud(a), armadura(b), destruccion (c), pos_x (d), pos_y (e), name(f){}
    void moverse();
    void coger_seta();
    void luchar();
    void modif_vida();
    string nombre()
    {
       return name;
    }

    int mostrar_vida()
    {
        return salud;
    }
    int mostrar_destruccion()
    {
        return destruccion;
    }
    int mostrar_armadura()
    {
        return armadura;
    }

    int x()
    {
        return pos_x;
    }
    int y()
    {
        return pos_y;
    }
    void aumentar_x()
    {
        pos_x++;
    }
    void aumentar_y()
    {
        pos_y++;
    }
    void disminuir_x()
    {
        pos_x--;
    }
    void disminuir_y()
    {
        pos_y--;
    }

private:
    int salud, destruccion, pos_x, pos_y, armadura;
    string name;
};
#endif // PERSONAJE_H
