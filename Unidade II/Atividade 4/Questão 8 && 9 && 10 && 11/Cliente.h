#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include "PessoaFisica.h"
using namespace std;

class Cliente : public PessoaFisica {
  private:
    friend ostream &operator << (ostream &out, Cliente &c);
    string telefone, endereco;
  public:
    string getTelefone(void);
    void setTelefone(string telefone);
    string getEndereco(void);
    void setEndereco(string endereco);
};

#endif //CLIENTE_H