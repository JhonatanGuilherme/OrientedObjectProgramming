#include <iostream>
#include "Pessoa.h"

using namespace std;

ostream &operator << (ostream &out, const Pessoa &p) {
  out << "Nome: " << p.nome;
  return out;
}

string Pessoa::getNome(void) {
  return this->nome;
}

void Pessoa::setNome(string nome) {
  this->nome = nome;
}
