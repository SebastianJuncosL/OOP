#include <string>
#include <iostream>
using namespace std;
#include "Streaming.h"
#include "Admin.h"

int main(int argc, char const *argv[])
{
    Admin *juncos = new Admin("Admin Juncos");
    Streaming *netflix = new Streaming("Netflix");
    juncos->agregarPelicula(netflix, "Kimi No Na Wa", 1.46, "Romance", 4.9, "Makoto Shinkai");

    juncos->agregarSerie(netflix,"Mirai Nikki", "Drama");
    juncos->agregarCapitulos(netflix,"Mirai Nikki", "Sign Up", 1, .24, 4.6);
    cout << "1";
    juncos->agregarCapitulos(netflix,"Mirai Nikki", "Contract Terms", 2, .24, 4.8);
    cout << "2";
    //juncos->agregarCapitulos(netflix, "Mirai Nikki", "Initial Failure", 3, .24, 4.7);
    // cout << "3";
    // netflix->agregarCapitulos("Mirai Nikki", "Hand-Written", 4, .24, 4.6);
    // cout << "4";
    // netflix->agregarCapitulos("Mirai Nikki", "Voice Message", 5,.24, 4);
    // cout << "5";
    // netflix->agregarCapitulos("Mirai Nikki", "Silent Mode", 6,.24, 4.2);
    // netflix->agregarCapitulos("Mirai Nikki", "Answering Machine", 7, .24, 4.9);
    // netflix->agregarCapitulos("Mirai Nikki", "New Model", 8,.24, 4.7);
    // netflix->agregarCapitulos("Mirai Nikki", "Blocking Calls", 9,.24, 4.4);
    // netflix->agregarCapitulos("Mirai Nikki", "Family Plan", 10, .24, 4.3);
    // netflix->agregarCapitulos("Mirai Nikki", "Service Terminated", 11,.24, 4.5);
    // netflix->agregarCapitulos("Mirai Nikki", "No Service Area", 12,.24, 4.9);
    // netflix->agregarCapitulos("Mirai Nikki", "Number Withheld", 13, .24, 4.2);
    // netflix->agregarCapitulos("Mirai Nikki", "Memory Erased", 14,.24, 4.7);
    // netflix->agregarCapitulos("Mirai Nikki", "Double Holder", 15,.24, 4.8);
    // netflix->agregarCapitulos("Mirai Nikki", "Reapir", 16, .24, 4.6);
    // netflix->agregarCapitulos("Mirai Nikki", "Family Discount", 17,.24, 4);
    // netflix->agregarCapitulos("Mirai Nikki", "Crossed Lines", 18,.24, 4.2);
    // netflix->agregarCapitulos("Mirai Nikki", "Clearing Data", 19, .24, 4.9);
    // netflix->agregarCapitulos("Mirai Nikki", "Transfer Data", 20,.24, 4.7);
    // netflix->agregarCapitulos("Mirai Nikki", "Security Code", 21,.24, 4.4);
    // netflix->agregarCapitulos("Mirai Nikki", "Disconnect", 22, .24, 4.3);
    // netflix->agregarCapitulos("Mirai Nikki", "Unulfilled Contract", 23,.24, 4.5);
    // netflix->agregarCapitulos("Mirai Nikki", "Searching", 24,.24, 4.9);
    // netflix->agregarCapitulos("Mirai Nikki", "Reset", 25,.24, 5);
    // netflix->agregarCapitulos("Mirai Nikki", "Format", 24,.24, 5);

    netflix->getInfoSerie("Mirai Nikki");
    netflix->buscarPorNombre("mirai");
    juncos->borrarSerie(netflix, "Mirai Nikki");
    juncos->borrarPelicula(netflix,"Kimi No Na Wa");
    delete netflix;
    delete juncos;

    return 0;
}
