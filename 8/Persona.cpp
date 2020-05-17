#include "Persona.h"
#include <iostream>
#include <string>

Persona::Persona()
{
    nombre = "Sara";
    edad = 97;
}

Persona::Persona(string nombre, int edad, Persona *mama)
{
    this->nombre = nombre;
    this->edad = edad;
    this->mama = mama;
}

Persona::~Persona() // Done
{
    delete mama;
    std::cout << "Bye " << nombre << std::endl;
}

string Persona::getName() // Done
{
    return nombre;
}

int Persona::getAge() // Done
{
    return edad;
}

string Persona::getMother() // Done
{
    if (nombre == "Sara")
    {
        return "Sara is the first known woman in the family";
    }
    return mama->getName();
}

void Persona::getNumOfAntecessors() // Done
{
    Persona *current = mama;
    int antecessors = 0;
    if (nombre == "Sara")
    {
        std::cout << "Sara has no antecessors" << std::endl;
        delete current;
        return;
    }
    while(true)
    {
        antecessors++;
        if (current->getName() == "Sara")
        {
            break;
        }
        current = current->mama;
        
    }
    std::cout << nombre << " has " << antecessors << " antecessors" << std::endl;
}

void Persona::getAntecessor() // Done
{
    Persona *current = mama;
    int antecessors = 0;
    if (nombre == "Sara")
    {
        std::cout << "Sara has no antecessors" << std::endl;
        delete current;
        return;
    }
    while(true)
    {
        antecessors++;
        std::cout<< "Antecessor "<< antecessors <<" is "<< current->nombre << std::endl;
        if (current->getName() == "Sara")
        {
            break;
        }
        current = current->mama;
        
    }
}

void Persona::getOldestAntecessor()
{
}

void Persona::getYoungestAntecessor()
{
}