#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include <math.h>
#include "FormaBidimensional.h"
using namespace std;

class Circulo : public FormaBidimensional {
  public:
    Circulo(float raio) : FormaBidimensional(99999), raio(raio) {}
    virtual float calcularArea(void);
    virtual float calcularPerimetro(void);
    virtual void desenhar(void) {
      cout << "  _ " << endl;
      cout << "/   \\" << endl;
      cout << "\\   /" << endl;
      cout << "  ~ " << endl;
    }
  private:
    float raio;
};

float Circulo::calcularArea(void) {
  return raio * raio * 3.14159;
}

float Circulo::calcularPerimetro(void) {
  return 2 * 3.14159 * raio;
}

#endif //CIRCULO_H