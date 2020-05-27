#include <iostream>
#include <ctime>
using namespace std;

#pragma once
class Dado
{
private:
    int dado; // Este es el numero que regresaremos al tirar el dado
public:
    Dado();          // Constructor por default
    ~Dado();         // Destructor vacio
    int tirarDado(); // Funcion que nos permite lanzar un dado con
                     //un resultado diferente en cada tirada
};