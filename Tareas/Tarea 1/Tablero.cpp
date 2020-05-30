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
            generarTablero();                  // Reinciamos el tablero para no tener fichas repetidas
            tablero[player1->getPos()] = "**"; // Aqui es cuando los dos jugadores se encuentran
                                               // en el mismo lugar en el tablero
        }
        else if (player1->getPos() == i) // Obtenemos la posicion del jugador uno
        {
            generarTablero();                                 // Reinciamos el tablero para no tener fichas repetidas
            tablero[player1->getPos()] = player1->getFicha(); // Coloca la ficha del jugador 1 en el
                                                              // tablero e imprime su posicion al momento
                                                              // de mostrar el tablero
        }
        else if (player2->getPos() == i) // Obtenemos la posicion del jugador dos
        {
            generarTablero();                                 // Reinciamos el tablero para no tener fichas repetidas
            tablero[player2->getPos()] = player2->getFicha(); // Coloca la ficha del jugador 2 en el tablero
                                                              // e imprime su posicion al momento de mostrar
                                                              // el tablero
        }
        if (i % 6 == 0)
        {
            cout << "\n"; // Con esto lo hacemos ver como un tablero de 5x6, haciendo saltos cada 6
                          // espacios dentro del tablero
        }
        cout << tablero[i] << " "; // Finalmente, hacemos el print de cada posicion del tablero
    }
    std::cout << "\n"; // Hacemos un salto para que los mensajes en la consola no esten tan "apretados"
}

void Tablero::turno(Jugador *player)
{
    int avanza = dado->tirarDado(), newPos = 0; // Creamos el numero que arroja el dado y el valor de la nueva posicion para el jugador
    std::cout << player->getName() << " avanza " << avanza << " lugares" << std::endl;
    newPos = player->getPos() + avanza; // En esta variable hacemos la suma de la posicion actual y la nueva posicion para el jugador
    player->setPos(newPos);             // Actualizamos la posicion del jugador
    for (int i = 0; i < 3; i++)         // Checamos si el jugador se encuentra en la cola de una escalera o serpiente
    {
        if (player->getPos() == snakeTail[i])
        {
            std::cout << "Caiste en una serpiente!" << std::endl;
            player->setPos(snakeHead[i]); // Si el jugador cae en una serpiente, entonces lo movemos a la cabeza de la serpeinte,
                                          // que se encuentra mas abajo en el tablero
            break;
        }
        else if (player->getPos() == stairTail[i])
        {
            std::cout << "Sube la escalera!" << std::endl;
            player->setPos(stairHead[i]); // Si el jugador cae en una escalera, entonces lo movemos a la cabeza de la escalera,
                                          // que se encuentra mas arriba en el tablero
            break;
        }
    }
}