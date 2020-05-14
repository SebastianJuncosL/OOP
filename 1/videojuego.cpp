#include "Videojuego.h"
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;
Videojuego::Videojuego(string name, string rating, string genre)
{
    this->name = &name;
    this->rating = &rating;
    this->genre = &genre;
}

Videojuego::~Videojuego()
{
    delete lifes;
}

void Videojuego::getInfo()
{
    std::cout << "Name:" << name << std::endl;
    std::cout << "Genre:" << genre << std::endl;
    std::cout << "Rating:" << rating << std::endl;
}

void Videojuego::playGame()
{
    string answer;
    std::cout << "Do you want to play the game?" << std::endl;
    cin >> answer;
    if (answer == "yes" || answer == "y" || answer == "si")
    {
        *playing = true;
        while (*playing == true)
        {
            *playing = moveFordward();
        }
    }
    std::cout << "Thanks for playing!" << std::endl;
}

bool Videojuego::moveFordward()
{
    int luck;
    string option;
    std::cout << "Move fordward?" << std::endl;
    cin >> option;
    if (option == "yes" || option == "y" || option == "si")
    {
        luck = rand();
        if (luck % 2 == 0)
        {
            std::cout << "The path is clear" << std::endl;
            return true;
        }
        encounter();
        return true;
    }
    std::cout << "Do you want to keep playing?" << std::endl;
    cin >> option;
    if (option == "yes" || option == "y" || option == "si")
    {
        return true;
    }
    return false;
}

void Videojuego::encounter()
{
    int choice;
    std::cout << "YOU'VE ENCOUNTERED AN ENEMY!\nWhat do you want to do?" << std::endl;
    std::cout << "Choose an option with the number\n1.\tAttack\n2.\tDefend" << std::endl;
    cin >> choice;
    if (choice == 1)
    {
        attack();
        return;
    }
    defend();
    return;
}

void Videojuego::attack()
{
    int choice;
    int luck = rand();
    int enemyAttack = rand();
    if (luck % 2 == 0)
    {
        std::cout << "Your attack hits!" << std::endl;
        std::cout << "You have defeated the enemy" << std::endl;
        return;
    }
    else
        cout << "you missed!" << endl;
    if (enemyAttack % 2 == 0)
    {
        std::cout << "The enemy hits you!" << std::endl;
        lifes--;
        std::cout << "You have " << lifes << " hits remaining" << std::endl;
    }
    else
        std::cout << "The enemy attacks, but misses" << std::endl;
    std::cout << "What do you want to do?" << std::endl;
    std::cout << "Choose an option with the number\n1.\tAttack\n2.\tDefend" << std::endl;
    cin >> choice;
    if (choice == 1)
    {
        attack();
        return;
    }
    defend();
    return;
}

void Videojuego::defend()
{
    int choice;
    int luck = rand();
    int enemyAttack = rand();
    if (enemyAttack % 2 == 0)
    {
        std::cout << "The enemy attacked, but you blocked it!\nYou go back to fighting position" << std::endl;
    }
    else
    {
        std::cout << "The enemy missed\nYou go back to fighting position" << std::endl;
    }

    std::cout << "What do you want to do?" << std::endl;
    std::cout << "Choose an option with the number\n1.\tAttack\n2.\tDefend" << std::endl;
    cin >> choice;
    if (choice == 1)
    {
        attack();
        return;
    }
    defend();
    return;
}