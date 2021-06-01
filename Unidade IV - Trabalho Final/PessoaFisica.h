#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include <iostream>
#include "Pessoa.h"

using namespace std;

class PessoaFisica : public Pessoa {
  public:
    PessoaFisica(string nome, string CPF) : Pessoa(nome), CPF(CPF) { }
    virtual inline string getID(void);
    inline void setCPF(string CPF);
  private:
    string CPF;
};

string PessoaFisica::getID(void) {
  return this->CPF;
}

void PessoaFisica::setCPF(string CPF) {
  this->CPF = CPF;
}

#endif //PESSAOFISICA_H