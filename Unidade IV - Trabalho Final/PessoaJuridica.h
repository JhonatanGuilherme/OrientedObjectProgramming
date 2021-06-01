#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include <iostream>
#include "Pessoa.h"

using namespace std;

class PessoaJuridica : public Pessoa {
  public:
    PessoaJuridica(string nome, string CNPJ, string razaoSocial) : Pessoa(nome), CNPJ(CNPJ), razaoSocial(razaoSocial) { }
    virtual inline string getID(void);
    inline void setCNPJ(string CNPJ);
    inline string getRazaoSocial(void);
    inline void setRazaoSocial(string razaoSocial);
  private:
    string CNPJ, razaoSocial;
};

string PessoaJuridica::getID(void) {
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

#endif //PESSOAJURIDICA_H