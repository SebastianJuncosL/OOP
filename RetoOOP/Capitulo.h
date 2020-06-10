#include "Video.h"

class Capitulo : private Video
{
private:
    int *noTemporada;
    int *noCapitulo;
    

public:
    Capitulo(int id, string nombre, float duracion, string genero, int cali, int temporada, int capitulo);
    ~Capitulo();
    void showInfo();
    int getTemp();
    string getName();
    string *showCapitulo();
};
