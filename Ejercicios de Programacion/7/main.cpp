#include "Dates.h"

int main()
{
    Dates *juncosBDay = new Dates(26, 12, 1999);
    juncosBDay->changeFormat();
    juncosBDay->getDate();
    juncosBDay->changeFormat();
    juncosBDay->getDate();
    juncosBDay->getCurrentDate();
    delete juncosBDay;
    return 0;
}