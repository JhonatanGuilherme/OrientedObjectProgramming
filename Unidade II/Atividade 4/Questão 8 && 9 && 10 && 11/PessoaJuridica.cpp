#include <iostream>
#include "PessoaJuridica.h"

using namespace std;

string PessoaJuridica::getCNPJ(void) {
  return this->CNPJ;
}

void PessoaJuridica::setCNPJ(string CNPJ) {
  this->CNPJ = CNPJ;
}

string PessoaJuridica::getRazaoSocial(void) {
  return this->razaoSocial;
}

void PessoaJuridica::setRazaoSocial(string razaoSocial) {
  this->razaoSocial = razaoSocial;
}
