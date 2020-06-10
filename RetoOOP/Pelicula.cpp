#include "Pelicula.h"

Pelicula::Pelicula(int id, string nombre, float duracion, string genero, int cali, string director) : Video(id, nombre, duracion, genero, cali), director(new string(director)) {}

Pelicula::~Pelicula()
{
    delete director;
}

void Pelicula::showInfo()
{
    std::cout << "Titulo:\t" << *nombre << std::endl;
    std::cout << "Duracion:\t" << *duracion << std::endl;
    std::cout << "Director:\t" << *director << std::endl;
    std::cout << "Rating:\t" << *rating << std::endl;
    std::cout << "Genero:\t" << *genero << std::endl;
}
