#include "Pelicula.h"
#include "Serie.h"
#include <algorithm>
using namespace std;

#pragma once

class Streaming
{
private:
    string *nombre;
    vector<Pelicula *> peliculas;
    vector<Serie *> series;
    friend class Admin;
    // Para las peliculas
    void agregarPelicula(string, float, string, float, string);
    void quitarPelicula(string);
    // Para las series
    void agregarSerie(string, string);
    void agregarCapitulos(string, string, int, float, float);
    void borrarSerie(string);

public:
    Streaming(string);
    ~Streaming();
    // Información
    void getInfoPelicula(string);
    void getInfoSerie(string);
    void getCapitulosDeSerie(string);
    // Busquedas
    void buscarPorNombre(string);
    void buscarPorGenero(string);
};
