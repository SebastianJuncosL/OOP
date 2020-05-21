#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

#pragma once
class Board
{
private:
    string *nameOfTheGame;
    int *lengthAndWhith;
    string *movementRules = new string;
    bool *occupiedJail = new bool; //if jai is occupied, ocuppiedJail== true
    int *dice = new int[6];

public:
    Board(int, string);
    ~Board();
    void seeRules();
    void rollDices();
    void goToJail();
    void getOutOfJail();
};