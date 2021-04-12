#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include <iostream>
#include "Pessoa.h"
using namespace std;

class PessoaJuridica : public Pessoa {
  private:
    string CNPJ, razaoSocial;
  public:
    string getCNPJ(void);
    void setCNPJ(string CNPJ);
    string getRazaoSocial(void);
    void setRazaoSocial(string razaoSocial);
};

#endif //PESSOAJURIDICA_H