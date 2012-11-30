#ifndef INICIO_H
#define INICIO_H
#include <iostream>
#include <string>

void inicio()
{
    sleep(0); //1
    cout << "\n\nEl juego esta a punto de comenzar. \n\n";
    sleep(0);//a 3
    cout << "La forma mediante la cual podrá usted moverse por el mundo será con los comandos N,S,E,O.";
    sleep(0);
    cout << "Podrá encontrarse con los siguientes peligros:\n";
    sleep(0);
    cout << "1.Magos: Los cuales podrán atacarte o desplazarte a un lugar aleatorio del mapa.\n\n";
    sleep(0);
    cout << "2.Enemigos: Los cuales te atacarán.\n\n";
    sleep(0);
    cout << "3.Pócimas: Las cuales podrán recuperarte 25ptos de vida, 50ptos de vida o 75ptos de vida\n\n";
    sleep(0);
    cout << "4.Venenos: Las cuales podrán quitarte 25ptos de vida, 50ptos de vida o 75ptos de vida\n\n";
    sleep(0);
    cout << "5.Setas: Podrán tanto recuperarte como quitarte vida. Podrás elegir si cogerlas o no.\n\n";
    sleep(0);
    cout << "6.Armas: Las cuales aumentaran tu capacidad destructiva\n\n";
    sleep(0);
    cout << "7.Armadura: Las cuales aumentarán tu armadura\n\n\n" << endl;
    sleep(0);
    cout <<"¡¡¡COMIENZA EL JUEGO!!!\n";

}
#endif // INICIO_H
