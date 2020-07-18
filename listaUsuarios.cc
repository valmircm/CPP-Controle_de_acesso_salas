#include <iostream>
#include <cstring>
#include "listaUsuarios.h"

void ListaUsuarios::addUsuario(Usuario *usuario) {

    this->listaIdUsuarios.push_back(usuario);
    cout << ">>>>>>>>> USUÀRIO: " << usuario->getIdUsuario() << ".........ADICIONADO À LISTA." << "\n";
}

bool ListaUsuarios::delusuario(string id) {

    return true;
}

string ListaUsuarios::getUsuario(int senha){

    for (int i=0;i<this->listaIdUsuarios.size();i++){
        if (senha == this->listaIdUsuarios[i]->getSenhaUsuario()) {
            string flag_idUsuario = this->listaIdUsuarios[i]->getIdUsuario();
            return flag_idUsuario;
            break;
        }
    }
    return "0";
}

void ListaUsuarios::getListaIdUsuarios() {

}