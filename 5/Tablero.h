#include <string>
#include <iostream>
using namespace std;

#pragma once
class Tablero
{
private:
    int *localScore;
    string *localTeamName;
    int *visitantsScore;
    string *visitantTeamName;

public:
    Tablero(string, string);
    ~Tablero();
    void resetScores();
    void scoreForLocal();
    void scoreForVisitants();
};