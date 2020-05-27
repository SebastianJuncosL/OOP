#include "Tablero.h"

Tablero::Tablero()
{
    dado = new Dado(); // Generamos un nuevo dado en heap
    generarTablero();  // llamamos a la funcion que genera el tablero
}

Tablero::~Tablero()
{
    delete dado; // desstruimos el dado ya que se encuantra en heap
}

void Tablero::generarTablero()
{
    for (int i = 0; i < 30; i++) // Loop para las 30 casillas
    {
        tablero[i] = "CC"; // Inicialmente todas las casillas tienen "CC"
        // Al momento de encontrar una posicion en las listas de posiciones,
        // esa casilla cambia su valor por cabeza o cola de escalera o serpeinte
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

void Tablero::mostrartablero(Jugador *Player1, Jugador *Player2)
{
    for (int i = 0; i < 30; i++)
    {
        if(Player1->getPos() == Player2->getPos())
            tablero[Player1->getPos()] = "**";
        else if(Player1->getPos() == i)
            tablero[Player1->getPos()] = Player1->getFicha();
        else if(Player2->getPos() == i)
            tablero[Player2->getPos()] = Player2->getFicha();
        if (i % 6 == 0)
        {
            cout << "\n";
        }
        cout << tablero[i] << " ";
    }
    std::cout << "" << std::endl;
}

void Tablero::cambiarPos(Jugador *persona)
{
    int newPos;
    cin >> newPos;
    persona->setPos(newPos);
}
void Tablero::turno()
{
    int avanza = dado->tirarDado();
}