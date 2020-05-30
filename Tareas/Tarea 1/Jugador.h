#include <string>
#include <iostream>
using namespace std;

#pragma once
class Jugador
{
private:
    string *name;     // Nombre del jugador
    string ficha;     // La ficha es generada en el constructor, son las primeras 2 letras del jugador en mayusculas
    int posEnTablero; // Esta posicion siempre empieza en 0 ya que es la posición incial para todos los jugadores
                      // en el tablero

public:
    Jugador(string);   // Constructor donde pasamos el nombre de los jugadores
    ~Jugador();        // Destructor de la variable posición
    string getName();  // Regresamos el nombre del jugador
    void setPos(int);  // setter para la posición en el tablero, que se obtiene desde la clase Tablero
    int getPos();      // regresamos la posicion en el tablero
    string getFicha(); // Regresamos la ficha del jugador
};