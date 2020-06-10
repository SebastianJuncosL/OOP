#include "Video.h"

Video::Video(string nombre, float duracion, string genero, float calificacion) : nombre(new string(nombre)), duracion(new float(duracion)), genero(new string(genero)), calificacion(new float(calificacion)) {}

Video::~Video()
{
    cout << "Video Borrado\n";
    delete nombre;
    delete duracion;
    delete genero;
    delete calificacion;
}

