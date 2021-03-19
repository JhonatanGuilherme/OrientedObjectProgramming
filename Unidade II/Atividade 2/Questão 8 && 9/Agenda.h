#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>

using namespace std;

class Agenda {
  private:
    Pessoa pessoas[10];
  public:
    unsigned int contador = 0;
    void armazenaPessoa(string nome, int idade, float altura);
    void armazenaPessoa(const Pessoa &p);
    void removePessoa(string nome);
    int buscaPessoa(string nome) const;
    void imprimePessoa(int i) const;
    void imprimePovo(void) const;
};

#endif //AGENDA_H