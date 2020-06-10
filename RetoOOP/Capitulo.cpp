#include "Capitulo.h"

Capitulo::Capitulo(int id, string nombre, float duracion, string genero, int cali, int temporada, int capitulo) : Video(id, nombre, duracion, genero, cali), noTemporada(new int(temporada)), noCapitulo(new int(capitulo)) {}

Capitulo::~Capitulo()
{
    delete noTemporada;
    delete noCapitulo;
}

void Capitulo::showInfo()
{
    std::cout << "Titulo:\t" << *nombre << std::endl;
    std::cout << "Duracion:\t" << *duracion << std::endl;
    std::cout << "Temporada:\t" << *noTemporada << std::endl;
    std::cout << "Rating:\t" << *rating << std::endl;
    std::cout << "Genero:\t" << *genero << std::endl;
}

int Capitulo::getTemp()
{
    return *noTemporada;
}

string* Capitulo::showCapitulo()
{
    string temp = to_string(*noTemporada), *info = new string[2];
    info[0] = temp;
    info[1] = *nombre;
    return info;
}

string Capitulo::getName()
{
    return *nombre;
}