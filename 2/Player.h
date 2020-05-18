#include <iostream>
#include <string>
#include <cstdlib>

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