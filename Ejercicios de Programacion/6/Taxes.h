#include <iostream>
using namespace std;

#pragma once
class Taxes
{
private:
    float *percent; // tomando el porcentaje entre 0.0 y 1, 1 siendo igual al 100 porciento
public:
    Taxes(float);
    void calcularImpuesto(int);
};
