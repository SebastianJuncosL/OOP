#include "Juego.h"

Juego::Juego()
{
    string jugador1Name, jugador2Name; // Generamos variables para poder guardar el nombre de los jugadores
    std::cout << "Jugador 1, introduce tu nombre:" << std::endl;
    cin >> jugador1Name;                  // Le pedimos al usuario el nombre del jugador 1
    jugador1 = new Jugador(jugador1Name); // Generamos el jugador con el constructor dentro de la clase
                                          //Jugador e imprimimos la ficha del jugador
    std::cout << "Jugador 2, introduce tu nombre:" << std::endl;
    cin >> jugador2Name;                         // Le pedimos al usuario el nombre del segundo jugador
    jugador2 = new Jugador(jugador2Name);        // Generamos el jugador con el constructor dentro de la clase
                                                 // Jugador e imprimimos la ficha del jugador
    tablero = new Tablero;                       // Generamos el tablero, el constructor vacio dentro de tablero genera tods las
                                                 // casillas del tablero
    tablero->mostrartablero(jugador1, jugador2); // Mostramos el tablero inical con los jugadores en la posición inical
    cout << "\n";
}

Juego::~Juego()
{
    std::cout << "Gracias por jugar" << std::endl; // Este mensaje nos ayuda a saber que el destructor
                                                   // si se ejecutó al terminar el programa
    delete jugador1;                               // Borramos el jugador 1 que se encuentra en heap
    delete jugador2;                               // Borramos el jugador 1 que se encuentra en heap
    delete tablero;                                // Borramos el tablero que se encuentra en heap
}

void Juego::play()
{
    int seguir1, seguir2; // Variables donde los jugadores deciden si seguir jugando
    while (true)          // Loop  para seguir jugando
    {
        std::cout << jugador1->getName() << " tu turno:" << std::endl;
        tablero->turno(jugador1);                    // Mandamos a llamar la funcion de turno, donde el jugador avanza
        tablero->mostrartablero(jugador1, jugador2); // Mostramos la posicion de ambos jugadores
                                                     // en el tablero
        std::cout << "Quieren seguir jugando? (1 = si/ 0 = no)" << std::endl;
        cin >> seguir1;              // Le preguntamos al jugador uno si queire ocntinuar con el juego
        if (jugador1->getPos() > 28) // Checamos si el jugador uno gano en este turno
        {
            std::cout << "Felicidades " << jugador1->getName() << " ganaste!" << std::endl;
            break; // Terminamos el loop y el juego
        }
        std::cout << jugador2->getName() << " tu turno:" << std::endl;
        tablero->turno(jugador2);                    // Mandamos a llamar la funcion de turno, donde el jugador avanza
        tablero->mostrartablero(jugador1, jugador2); // Mostramos la posicion de ambos jugadores
                                                     // en el tablero
        std::cout << "Quieren seguir jugando? (1 = si/ 0 = no)" << std::endl;
        cin >> seguir2;              // Le preguntamos al jugador uno si queire ocntinuar con el juego
        if (jugador2->getPos() > 28) // Checamos si el jugador dos gano en este turno
        {
            std::cout << "Felicidades " << jugador2->getName() << " ganaste!" << std::endl;
            break; // Terminamos el loop y el juego
        }
        if (seguir1 == 1 && seguir2 == 1)
            continue; // Si ambos jugadores deciden seguir jugando, el juego se mantiene
        else
            break;
    }
}
