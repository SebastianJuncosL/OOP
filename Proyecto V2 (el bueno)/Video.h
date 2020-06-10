#include <string>
#include <iostream>

using namespace std;
#pragma once

class Video
{
protected:
    string *nombre;
    float *duracion;
    string *genero;
    float *calificacion;

public:
    Video(string, float, string, float);
    ~Video();
};