#ifndef CACHORRO_H
#define CACHORRO_H

#include <iostream>
#include "Animal.h"
using namespace std;

class Cachorro : public Animal {
  public:
    Cachorro(void);
    Cachorro(string nome);
    string late(void);
};

#endif //CACHORRO_H