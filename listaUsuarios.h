#ifndef LISTADEUSUARIOS_H
#define LISTADEUSUARIOS_H

#include <iostream>
#include <vector>
#include <cstring>
#include "usuario.h"

using namespace std;

class ListaUsuarios {

    private:
        vector <Usuario *> listaIdUsuarios;
    public:
        void addUsuario(Usuario *usuario);
        bool delusuario(string id);
        string getUsuario(int senha);
        void getListaIdUsuarios();
};

#endif