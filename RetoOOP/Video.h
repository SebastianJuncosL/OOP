#include <string>
#include <iostream>
using namespace std;

#pragma once
class Video
{
protected:
    int *id;
    string *nombre;
    float *duracion;
    string *genero;
    int *rating;

public:
    Video(int, string, float, string, int);
    ~Video();
    virtual void showInfo() = 0;
};
