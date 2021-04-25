#include <iostream>

#include "Quadrado.h"
#include "Circulo.h"
#include "Triangulo.h"

int main(void) {
  FormaBidimensional *formas[] = {new Quadrado(1.5), new Circulo(2.8), new Triangulo(3.4, 1.9)};

  for (int i = 0; i < 3; i++) {
    formas[i]->desenhar();
    cout << formas[i]->calcularArea() << endl;
    cout << formas[i]->calcularPerimetro() << endl;
    delete formas[i];
  }

  return 0;
}
