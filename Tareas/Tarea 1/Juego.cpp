#include "Juego.h"

Juego::Juego()
{
    string *jugador1Name = new string, *jugador2Name = new string; // Generamos variables para poder guardar el nombre de los jugadores
    std::cout << "Jugador 1, introduce tu nombre:" << std::endl;
    cin >> *jugador1Name;                 // Le pedimos al usuario el nombre del jugador 1
    jugador1 = new Jugador(*jugador1Name); // Generamos el jugador con el constructor dentro de la clase
                                          //Jugador e imprimimos la ficha del jugador
    std::cout << "Jugador 2, introduce tu nombre:" << std::endl;
    cin >> *jugador2Name;                 // Le pedimos al usuario el nombre del segundo jugador
    jugador2 = new Jugador(*jugador2Name); // Generamos el jugador con el constructor dentro de la clase
                                          // Jugador e imprimimos la ficha del jugador
    tablero = new Tablero;                // Generamos el tablero, el constructor vacio dentor de tablero genera tods las
    // casillas del tablero
    tablero->mostrartablero(jugador1, jugador2); // Mostramos le tablero inical con los jugadores en la posición inical
    cout << "\n";
}

Juego::~Juego()
{
    std::cout << "Gracias por jugar" << std::endl;
    delete jugador1; // Borramos el jugador 1 que se encuentra en heap
    delete jugador2; // Borramos el jugador 1 que se encuentra en heap
    delete tablero;  // Borramos el tablero que se encuentra en heap
}

void Juego::changePos()
{
    jugador1->setPos(4);
}

void Juego::showBoard()
{
    tablero->mostrartablero(jugador1, jugador2);
}

void Juego::play()
{
    int seguir;
    // cout << jugador1->getName();
    // cout << jugador2->getName();
    while (true)
    {
        std::cout << jugador1->getName() << " tu turno:" << std::endl;
        tablero->turno(jugador1);
        tablero->mostrartablero(jugador1, jugador2);
        std::cout << "Quieren seguir jugando? (1 = si/ 0 = no)" << std::endl;
        cin >> seguir;
        if (seguir == 1)
        {
            continue;
        }
        else
            break;
        if (jugador1->getPos() > 28)
        {
            std::cout << "Felicidades " << jugador1->getName() << " ganaste!" << std::endl;
            break;
        }
        std::cout << jugador2->getName() << " tu turno:" << std::endl;
        tablero->turno(jugador2);
        tablero->mostrartablero(jugador1, jugador2);
        std::cout << "Quieren seguir jugando? (1 = si/ 0 = no)" << std::endl;
        cin >> seguir;
        if (seguir == 1)
        {
            continue;
        }
        else
            break;
        if (jugador2->getPos() > 28)
        {
            std::cout << "Felicidades " << jugador2->getName() << " ganaste!" << std::endl;
            break;
        }
    }
}
bool Juego::gameOver()
{
    if (jugador1->getPos() >= 29)
    {
        std::cout << "Felicidades " << jugador1->getName() << " ganaste!" << std::endl;
        return false;
    }
    else if (jugador2->getPos() >= 29)
    {
        std::cout << "Felicidades " << jugador2->getName() << " ganaste!" << std::endl;
        return false;
    }

    return true;
}