#include <iostream>
#include "PessoaFisica.h"

using namespace std;

string PessoaFisica::getCPF(void) {
  return this->CPF;
}

void PessoaFisica::setCPF(string CPF) {
  this->CPF = CPF;
}
