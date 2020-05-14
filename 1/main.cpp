#include<iostream>
#include <string>
#include "Videojuego.h"
using namespace std;

int main()
{
    Videojuego zelda("Junqui Walks", "10/10", "RPG");
    zelda.getInfo();
    zelda.playGame();
    
    return 0;
}