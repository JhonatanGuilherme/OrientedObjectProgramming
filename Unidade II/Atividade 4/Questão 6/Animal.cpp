#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal(void) {
  this->setNome("Sem nome");
  this->raca = "Sem raca";
}

Animal::Animal(string nome) {
  this->setNome(nome);
  this->raca = "Sem raca";
}

inline string Animal::getNome(void) {
  return this->nome;
}

inline void Animal::setNome(string nome) {
  this->nome = nome;
}

inline string Animal::getRaca(void) {
  return this->raca;
}

inline void Animal::setRaca(string raca) {
  this->raca = raca;
}

inline string Animal::caminha(void) {
  return this->nome + " esta caminhando.";
}
