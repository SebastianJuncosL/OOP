#include <iostream>
#include <string>
#pragma once
using namespace std;
class Player
{
private:
    string name;
    int lives = 3;
    bool extraLife = false;
    
public:
    Player(/* args */);
    ~Player();
};

Player::Player(/* args */)
{
}

Player::~Player()
{
}
