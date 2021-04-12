#include <iostream>
#include "Cliente.h"

using namespace std;

ostream &operator << (ostream &out, Cliente &c) {
  out << "Nome....: " << c.getNome() << endl;
  out << "CPF.....: " << c.getCPF() << endl;
  out << "Telefone: " << c.getTelefone() << endl;
  out << "Endereco: " << c.getEndereco() << endl;

  return out;
}

string Cliente::getTelefone(void) {
  return this->telefone;
}

void Cliente::setTelefone(string telefone) {
  this->telefone = telefone;
}

string Cliente::getEndereco(void) {
  return this->endereco;
}

void Cliente::setEndereco(string endereco) {
  this->endereco = endereco;
}
