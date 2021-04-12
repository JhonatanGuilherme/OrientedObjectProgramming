#ifndef IMOVELNOVO_H
#define IMOVELNOVO_H

#include <iostream>
#include "Imovel.h"
using namespace std;

class ImovelNovo : public Imovel {
  private:
    float adicional;
  public:
    float getPreco(void);
    float getAdicional(void);
    void setAdicional(float adicional);
};

#endif //IMOVELNOVO_H