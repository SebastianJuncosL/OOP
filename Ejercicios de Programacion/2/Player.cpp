#include "Player.h"
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
    std::cout << *name << " goes fordward\n"
              << std::endl;
}

void Player::attack()
{
    std::cout << *name << " is in the middle of a fight!" << std::endl;
    int luck = rand();
    std::cout << *name << " throws an attack!" << std::endl;
    if (luck % 2 == 0)
    {
        std::cout << "And hits!" << std::endl;
        std::cout << *name << " now goes fordward\n"
                  << std::endl;
        return;
    }
    std::cout << *name << " missed!" << std::endl;
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
    std::cout << *name << " is in the middle of a fight" << std::endl;
    std::cout << *name << " ran away from the enemy" << std::endl;
}

void Player::searchLife()
{
    int heartLuck = rand();
    std::cout << *name << " looks around for an extra heart" << std::endl;
    if (heartLuck % 2 == 0)
    {
        std::cout  << "And found one!" << std::endl;
        if (*extraLife == true)
        {
            std::cout << "But already had one, so they leave it and keep going" << std::endl;
            return;
        }

        *extraLife = true;
        return;
    }
    std::cout << "But found none" << std::endl;
    *extraLife = false;
    return;
}

void Player::useExtraLife()
{
    if (*extraLife == true)
    {
        std::cout << *name << " uses an extra life" << std::endl;
        lives++;
        std::cout << *name << " now has" << lives << "lives" << std::endl;
    }
    else
    {
        std::cout << *name  << " doesn't have any extra lives!" << std::endl;
    }
}