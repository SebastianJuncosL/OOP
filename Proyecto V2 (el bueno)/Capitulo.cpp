#include "Capitulo.h"

Capitulo::Capitulo(string nombre, float duracion, string genero, float calificacion, int numCap) : Video(nombre, duracion, genero, calificacion), numeroCapitulo(new int(numCap)) {}

Capitulo::~Capitulo()
{
    // cout << "Capitulo "<< *numeroCapitulo<<" borrado\n";
    delete numeroCapitulo;
}

string Capitulo::getNombre()
{
    return *nombre;
}

int Capitulo::getNumeroCapitulo()
{
    return *numeroCapitulo;
}

float Capitulo::getCalificacionCapitulo()
{
    return *calificacion;
}