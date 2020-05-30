#include "Jugador.h"

Jugador::Jugador(string name)
{
    this->name = new string(name); // Asignamos un nombre a los jugadores, estos se encuentran en stack,
                                   // por lo que no hay que borrarlos en el destructor
    ficha = toupper(name[0]);      // Iniciamos el valor de ficha
    ficha += toupper(name[1]);     // Ocurria un problema al poner ambos caracteres en la
                                   // inicializacion de ficha, por lo que la segunda letra se agrego depsues
    std::cout << "La ficha de " << *this->name << " es " << ficha << std::endl;
    // Le mostramos la ficha al jugador
    posEnTablero = 0; // Generamos un nuevo numero para la posicon del jugador en el tablero
}

Jugador::~Jugador()
{
    delete name; // Borramos el nombre, ya que se encuentra en heap
}

string Jugador::getName()
{
    return *name; // Regresa el nombre del jugador para poder usarlo en mensajes dentro de la consola
}

void Jugador::setPos(int newPos)
{
    posEnTablero = newPos; // cambiamos la posicion en el tablero, esta nos la dará la funcion de
                           // cambiarPos dentor de la clase tablero
}

int Jugador::getPos()
{
    return posEnTablero; // Nos regresa la posicion del jugador en el tablero para saber cuantos
                         // pasos avanza y en donde colocar su ficha al momento de imprimir el tablero
}

string Jugador::getFicha()
{
    return ficha; // Regresa la ficha del jugador para poder visualizarla en el tablero
}
