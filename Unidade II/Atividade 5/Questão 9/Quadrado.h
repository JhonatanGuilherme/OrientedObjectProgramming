#ifndef QUADRADO_H
#define QUADRADO_H

#include <iostream>
#include "FormaBidimensional.h"
using namespace std;

class Quadrado : public FormaBidimensional {
  public:
    Quadrado(float lado) : FormaBidimensional(4), lado(lado) {}
    virtual float calcularArea(void);
    virtual float calcularPerimetro(void);
    virtual void desenhar(void) {
      cout << "-----" << endl;
      cout << "|   |" << endl;
      cout << "-----" << endl;
    }
  private:
    float lado;
};

float Quadrado::calcularArea(void) {
  return lado * lado;
}

float Quadrado::calcularPerimetro(void) {
  return lado * 4;
}

#endif //QUADRADO_H