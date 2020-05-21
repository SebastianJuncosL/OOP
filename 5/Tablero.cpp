#include "Tablero.h"

Tablero::Tablero(string localName, string visitantsName)
{
    localScore = new int(0);
    localTeamName = &localName;
    visitantsScore = new int(0);
    visitantTeamName = &visitantsName;
}

Tablero::~Tablero()
{
    delete localScore;
    delete visitantsScore;
}

void Tablero::resetScores()
{
    *localScore = 0;
    *visitantsScore = 0;
    std::cout << "The scores have been reseted" << std::endl;
}
void Tablero::scoreForLocal()
{
    *localScore += 3;
    std::cout << "And the " << *localTeamName << " score 3 points!" << std::endl;
    std::cout << "The score now is:\n"
              << *localTeamName << ":   " << *localScore << std::endl;
    std::cout << *visitantTeamName << ":   " << *visitantsScore << std::endl;
}

void Tablero::scoreForVisitants()
{
    *visitantsScore += 3;
    std::cout << "And the " << *visitantTeamName << " score 3 points!" << std::endl;
    std::cout << "The score now is:\n"
              << *localTeamName << ":   " << *localScore << std::endl;
    std::cout << *visitantTeamName << ":   " << *visitantsScore << std::endl;
}