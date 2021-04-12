#include <iostream>
#include "ImovelVelho.h"

inline float ImovelVelho::getPreco(void) {
  return Imovel::getPreco() - this->getDesconto();
}

inline float ImovelVelho::getDesconto(void) {
  return this->desconto;
}

inline void ImovelVelho::setDesconto(float desconto) {
  this->desconto = desconto < 0 ? 0 : desconto;
}
