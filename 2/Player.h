#include <iostream>
#include <string>
#include <cstdlib>
#pragma once
using namespace std;
class Player
{
private:
    string *name;
    int lives;
    bool *extraLife;

public:
    Player(string);
    ~Player();
    void walk();
    void attack();
    void block();
    void escape();
    void searchLife();
    void useExtraLife();
};

Player::Player(string name)
{
    lives = 3;
    this->name = &name;
    extraLife = new bool;
}

Player::~Player()
{
    delete extraLife;
}

void Player::walk()
{
    std::cout << "You now go fordward\n"
              << std::endl;
}

void Player::attack()
{
    std::cout << *name << "You're in the middle of a fight" << std::endl;
    int luck = rand();
    if (luck % 2 == 0)
    {
        std::cout << "Your attack hits!" << std::endl;
        std::cout << "You have defeated the enemy" << std::endl;
        std::cout << "You now go fordward\n"
                  << std::endl;
        return;
    }
    std::cout << "You miss!" << std::endl;
    return;
}

void Player::block()
{
    int luck = rand(), enemyluck = rand();
    bool block;
    std::cout << *name << "You're in the middle of a fight" << std::endl;
    std::cout << "You try to block!" << std::endl;
    if (luck % 2 == 0)
    {
        block = true;
    }
    else
        std::cout << "You miss your block!" << std::endl;
    if (enemyluck % 2 == 0)
    {
        std::cout << "The enemy throws a punch!" << std::endl;
        if (block == true)
        {
            std::cout << "But you block it!" << std::endl;
            return;
        }
        else
        {
            lives--;
            std::cout << "And it hits you!" << std::endl;
            std::cout << "You now have " << lives << " remaining" << std::endl;
            return;
        }
    }
    return;
}

void Player::escape()
{
    std::cout << "You run away from the enemy" << std::endl;
}

void Player::searchLife()
{
    int heartLuck = rand();
    std::cout << "You look around for an extra heart" << std::endl;
    if(heartLuck % 2 == 0)
    {
        std::cout << "You've found one!" << std::endl;
        *extraLife = true;
        return;
    }
    *extraLife = false;
    return;
}

void Player::useExtraLife()
{
    if (*extraLife == true)
    {
        std::cout << "You use your extra life" << std::endl;
        lives++;
        std::cout << "You now have"<< lives<< "lives" << std::endl;
    }
    else
    {
        std::cout << "You don't have any extra lives" << std::endl;
    }
}