#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
    Persona *mama;

public:
    Persona();
    Persona(string, int);
    Persona(string, int, Persona *);
    ~Persona();
    string getName();
    int getAge();
    string getMother();
    void getNumOfAntecessors();
    void getAntecessor();
    void getOldestAntecessor();
    void getYoungestAntecessor();
};