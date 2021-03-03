#ifndef CARRO_H
#define CARRO_H

#include <string>
using std::string;

//Interface
class Carro {
  public:
    Carro(string nome, unsigned ano); // c) Modificação no método construtor;
    void setMarca(string nome);
    string getMarca();
    void displayMessage();
    unsigned getAno(); // b) Método get para atributo ano do carro;
    void setAno(unsigned ano); // b) Método set para atributo ano do carro;

  private:
    string marca;
    unsigned ano; // a) Incluir atributo que representa o ano do carro;
};

#endif