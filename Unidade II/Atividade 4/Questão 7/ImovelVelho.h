#ifndef IMOVELVELHO_H
#define IMOVELVELHO_H

#include <iostream>
#include "Imovel.h"
using namespace std;

class ImovelVelho : public Imovel {
  private:
    float desconto;
  public:
    float getPreco(void);
    float getDesconto(void);
    void setDesconto(float desconto);
};

#endif //IMOVELVELHO_H