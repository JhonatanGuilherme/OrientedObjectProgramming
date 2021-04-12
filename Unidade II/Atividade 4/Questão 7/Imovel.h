#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
using namespace std;

class Imovel {
  private:
    float preco;
    string endereco;
  public:
    float getPreco(void);
    void setPreco(float preco);
    string getEndereco(void);
    void setEndereco(string endereco);
};

#endif //IMOVEL_H