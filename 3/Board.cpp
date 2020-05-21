#include "Board.h"

Board::Board(int boardSize, string name)
{
    nameOfTheGame = &name;
    lengthAndWhith = &boardSize;
    *movementRules = "Move clockwise and you can only go fordward.\nThis is from right to left";
    *occupiedJail = false; // Because jail stars empty
    for (int i = 1,j=0; j < 6; i++,j++)
    {
        dice[j] = i;
    }
}

Board::~Board()
{
    // delete nameOfTheGame;
    // delete lengthAndWhith;
    // delete movementRules;
    // delete occupiedJail;
    // delete dice;
    std::cout << "game deleted" << std::endl;
}

void Board::seeRules()
{
    std::cout << "-----------RULES-----------" << std::endl;
    std::cout << *movementRules + "\n" << std::endl;
}

void Board::rollDices()
{
    int roll = rand() % 6;
    std::cout << roll << std::endl;
    std::cout << "Move " << dice[roll] << " spaces\n" << std::endl;
}

void Board::goToJail()
{
    if (*occupiedJail == false)
    {
        std::cout << "You're sent to jail, skip 2 turns\n" << std::endl;
        *occupiedJail = true;
        return;
    }
    std::cout << "You got lucky!\nThe jail is already full!\n" << std::endl;
}

void Board::getOutOfJail()
{
    std::cout << "Yay! Now you can keep playing!\nENJOY!\n" << std::endl;
    *occupiedJail = false;
}