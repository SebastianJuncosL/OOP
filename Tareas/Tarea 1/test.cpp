#include "Jugador.h"
#include "Tablero.h"

int main(int argc, char const *argv[])
{
    Jugador a("Juncos");
    Jugador b("Ariel");
    Tablero *c = new Tablero();
    c->mostrartablero(&a, &b);
    a.setPos(3);
    c->mostrartablero(&a,&b);
    a.
    delete c;
    return 0;
}
