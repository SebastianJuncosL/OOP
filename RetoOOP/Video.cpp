#include "Video.h"

Video::Video(int id, string nombre, float duracion, string genero, int cali)
{
    this->id = new int(id);
    this->nombre = new string(nombre);
    this->duracion = new float(duracion);
    this->genero = new string(genero);
    rating = new int(cali);
}

Video::~Video()
{
    delete id;
    delete nombre;
    delete duracion;
    delete genero;
    delete rating;
}