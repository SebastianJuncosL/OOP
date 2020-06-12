#include "Serie.h"

Serie::Serie(string nombre, string genero) : nombre(new string(nombre)), genero(new string(genero))
{
    ratingTotal = 0.0;
}

Serie::~Serie()
{
    //cout << "La serie " << *nombre << " ha sido borrada\n";
    delete nombre;
    delete genero;
}

void Serie::updateRating()
{
    ratingTotal = 0.0;
    for (int i = 0; i < capitulos.size(); i++)
    {
        ratingTotal += capitulos[i]->getCalificacionCapitulo();
    }
    ratingTotal = ratingTotal / capitulos.size();
}

string Serie::getNombreSerie()
{
    return *nombre;
}

void Serie::agregarCapitulo(int numCap, string nombre, string genero, float duracion, float calificacion)
{
    capitulos.push_back(new Capitulo(nombre, duracion, genero, calificacion, numCap));
}

void Serie::borrarTodosLosCapitulos()
{
    for (int i = 0; i < capitulos.size(); i++)
    {
        delete capitulos[i];
        //capitulos.erase(capitulos.begin() + i);
    }
}

void Serie::getInfoSerie()
{
    for (int i = 0; i < nombre->size(); i++)
    {
        cout << "-";
    }
    cout << "----\n";
    std::cout << "¦ " << *nombre << " ¦" << std::endl;
    for (int i = 0; i < nombre->size(); i++)
    {
        cout << "-";
    }
    std::cout << "----" << std::endl;
    std::cout << "Rating: " << ratingTotal << std::endl;
    std::cout << capitulos.size() << " Capitulos" << std::endl;
}

void Serie::listaDeCapitulos()
{
    std::cout << "Lista de Capitulos de " << *nombre << std::endl;
    for (int i = 0; i < capitulos.size(); i++)
    {
        std::cout << capitulos[i]->getNumeroCapitulo() << ". " << capitulos[i]->getNombre() << std::endl;
    }
}

string Serie::getGenero()
{
    return *genero;
}