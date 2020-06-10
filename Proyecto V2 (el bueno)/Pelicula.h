#include "Video.h"

#include <string>
using namespace std;
#pragma once

class Pelicula : private Video
{
private:
    string *director;

public:
    Pelicula(string, float, string, float, string);
    ~Pelicula();
    string getNombre();
    string getDirector();
    string getGenero();
    float getCalificacion();
    void getInfoPelicula();
};
