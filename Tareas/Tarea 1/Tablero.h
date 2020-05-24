
#include "Jugador.h"
using namespace std;

#pragma once
class Tablero
{
private:
    //Jugador *player;
    string tablero[30];              // El tablero es lineal, pero se va a imprimir como matríz
    int snakeTail[3] = {17, 21, 28}; // El jugador cae en una "cola" de serpiente y baja
    int snakeHead[3] = {3, 6, 10};   // Aquí es donde el jugador termina al bajar la seropiente
    int stairTail[3] = {1, 8, 11};   // El jugador cae en una "cola" de escalera y sube
    int stairHead[3] = {14, 19, 27}; // Aquí es donde el jugador termina al subir la escalera
// C = Casilla, I = Inicio, M = Meta, S = Serpiente, E = Escalera

public:
    Tablero();
    ~Tablero();
    void generarTablero();
    void showTablero();
    void changePos(Jugador *);
};

Tablero::Tablero()
{
    generarTablero();
}

Tablero::~Tablero()
{
}

void Tablero::generarTablero()
{
    for (int i = 0; i < 30; i++)
    {
        tablero[i] = "CC";
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
            if(i==0)
                tablero[i] = "IN"; // Inicio
            if(i==29)
                tablero[i] = "FN"; // Meta
        }
    }
}

void Tablero::showTablero()
{
    for (int i = 0; i < 30; i++)
    {
        if (i%6 == 0)
        {
            cout<<"\n";
        }
        cout<< tablero[i] << " ";
        
    }
    std::cout << "" << std::endl;
    
}

void Tablero::changePos(Jugador *persona)
{
    int newPos;
    cin >> newPos;
    persona->setPos(newPos);
}
