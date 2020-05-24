#include "Taxes.h"
Taxes::Taxes(float percent)
{
    this->percent = &percent;
}

void Taxes::calcularImpuesto(int sueldo)
{
    float taxToPay = sueldo * *percent;
    std::cout << "You give "<< *percent * 100<<"% to the government, that is $"<< taxToPay<< "\n" << std::endl;
}