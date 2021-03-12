#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo {
  public:
    Retangulo(float altura, float largura);
    float getAltura(void);
    void setAltura(float valor);
    float getLargura(void);
    void setLargura(float valor);
    
    float perimetro(void);
    float area(void);
  
  private:
    float altura, largura;
};

#endif //RETANGULO_H