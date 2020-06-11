#include <vector>
#include "Capitulo.h"

class Serie
{
private:
    vector<Capitulo *> capitulos;
    float ratingTotal;
    string *nombre;
    string *genero;
    friend class Streaming;
    void updateRating();
    string getNombreSerie();
    void agregarCapitulo(int, string, string, float, float);
    void borrarTodosLosCapitulos();
    void getInfoSerie();
    void listaDeCapitulos();
    string getGenero();

public:
    Serie(string, string);
    ~Serie();
};
