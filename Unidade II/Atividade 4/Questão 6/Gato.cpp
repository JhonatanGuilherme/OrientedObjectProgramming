#include <iostream>
#include "Gato.h"

using namespace std;

Gato::Gato(void) : Animal() {
}

Gato::Gato(string nome) : Animal(nome) {
}

string Gato::mia(void) {
  return this->getNome() + " esta miando.";
}
