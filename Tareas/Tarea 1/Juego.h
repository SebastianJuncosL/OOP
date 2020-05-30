#include "Jugador.h"
#include "Tablero.h"

class Juego
{
private:
    Jugador *jugador1; // Apuntador al jugador uno (composicion)
    Jugador *jugador2; // Apuntador al jugador dos (composicion)
    Tablero *tablero;  // Apuntador al tablero (composicion)

public:
    Juego();     // Constructor por default
    ~Juego();    // Destructor donde se destrullen los jugadores y el tablero
    void play(); // Esta función permite que el juego corra hasta que haya un ganador, llamando a la funcion de gameOver()
};
