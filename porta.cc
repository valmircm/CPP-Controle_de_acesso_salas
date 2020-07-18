#include <iostream>
#include <cstring>
#include "porta.h"


Porta::Porta(string id, string estado){
    this->idPorta = id; 
    this->estadoPorta = estado;
    cout << ">>>>>>>>> PORTA: " << this->idPorta << ".........CRIADA" << ".\n";
}
        
string Porta::getIdPorta() {
    return idPorta;
}

string Porta::getEstadoPorta(){
    return estadoPorta;
}