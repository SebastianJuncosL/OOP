#include "Dado.h"
Dado::Dado()
{
}

Dado::~Dado()
{
}

int Dado::tirarDado()
{
    srand(time(0));        // Generamos una random seed para poder tener
                           // diferentes numeros en cada tiro
    dado = rand() % 6 + 1; // Dividmos el numero random entre 6 + 1 para
                           // que nos de un valor de las 6 caras de un dado nomral
    return dado;           // Regresamos el valor que nos da el dado
}