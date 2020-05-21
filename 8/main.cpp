#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    Persona sara1();
    Persona *sara = new Persona();
    Persona *lety = new Persona("Leticia", 28, sara);
    Persona *lau = new Persona("Laura", 53, lety);
    Persona *sol = new Persona("Soledad", 34, lau);
    Persona *cam = new Persona("Camila", 18, sol);
    // cout<<cam->getMother()<<endl;
    // lety->getNumOfAntecessors();
    //cam->getAntecessor();
    //cam->getOldestAntecessor();
    cam->getYoungestAntecessor();
    sara->getOldestAntecessor();
    delete cam;
    // delete sol;
    // delete lau;
    // delete lety;
    // delete sara;
    return 0;
}
