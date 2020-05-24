#include <string>
#include <iostream>
#include <time.h> 

using namespace std;

#pragma once
class Dice
{
private:
    int *caras;
    string *color;

public:
    Dice(string);
    ~Dice();
    void rollDice();
    string getColor();
};
