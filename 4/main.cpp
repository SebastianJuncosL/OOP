#include "Dice.h"

int main(int argc, char const *argv[])
{
    Dice *dadish = new Dice("White");
    cout << dadish->getColor() << endl;
    dadish->rollDice();
    delete dadish;
    return 0;
}
