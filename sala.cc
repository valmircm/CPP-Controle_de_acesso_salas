#include <iostream>
#include <cstring>
#include "sala.h"

Sala::Sala(string id) {
    this->idSala = id;
    cout << ">>>>>>>>> SALA: " << this->idSala << ".........CRIADA" << ".\n";
}

string Sala::getIdSala() {
    return this->idSala;
}

void Sala::getListaDePortas(){}

bool Sala::getIdPorta(string idPorta){
    for (int i=0; listaPortas.size();i++) {
        if (idPorta == listaPortas[i]->getIdPorta()) {
            cout << "ID da porta encontrado......ID: " << idPorta << "\n";
            bool flag = true;
            return flag;
            break;
        }
    }
    cout << "ID da porta não encontrado......ID: " << idPorta << "\n";
}