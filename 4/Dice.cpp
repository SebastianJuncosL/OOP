#include "Dice.h"

Dice::Dice(string color)
{
    caras = new int[6];
    for (int i = 1,j=0; j < 6; i++,j++)
    {
        caras[j] = i;
    }
    
    this->color = &color;
}

Dice::~Dice()
{
    delete caras;
    std::cout << "Dice deleted" << std::endl;
}

void Dice::rollDice()
{
    srand(time(0));
    int roll = rand() % 6;
    std::cout << caras[roll] << std::endl;
}

string Dice::getColor()
{
    return *color;
}
