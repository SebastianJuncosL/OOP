#include "Persona.h"

class Admin: private Persona
{
public:
    Admin(string nombre);
    ~Admin();
};

Admin::Admin(string nombre): Persona(nombre)
{
}

Admin::~Admin()
{
}
