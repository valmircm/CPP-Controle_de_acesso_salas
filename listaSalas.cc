#include <iostream>
#include <cstring>
#include "listaSalas.h"

void ListaSalas::addSala(Sala *sala){
    
    listaSalas.push_back(sala);
    cout << ">>>>>>>>> SALA: " << sala->getIdSala() << ".........ADICIONADA À LISTA." << "\n";
}

bool ListaSalas::delSala(string id){

}
void ListaSalas::getDadosSala(string id){

}
void ListaSalas::getListaIdSala(){
    
}

bool ListaSalas::getSalaPorta(string idPorta, string idSala){

    for (int i=0;i<listaSalas.size();i++){
        if (idSala == listaSalas[i]->getIdSala()) {
            return true;
            break;
        }
    }
    return false;
}

void ListaSalas::addAcessoSala(string idSala, string idUsuario) {

    listaSalasUsuarios.insert(pair <string, string> (idSala, idUsuario));
    cout << ">>>>>>>>> ACESSO CADASTRADO..........USUÀRIO: " << idUsuario << ".......SALA: " << idSala << "\n";
}

bool ListaSalas::testarAcesso(string idSala, string idUsuario) {

    multimap <string, string> :: iterator itr; //Declaração do iterator (uma espécie de ponteiro para o container
    for (itr = listaSalasUsuarios.find(idSala); itr != listaSalasUsuarios.end(); itr++) {
        if (itr->second == idUsuario) {
            return true;
        }
    }
    return false;
}