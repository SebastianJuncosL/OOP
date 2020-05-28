
#include "Jugador.h"
#include "Dado.h"
using namespace std;

#pragma once
class Tablero
{
private:
    Dado *dado;                      // Este dado lo usamos por composición ya que el juego debe encargarse
                                     // de su uso, creación y destruccion
    string tablero[30];              // El tablero es lineal, pero se va a imprimir como matríz
    int snakeTail[3] = {17, 21, 28}; // El jugador cae en una "cola" de serpiente y baja
    int snakeHead[3] = {3, 6, 10};   // Aquí es donde el jugador termina al bajar la seropiente
    int stairTail[3] = {5, 8, 11};   // El jugador cae en una "cola" de escalera y sube
    int stairHead[3] = {14, 19, 27}; // Aquí es donde el jugador termina al subir la escalera
                                     // C = Casilla, I = Inicio, M = Meta, S = Serpiente, E = Escalera

public:
    Tablero();                                 // Constructor por default
    ~Tablero();                                // Destructor donde se borran los apuntadores de la clase Tablero
    void generarTablero();                     // Genera el arreglo de tablero con las serpientes y las
                                               // escaleras en las posiciones indicadas por snakeTail/Head
                                               // y stairTail/Head
    void mostrartablero(Jugador *, Jugador *); // Hace un print del tablero y le pasamos un apuntador para poder acceder
                                               // y utilizar la ficha y la posicion del jugador dentro del tablero
    void turno(Jugador *);                     // Esta funcion tira el dado y mueve la posicion del jugador del
                                               // jugador, ademas de cambiar la paosicone que tiene el jugador dentro de su clase
};
