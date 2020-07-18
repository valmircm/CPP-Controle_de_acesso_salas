#ifndef SALA_H
#define SALA_H

#include <iostream>
#include <vector>
#include <cstring>
#include "usuario.h"
#include "porta.h"
 
using namespace std;

class Sala {

    private:
        string idSala;
        vector <Porta *> listaPortas;
    public:
        Sala(string id);
        string getIdSala();
        void getListaDePortas();
        bool getIdPorta(string idPorta);
};

#endif