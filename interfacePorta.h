#ifndef INTERFACEPORTA_H
#define INTERFACEPORTA_H

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class InterfacePorta {
    private:
        string idPorta;
        string idSala;
        int senhaUsuario;

    public:

        InterfacePorta(string idPoprta, string idSala);
        bool abrirPorta(int senhaUsuario);
};

#endif