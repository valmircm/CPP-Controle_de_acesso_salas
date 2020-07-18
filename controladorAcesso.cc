#include <iostream>
#include <cstring>
#include "controladorAcesso.h"
#include "mapFile.h"

ControladorAcesso::ControladorAcesso() {

    //MapFile *pMapFile = new MapFile("salas.txt");
    //pMapFile->print_lista_map();
    
    listaSalas1->addSala(new Sala("Redes1"));
    listaSalas1->addSala(new Sala("Redes2"));
    listaSalas1->addSala(new Sala("CAD1"));
    listaSalas1->addSala(new Sala("Sala11"));

    listaUsuarios1->addUsuario(new Usuario("Marcio", 909090));
    listaUsuarios1->addUsuario(new Usuario("João", 808080));
    listaUsuarios1->addUsuario(new Usuario("Fernando", 707070));
    listaUsuarios1->addUsuario(new Usuario("Maria", 606060));

    //Porta *porta1 = new Porta("Porta1-Redes1", "Fechada");
    //Porta *porta2 = new Porta("Porta1-Redes2", "Fechada");
    //Porta *porta3 = new Porta("Porta1-CAD1", "Fechada");
    //Porta *porta4 = new Porta("Porta1-Sala11", "Fechada");

    listaSalas1->addAcessoSala("Redes1", "Marcio");
    listaSalas1->addAcessoSala("Redes1", "João");

    listaSalas1->addAcessoSala("Redes2", "Marcio");
    listaSalas1->addAcessoSala("Redes2", "Fernando");

    listaSalas1->addAcessoSala("CAD1", "Marcio");
    listaSalas1->addAcessoSala("CAD1", "Maria");

    listaSalas1->addAcessoSala("Sala11", "Marcio");
    
 }

bool ControladorAcesso::abrirPorta(string idSala, string idPorta, int senhaUsuario){
    bool flag = listaSalas1->getSalaPorta(idPorta, idSala);

    if (flag) {
        
        cout << ">>>>>>>>> SALA: " << idSala << ".........ENCONTRADA NA LISTA." << "\n";
        string flag_idUsuario = listaUsuarios1->getUsuario(senhaUsuario);

        if (flag_idUsuario == "0") {
            cout << ">>>>>>>>> SENHA: " << senhaUsuario << ".........NÂO ENCONTRADA NA LISTA." << "\n";
            return false;
        } else {
            cout << ">>>>>>>>> SENHA: " << senhaUsuario << ".........ENCONTRADA NA LISTA." << "\n";
            if (testarAcesso(idSala, flag_idUsuario)) {
                cout << ">>>>>>>>> USUÀRIO: " << flag_idUsuario << "..........COM ACESSO À SALA: " << idSala << "\n";
                return true;
            } else {
                cout << ">>>>>>>>> USUÀRIO: " << flag_idUsuario << "..........SEM ACESSO À SALA: " << idSala << "\n";
                return false;
            }
        }
    } else {
        cout << ">>>>>>>>> SALA: " << idSala << ".........NÂO ENCONTRADA NA LISTA." << "\n";
        return false;
    }
}

bool ControladorAcesso::testarAcesso(string idSala, string idUsuario){
    if (listaSalas1->testarAcesso(idSala, idUsuario)) {
        return true;
    } else {
        return false;
    }
}

bool ControladorAcesso::addUsuario(string idUsuario, int senhaUsuario) {
    listaUsuarios1->addUsuario(new Usuario(idUsuario, senhaUsuario));
    cout << ">>>>>>>>> USUÀRIO: " << idUsuario << ".........SENHA: " << senhaUsuario << "..........CRIADO.\n";
    return true;
}

bool ControladorAcesso::fecharPorta(string id){
    
}