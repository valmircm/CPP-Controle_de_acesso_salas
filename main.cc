#include <iostream>
#include <vector>
#include <cstring>
#include "interfacePorta.h"
#include "controladorAcesso.h"

using namespace std;

int main(void) {

    InterfacePorta *interface1 = new InterfacePorta("Porta1-Redes1", "Redes1");
    InterfacePorta *interface2 = new InterfacePorta("Porta1-CAD1", "CAD1");
    InterfacePorta *interface3 = new InterfacePorta("Porta1-Sala11", "Sala11");

    if (interface1->abrirPorta(606060)) {
        cout << ">>>>>>>>>.................................................<<<< ACESSO LIBERADO >>>>." << "\n";
    } else {
        cout << ">>>>>>>>>.................................................<<<< ACESSO NEGADO >>>>." << "\n";
    }   

    if (interface2->abrirPorta(606060)) {
        cout << ">>>>>>>>>.................................................<<<< ACESSO LIBERADO >>>>." << "\n";
    } else {
        cout << ">>>>>>>>>.................................................<<<< ACESSO NEGADO >>>>." << "\n";
    }

    if (interface3->abrirPorta(808080)) {
        cout << ">>>>>>>>>.................................................<<<< ACESSO LIBERADO >>>>." << "\n";
    } else {
        cout << ">>>>>>>>>.................................................<<<< ACESSO NEGADO >>>>." << "\n";
    }   
}