#include "Player.h"
#include <iostream>
using namespace std;
int main(int argc, const char **argv)
{
    Player *ravio = new Player("Ravio");
    Player *tatl = new Player("Tatl");
    Player *sheik = new Player("Sheik");
    // Tatl actions
    tatl->searchLife();
    tatl->walk();
    tatl->useExtraLife();
    // Sheik actions
    sheik->attack();
    sheik->block();
    sheik->escape();
    // Ravio actions
    ravio->walk();
    ravio->escape();
    ravio->searchLife();
    return 0;
}