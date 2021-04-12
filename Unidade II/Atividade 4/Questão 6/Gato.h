#ifndef GATO_H
#define GATO_H

#include <iostream>
#include "Animal.h"
using namespace std;

class Gato : public Animal {
  public:
    Gato(void);
    Gato(string nome);
    string mia(void);
};

#endif //GATO_H