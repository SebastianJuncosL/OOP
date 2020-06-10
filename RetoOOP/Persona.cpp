#include "Persona.h"

Persona::Persona(string name)
{
    nombre = new string(name);
}

Persona::~Persona()
{
    delete nombre;
}