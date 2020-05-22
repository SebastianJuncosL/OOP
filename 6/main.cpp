#include "Taxes.h"

int main(int argc, char const *argv[])
{
    Taxes *juncos = new Taxes(.3);
    juncos->calcularImpuesto(30000);
    delete juncos;
    return 0;
}
