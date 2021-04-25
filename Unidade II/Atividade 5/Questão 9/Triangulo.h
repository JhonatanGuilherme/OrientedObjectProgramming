#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>
#include "FormaBidimensional.h"
using namespace std;

class Triangulo : public FormaBidimensional {
  public:
    Triangulo(float base, float altura) : FormaBidimensional(3), base(base), altura(altura) {}
    virtual float calcularArea(void);
    virtual float calcularPerimetro(void);
    virtual void desenhar(void) {
      cout << "  .   " << endl;
      cout << " / \\ " << endl;
      cout << "/   \\" << endl;
      cout << "~~~~~ " << endl;
    }
  private:
    float base, altura;
};

float Triangulo::calcularArea(void) {
  return (base * altura) / 2;
}

float Triangulo::calcularPerimetro(void) {
  return base * 3;
}

#endif //TRIANGULO_H