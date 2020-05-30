#include "Jugador.h"
#include "Tablero.h"
#include "Juego.h"

int main(int argc, char const *argv[])
{
    Juego *SyE = new Juego; // Generamos el juego
    SyE->play(); // Llamamos a la fucnion de jugar
    delete SyE; // Borramos el juego, ya qeu se enceuntra en heap
    return 0;
}
