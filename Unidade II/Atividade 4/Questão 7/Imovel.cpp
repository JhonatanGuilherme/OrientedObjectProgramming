#include <iostream>
#include "Imovel.h"

using namespace std;

inline float Imovel::getPreco(void) {
  return this->preco;
}

inline void Imovel::setPreco(float preco) {
  this->preco = preco < 0 ? 0 : preco;
}

inline string Imovel::getEndereco(void) {
  return this->endereco;
}

inline void Imovel::setEndereco(string endereco) {
  this->endereco = endereco;
}
