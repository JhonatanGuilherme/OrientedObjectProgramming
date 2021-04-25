#ifndef FORMABIDIMENSIONAL_H
#define FORMABIDIMENSIONAL_H 

class FormaBidimensional {
  public:
    FormaBidimensional(int numLados) : numLados(numLados) { }
    virtual float calcularArea(void) = 0;
    virtual float calcularPerimetro(void) = 0;
    virtual void desenhar(void) = 0;
  private:
    int numLados;
};

#endif //FORMABIDIMENSIONAL_h