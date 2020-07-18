#include <iostream>
#include <cstring>
#include "salaUsuarios.h"

SalaUsuarios::SalaUsuarios(){

  tabSalaUsuarios.insert(pair <string, string> ("salaCad1", "joaoId"));
  tabSalaUsuarios.insert(pair <string, string> ("salaCad1", "laraId"));
  tabSalaUsuarios.insert(pair <string, string> ("salaRedes", "laraId"));
  tabSalaUsuarios.insert(pair <string, string> ("salaRedes", "mariaId"));
}
 
void SalaUsuarios::printSalasUsuarios(){

  multimap <string, string> :: iterator itr; //Declaração do iterator (uma espécie de ponteiro para o container
  for (itr = tabSalaUsuarios.begin(); itr != tabSalaUsuarios.end(); ++itr) 
  { 
        std::cout  <<  '\t' << itr->first <<  '\t' << itr->second << '\n'; 
  } 
}
 
bool SalaUsuarios::isInSala(string sala, string nome) {
    
  multimap <string, string> :: iterator itr; //Declaração do iterator (uma espécie de ponteiro para o container
  for (itr = tabSalaUsuarios.find(sala); itr != tabSalaUsuarios.end(); itr++) {
     if (itr->second == nome) {
        return true;
     }
  }
  return false;
}