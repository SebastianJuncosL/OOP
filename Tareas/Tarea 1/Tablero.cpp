#include "Tablero.h"

Tablero::Tablero()
{
    dado = new Dado(); // Generamos un nuevo dado en heap
    generarTablero();  // Llamamos a la funcion que genera el tablero
}

Tablero::~Tablero()
{
    delete dado; // Destruimos el dado, ya que se encuantra en heap
}

void Tablero::generarTablero()
{
    for (int i = 0; i < 30; i++) // Loop para las 30 casillas
    {
        tablero[i] = "CC"; // Inicialmente todas las casillas tienen "CC"
        // Al momento de encontrar una posicion en las listas de posiciones,
        // esa casilla cambia su valor por cabeza/cola de escalera/serpeinte
        for (int j = 0; j < 3; j++)
        {
            if (i == snakeTail[j])
                tablero[i] = "SC"; // Serpiente tail
            if (i == snakeHead[j])
                tablero[i] = "SH"; // Serpiente head
            if (i == stairTail[j])
                tablero[i] = "EC"; // Escalera tail
            if (i == stairHead[j])
                tablero[i] = "EH"; // Escalera head
            if (i == 0)
                tablero[i] = "IN"; // Inicio
            if (i == 29)
                tablero[i] = "FN"; // Meta
        }
    }
}

void Tablero::mostrartablero(Jugador *player1, Jugador *player2)
{
    for (int i = 0; i < 30; i++) // Loop que itera en las 30 casillas del tablero
    {
        if (player1->getPos() == player2->getPos()) // Comparamos las posiciones de ambos jugadores
        {
            generarTablero();
            tablero[player1->getPos()] = "**"; // Aqui es cuando los dos jugadores se encuentran en el mismo lugar en el tablero
        }
        else if (player1->getPos() == i) // Obtenemos la posicion del jugador uno
        {
            generarTablero();
            tablero[player1->getPos()] = player1->getFicha(); // Coloca la ficha del jugador 1 en el tablero e impirme su posicion al momento de mostrar el tablero
        }
        else if (player2->getPos() == i) // Obtenemos la posicion del jugador dos
        {
            generarTablero();
            tablero[player2->getPos()] = player2->getFicha(); // Coloca la ficha del jugador 2 en el tablero e impirme su posicion al momento de mostrar el tablero
        }
        if (i % 6 == 0)
        {
            cout << "\n"; // Con esto lo hacemos ver como un tablero de 5x6, haciendo saltos cada 6 espacios dentro del tablero
        }
        cout << tablero[i] << " "; // Finalmente, hacemos el print de cada posición del tablero
    }
    std::cout << "\n"; // Hacemos un salto para que los mensajes en la consola no esten tan "apretados"
}

void Tablero::turno(Jugador *player)
{
    int avanza = dado->tirarDado(), newPos = 0;
    std::cout << player->getName() << " avanza " << avanza << " lugares" << std::endl;
    newPos = player->getPos() + avanza;
    player->setPos(newPos);
    for (int i = 0; i < 3; i++)
    {
        if (player->getPos() == snakeTail[i])
        {
            std::cout << "Caiste en una serpiente!" << std::endl;
            player->setPos(snakeHead[i]);
            break;
        }
        else if (player->getPos() == stairTail[i])
        {
            std::cout << "Sube la escalera!" << std::endl;
            player->setPos(stairHead[i]);
            break;
        }
    }
}