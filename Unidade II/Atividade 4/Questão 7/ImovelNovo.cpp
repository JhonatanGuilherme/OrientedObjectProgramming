#include <iostream>
#include "ImovelNovo.h"

inline float ImovelNovo::getPreco(void) {
  return Imovel::getPreco() + this->getAdicional();
}

inline float ImovelNovo::getAdicional(void) {
  return this->adicional;
}

inline void ImovelNovo::setAdicional(float adicional) {
  this->adicional = adicional < 0 ? 0 : adicional;
}
