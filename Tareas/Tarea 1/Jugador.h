#include <string>
#include <iostream>
using namespace std;

#pragma once
class Jugador
{
private:
    string *name;
    char ficha; // La ficha es generada en el constructor, es la primera letra del nombre del jugador en mayúscula
    int *posEnTablero; // Esta posicion siempre empieza en 0 ya que es la posición incial para todos los jugadores
                      // en el tablero

public:
    Jugador(string);
    ~Jugador();
    void setPos(int);
    int getPos();
    char getFicha();

};

Jugador::Jugador(string name)
{
    this->name = &name;
    ficha = toupper(name[0]);
    std::cout <<"La ficha de "<< *this->name<< " es "<< ficha << std::endl;
    posEnTablero = new int(0);
}

Jugador::~Jugador()
{
    delete posEnTablero;
}

void Jugador::setPos(int newPos)
{
    *posEnTablero = newPos;
}

int Jugador::getPos()
{
    return *posEnTablero;
}

char Jugador::getFicha()
{
    return ficha;
}
