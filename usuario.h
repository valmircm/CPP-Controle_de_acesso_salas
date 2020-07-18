#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <cstring>

using namespace std;

class Usuario {

    private:
        string idUsuario;
        int senhaUsuario;
    public:
        Usuario(string id, int senha);
        string getIdUsuario();
        int getSenhaUsuario();
        int trocaSenha(int senha);
};

#endif