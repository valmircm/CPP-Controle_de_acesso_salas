#ifndef SALAUSUARIOS_H
#define SALAUSUARIOS_H

#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include "listaUsuarios.h"

using namespace std;

class SalaUsuarios {

    private:
        multimap <string, string> tabSalaUsuarios;
    public:
        SalaUsuarios();
        void printSalasUsuarios();
        bool isInSala(string sala, string nome);

};

#endif