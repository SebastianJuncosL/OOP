#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;
class Videojuego
{
private:
    string name;
    string rating;
    string genre;
    bool playing;
    int lifes = 3;

public:
    Videojuego();
    Videojuego(string, string, string);
    void getInfo();
    void playGame();
    bool moveFordward();
    void attack();
    void defend();
    void encounter();
};
