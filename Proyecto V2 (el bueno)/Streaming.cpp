#include "Streaming.h"

Streaming::Streaming(string nombre) : nombre(new string(nombre)) {}

Streaming::~Streaming()
{
    delete nombre;
}

void Streaming::getInfoPelicula(string nombre)
{
    for (int i = 0; i < peliculas.size(); i++)
    {
        if (peliculas[i]->getNombre() == nombre)
        {
            peliculas[i]->getInfoPelicula();
            break;
        }
    }
}

void Streaming::agregarPelicula(string nombre, float duracion, string genero, float calificacion, string director)
{
    peliculas.push_back(new Pelicula(nombre, duracion, genero, calificacion, director));
}

void Streaming::quitarPelicula(string nombre)
{
    for (int i = 0; i < peliculas.size(); i++)
    {
        if (peliculas[i]->getNombre() == nombre)
        {
            std::cout << "Se ha borrado la pelicula '" << peliculas[i]->getNombre() << "'" << std::endl;
            delete peliculas[i];
            peliculas.erase(peliculas.begin() + i);
        }
    }
}

void Streaming::agregarSerie(string nombre, string genero)
{
    series.push_back(new Serie(nombre, genero));
}

void Streaming::getInfoSerie(string nombre)
{
    for (int i = 0; i < series.size(); i++)
    {
        if (series[i]->getNombreSerie() == nombre)
        {
            series[i]->getInfoSerie();
            break;
        }
    }
}

void Streaming::agregarCapitulos(string nombreSerie, string nombreCapitulo, int numCap, float duracion, float calificacion)
{
    string genero;
    Serie *serieDeConsulta;
    for (int i = 0; i < series.size(); i++)
    {
        if (series[i]->getNombreSerie() == nombreSerie)
        {
            cout<<"a\n";
            serieDeConsulta = series[i];
            series[i]->updateRating();
            cout<<"b\n";
            genero = serieDeConsulta->getGenero();
            cout<<"c\n";
            serieDeConsulta->agregarCapitulo(numCap, nombreCapitulo, genero, duracion, calificacion);
            std::cout << "Capitulo agregado a " << series[i]->getNombreSerie() << std::endl;
            cout<<"d\n";
            break;
        }
    }
}

void Streaming::borrarSerie(string nombre)
{
    for (int i = 0; i < series.size(); i++)
    {
        if (series[i]->getNombreSerie() == nombre)
        {
            std::cout << "Se ha borrado la serie '" << series[i]->getNombreSerie() << "'" << std::endl;
            series[i]->borrarTodosLosCapitulos();
            delete series[i];
        }
    }
}

void Streaming::buscarPorNombre(string nombre)
{
    string current;
    int count = 0;
    //Para las peliculas
    std::cout << "\nPeliculas que contienen '" << nombre << "':" << std::endl;
    for (int i = 0; i < peliculas.size(); i++)
    {
        current = peliculas[i]->getNombre();
        transform(current.begin(), current.end(), current.begin(), ::tolower);
        size_t found = current.find(nombre);
        if (found != string::npos)
        {
            cout << peliculas[i]->getNombre() << endl;
            count++;
        }
    }
    if (count == 0)
    {
        cout << "No hay peliculas con ese nombre\n\n";
    }
    count = 0;
    //Para las series
    std::cout << "Series que contienen '" << nombre << "':" << std::endl;
    for (int i = 0; i < series.size(); i++)
    {
        current = series[i]->getNombreSerie();
        transform(current.begin(), current.end(), current.begin(), ::tolower);
        size_t found = current.find(nombre);
        if (found != string::npos)
        {
            cout << series[i]->getNombreSerie() << endl;
            count++;
        }
    }
    if (count == 0)
    {
        cout << "No hay series con ese nombre\n\n";
    }
    else   
        cout<<"\n";
}

void Streaming::buscarPorGenero(string nombre)
{
    string current;
    int count = 0;
    //Para las peliculas
    std::cout << "\nPeliculas que contienen '" << nombre << "':" << std::endl;
    for (int i = 0; i < peliculas.size(); i++)
    {
        current = peliculas[i]->getGenero();
        transform(current.begin(), current.end(), current.begin(), ::tolower);
        size_t found = current.find(nombre);
        if (found != string::npos)
        {
            cout << peliculas[i]->getNombre() << endl;
            count++;
        }
    }
    if (count == 0)
    {
        cout << "No hay peliculas con ese genero\n\n";
    }
    count = 0;
    //Para las series
    std::cout << "Series que contienen '" << nombre << "':" << std::endl;
    for (int i = 0; i < series.size(); i++)
    {
        current = series[i]->getGenero();
        transform(current.begin(), current.end(), current.begin(), ::tolower);
        size_t found = current.find(nombre);
        if (found != string::npos)
        {
            cout << series[i]->getNombreSerie() << endl;
            count++;
        }
    }
    if (count == 0)
    {
        cout << "No hay series con ese genero\n\n";
    }
    else   
        cout<<"\n";
}