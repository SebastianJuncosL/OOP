#include "Pelicula.h"
#include "Serie.h"

class Streaming
{
private:
    vector<Pelicula> peliculas;
    vector<Serie> series;
    string nombre;
    void agregarSerie();
    void quitarSerie();
    void agregarPeli();
    void quitarPeli();
public:
    Streaming(string);
    ~Streaming();
};

Streaming::Streaming(string nombre)
{
}

Streaming::~Streaming()
{
}
