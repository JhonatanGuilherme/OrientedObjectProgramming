#include <iostream>
#include "Retangulo.h"

using namespace std;

Retangulo::Retangulo(float altura = 1.0, float largura = 1.0) {
  setAltura(altura);
  setLargura(largura);
}

float Retangulo::getAltura(void) { return this->altura; }

void Retangulo::setAltura(float valor) {
  this->altura = (valor > 0 && valor < 20 ? valor : 1.0);
}

float Retangulo::getLargura(void) { return this->largura; }

void Retangulo::setLargura(float valor) {
  this->largura = (valor > 0 && valor < 20 ? valor : 1.0);
}

float Retangulo::perimetro(void) {
  return (altura * 2 + largura * 2);
}
float Retangulo::area(void) {
  return (altura * largura);
}
