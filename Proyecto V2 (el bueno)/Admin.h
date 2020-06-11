#include "Persona.h"
#include "Streaming.h"
class Admin : private Persona
{
private:
public:
    Admin(string nombre);
    ~Admin();
    void agregarPelicula(Streaming*, string nombrePelicula, float duracion, string genero, float calificacion, string director);
    void agregarSerie(Streaming*, string nombre, string genero);
    void agregarCapitulos(Streaming*,string nombreSerie, string nombreCapitulo, int numCap, float duracion, float calificacion);
    void borrarSerie(Streaming* servicio, string nombre);
    void borrarPelicula(Streaming* servicio, string nombre);
};
