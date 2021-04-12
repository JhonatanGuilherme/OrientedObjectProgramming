#include <iostream>
#include "Cachorro.h"

using namespace std;

Cachorro::Cachorro(void) : Animal() {
}

Cachorro::Cachorro(string nome) : Animal(nome) {
}

string Cachorro::late(void) {
  return this->getNome() + " esta latindo.";
}