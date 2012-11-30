#include "Crear_Mundo.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
void crear_mundo(int &a[5][5])
{
    int i,j;
    for (i=0; i<=5;i++)
    {
        for (j=0;j<=5;j++)
        {
            a[i][j]=rand() % 6; // 0=Vacio, 1=Enemigo, 2=Mago, 3=Pocima, 4=Seta, 5=Veneno, 6=Arma
        }
    }
    a[0][0]=0;
}
