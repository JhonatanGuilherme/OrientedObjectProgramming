#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

using namespace std;

class Pessoa {
  private:
    int idade;
    float altura;
    string nome;
  public:
    Pessoa(void);
    Pessoa(string nome, int idade, float altura);
    inline int getIdade(void) const;
    inline float getAltura(void) const;
    inline string getNome(void) const;
    Pessoa &setIdade(int idade);
    Pessoa &setAltura(float altura);
    Pessoa &setNome(string nome);
    void print(void) const;
};

#endif //PESSOA_H