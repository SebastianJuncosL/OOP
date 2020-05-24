#include "Tablero.h"

int main(int argc, char const *argv[])
{
    Tablero *lakersStadium = new Tablero("Lakers", "Warriors");
    lakersStadium->resetScores();
    lakersStadium->scoreForLocal();
    lakersStadium->scoreForVisitants();
    lakersStadium->scoreForVisitants();
    lakersStadium->resetScores();
    delete lakersStadium;
    return 0;
}
