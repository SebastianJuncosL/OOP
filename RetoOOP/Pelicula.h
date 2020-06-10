#include "Video.h"

class Pelicula : private Video
{
private:
    string *director;

public:
    Pelicula(int, string, float, string, int, string);
    ~Pelicula();
    void showInfo();
};
