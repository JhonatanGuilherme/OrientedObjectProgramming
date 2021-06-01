#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

using namespace std;

class Pessoa {
  public:
    Pessoa(string nome);
    virtual inline string getID(void) = 0;
    inline string getNome(void);
    inline void setNome(string nome);
  private:
    string nome;
};

Pessoa::Pessoa(string nome) {
  this->setNome(nome);
}

string Pessoa::getNome(void) {
  return this->nome;
}

void Pessoa::setNome(string nome) {
  this->nome = nome;
}

#endif //PESSOA_H