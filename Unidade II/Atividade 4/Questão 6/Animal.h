#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
  private:
    string nome, raca;
  public:
    Animal(void);
    Animal(string nome);
    string getNome(void);
    void setNome(string nome);
    string getRaca(void);
    void setRaca(string raca);
    string caminha(void);
};

#endif //ANIMAL_H