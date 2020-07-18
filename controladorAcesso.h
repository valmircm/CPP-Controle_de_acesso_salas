#ifndef CONTROLADORACESSO_H
#define CONTROLADORACESSO_H

#include <iostream>
#include <vector>
#include <cstring>
#include "listaSalas.h"
#include "interfacePorta.h"
#include "listaSalas.h"
#include "listaUsuarios.h"
#include "sala.h"

using namespace std;

class ControladorAcesso {

    private:
        ListaSalas *listaSalas1 = new ListaSalas();
        ListaUsuarios *listaUsuarios1 = new ListaUsuarios();
    public:
        ControladorAcesso();
        bool abrirPorta(string id, string portId, int senha);
        bool fecharPorta(string id);
        bool testarAcesso(string idUsuario, string idSala);
        bool addUsuario(string idUsuario, int senhaUsuario);
};

extern ControladorAcesso controlador;
#endif