#include <iostream>
int main(int argc, char const *argv[])
{
    int tablero[5][6];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            tablero[i][j] = j + 1;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << tablero[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
