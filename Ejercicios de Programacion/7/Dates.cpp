#include "Dates.h"

Dates::Dates(int dd, int mm, int yy)
{
    format = new int;
    day = &dd;
    month = &mm;
    year = &yy;
    switch (mm)
    {
    case 1:
        monthFormat = "enero";
        break;
    case 2:
        monthFormat = "febrero";
        break;
    case 3:
        monthFormat = "marzo";
        break;
    case 4:
        monthFormat = "abril";
        break;
    case 5:
        monthFormat = "mayo";
        break;
    case 6:
        monthFormat = "junio";
        break;
    case 7:
        monthFormat = "julio";
        break;
    case 8:
        monthFormat = "agosto";
        break;
    case 9:
        monthFormat = "septiembre";
        break;
    case 10:
        monthFormat = "octubre";
        break;
    case 11:
        monthFormat = "noviembre";
        break;
    case 12:
        monthFormat = "diciembre";
        break;

    default:
        std::cout << "Mes inválido, opcion por defaul:\ndiciembre" << std::endl;
        monthFormat = "diciembre";
        std::cout << "" << std::endl;
        break;
    }
}

Dates::~Dates()
{
    delete format;
}

void Dates::getCurrentDate()
{   
    // no hay variables en los atributos del objeto ya que estas son temporales solo para obtener la fecha actual.
    // Incluso con esta librería me muestra numeros que no tienen nada que ver con la echa actual :(
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string currentMonth;
    switch (ltm->tm_mon +1)
    {
    case 1:
        currentMonth = "enero";
        break;
    case 2:
        currentMonth = "febrero";
        break;
    case 3:
        currentMonth = "marzo";
        break;
    case 4:
        currentMonth = "abril";
        break;
    case 5:
        currentMonth = "mayo";
        break;
    case 6:
        currentMonth = "junio";
        break;
    case 7:
        currentMonth = "julio";
        break;
    case 8:
        currentMonth = "agosto";
        break;
    case 9:
        currentMonth = "septiembre";
        break;
    case 10:
        currentMonth = "octubre";
        break;
    case 11:
        currentMonth = "noviembre";
        break;
    case 12:
        currentMonth = "diciembre";
        break;

    default:
        std::cout << "Mes inválido, opcion por defaul:\ndiciembre" << std::endl;
        currentMonth = "diciembre";
        std::cout << "" << std::endl;
        break;
    }
    string shortV;
    for (int i = 0; i < 3; i++)
    {
        shortV += currentMonth[i];
    }
    switch (*format)
    {
    case 1:
        std::cout << ltm->tm_mday << "-" << shortV << std::endl;
        break;
    case 2:
        std::cout << ltm->tm_mday << "-" << currentMonth << "-" << ltm->tm_year << std::endl;
        break;
    case 3:
        std::cout << ltm->tm_mday << "/" << ltm->tm_mon +1 << "/" << ltm->tm_year << std::endl;
        break;
    case 4:
        std::cout << ltm->tm_mday << "/" << ltm->tm_mon +1 << std::endl;
        break;

    default:
        std::cout << "Opcion invalida, mostrando opcion 1:" << std::endl;
        std::cout << ltm->tm_mday << "-" << shortV << std::endl;
        break;
    }
    std::cout << "" << std::endl;
    //delete ltm;
}

void Dates::getDate()
{
    string shortV;
    for (int i = 0; i < 3; i++)
    {
        shortV += monthFormat[i];
    }
    switch (*format)
    {
    case 1:
        std::cout << *day << "-" << shortV << std::endl;
        break;
    case 2:
        std::cout << *day << "-" << monthFormat << "-" << *year << std::endl;
        break;
    case 3:
        std::cout << *day << "/" << *month << "/" << *year << std::endl;
        break;
    case 4:
        std::cout << *day << "/" << *month << std::endl;
        break;

    default:
        std::cout << "Opcion invalida, mostrando opcion 1:" << std::endl;
        std::cout << *day << "-" << shortV << std::endl;
        break;
    }
    std::cout << "" << std::endl;
}

void Dates::changeFormat()
{
    int option;
    std::cout << "Selecciona un formato:" << std::endl;
    std::cout << "1.\tdd-mmm\n2.\tdd-mmmmm-aaaa\n3.\tdd/mm/aaaa\n4.\tdd/mm" << std::endl;
    cin >> option;
    *format = option;
}