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

public:
    Streaming(string);
    ~Streaming();
    // Para las peliculas
    void getInfoPelicula(string);
    void agregarPelicula(string, float, string, float, string);
    void quitarPelicula(string);
    // Para las series
    void agregarSerie(string, string);
    void agregarCapitulos(string, string, int, float, float);
    void getInfoSerie(string);
    void borrarSerie(string);
    // Busquedas
    void buscarPorNombre(string);
    void buscarPorGenero(string);
};
