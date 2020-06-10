#include "Video.h"


class Capitulo : private Video
{
private:
    int *numeroCapitulo;

public:
    Capitulo(string, float, string, float, int);
    ~Capitulo();
    string getNombre();
    int getNumeroCapitulo();
    float getCalificacionCapitulo();
};
