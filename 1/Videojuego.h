#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;
class Videojuego
{
private:
    string *name;
    string *rating;
    string *genre;
    bool *playing = new bool;
    int lives = 3;

public:
    Videojuego();
    Videojuego(string, string, string);
    ~Videojuego();
    void getInfo();
    void playGame();
    bool moveFordward();
    void attack();
    void defend();
    void encounter();
};

// Las vidas son estáticas porque ocurría un problema
// al momento de restar en el apuntador. Crear las
// vidas en stack resolvió el problema.

// En un futuro, esta clase podría contener una clase
// de jugador y otra de enemigo, con sus respectivos
// atributos para que el juego sea mas completo
