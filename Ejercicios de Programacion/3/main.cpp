#include "Board.h"

int main(int argc, char const *argv[])
{
    int size = 10;
    string name = "Monopoly";
    Board *monopoly = new Board(size, name);
    monopoly->seeRules();
    monopoly->rollDices();
    monopoly->goToJail();
    monopoly->goToJail();
    monopoly->getOutOfJail();
    monopoly->goToJail();
    delete monopoly;
    return 0;
}
