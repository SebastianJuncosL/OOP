#include "Serie.h"

Serie::Serie(string nombre) : nombre(nombre) {}

Serie::~Serie()
{
}

void Serie::showCapitulos()
{
    string *capitulo, temporada, nombre;
    for (int i = 0; i < serie.size(); i++)
    {
        capitulo = serie[i]->showCapitulo();
        temporada = capitulo[0];
        nombre = capitulo[1];
        std::cout << nombre << std::endl;
        std::cout << "Temporada:\t" << temporada << std::endl;
        delete capitulo;
    }
}

void Serie::agregarCapitulo(int id, int cali, int temporada, int capitulo, string nombre, string genero, float duracion)
{
    serie.push_back(new Capitulo(id, nombre, duracion, genero, cali, temporada, capitulo));
}

void Serie::quitarCapitulo(string *capitulo)
{
    for (int i = 0; i < serie.size(); i++)
    {
        if (serie[i]->getName() == *capitulo)
        {
            serie[i]->~Capitulo();
        }
        
    }
    
}