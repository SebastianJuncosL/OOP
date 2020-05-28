#include "Jugador.h"
#include "Tablero.h"

class Juego
{
private:
    Jugador *jugador1;
    Jugador *jugador2;
    Tablero *tablero;

public:
    Juego();          // Constructor por default
    ~Juego();         // Destructor donde se destrullen los jugadores y el tablero
    void changePos(); // Test para cambiar la posicion como SUDO
    void showBoard(); // Test para mostrar el tablero como SUDO
    void play();      // Esta función permite que el juego corra hasta que haya un ganador, llamando a la funcion de gameOver()
    bool gameOver();  // Revisa que ningun jugador esté en la meta, en caso de que uno de los 2 llegue, esta funcion hara terminar el juego
};
