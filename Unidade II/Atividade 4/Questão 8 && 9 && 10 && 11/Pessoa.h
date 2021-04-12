#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using namespace std;

class Pessoa {
  private:
    friend ostream &operator << (ostream &out, const Pessoa &p);
  protected:
    string nome;
  public:
    string getNome(void);
    void setNome(string nome);
};

#endif //PESSOA_H