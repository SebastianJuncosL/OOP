#include "Persona.h"

Persona::Persona(string nombre) : nombre(new string(nombre)) {}

Persona::~Persona()
{
    delete nombre;
}