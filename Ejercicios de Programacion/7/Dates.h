#include <iostream>
#include <string>
#include <ctime>
using namespace std;

#pragma once
class Dates
{
private:
    int *format;
    string monthFormat;
    int *month;
    int *day;
    int *year; // year no es un apuntador por que por alguna razón, me daba otro valor al momento de imprimir el formato

public:
    Dates(int, int, int);
    ~Dates();
    void getCurrentDate();
    void getDate();
    void changeFormat();
};
