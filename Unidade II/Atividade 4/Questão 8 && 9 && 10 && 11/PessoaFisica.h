#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include <iostream>
#include "Pessoa.h"
using namespace std;


class PessoaFisica : public Pessoa {
  private:
    string CPF;
  public:
    string getCPF(void);
    void setCPF(string CPF);
};

#endif //PESSOAFISICA_H