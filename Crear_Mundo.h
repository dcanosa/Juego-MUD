#ifndef CREAR_MUNDO_H
#define CREAR_MUNDO_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
class mundo{
   public:
    void crear_mundo()
    {
        int i,j;
        srand (time(NULL));
        for (i=0; i<=5;i++)
        {
            for (j=0;j<=5;j++)
            {
                world[i][j]=rand() % 7;// 0=Vacio, 1=Enemigo, 2=Mago, 3=Pocima, 4=Seta, 5=Veneno, 6=Arma
            }
        }
        world[5][0]=0;
    }
    void mostrar_mundo()
    {
        int i,j;
        for (i=0; i<=5;i++)
        {
            for (j=0;j<=5;j++)
            {
                cout << world[i][j] << " ";// 0=Vacio, 1=Enemigo, 2=Mago, 3=Pocima, 4=Seta, 5=Veneno, 6=Arma
            }
            cout << endl;
        };

    }
    int mostrar_pos(int a,int b)
    {
        return world[a][b];
    }
private:
    int world[5][5];
};

#endif // CREAR_MUNDO_H
