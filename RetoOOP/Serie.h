#include "Capitulo.h"
#include <vector>
#include <string>
#include <iostream>
#include "Admin.h"
using namespace std;

class Serie
{
private:
    vector<Capitulo *> serie;
    string nombre;
    void agregarCapitulo(int, int, int, int, string, string, float);
    void quitarCapitulo(string*);
    friend class Admin;

public:
    Serie(string);
    ~Serie();
    void showCapitulos();
    void buscarCapitulo();
    void porNombre();
    void porTemporada();
};