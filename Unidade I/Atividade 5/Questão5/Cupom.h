#ifndef CUPOM_H
#define CUPOM

#include <iostream>

using namespace std;

class Cupom {
  private:
    string id, descricao;
    int quantidade;
    float precoItem;
  public:
    Cupom(string id, string descricao, int quantidade, float preco);
    string getId(void);
    void setId(string id);
    string getDescricao(void);
    void setDescricao(string descricao);
    int getQuantidade(void);
    void setQuantidade(int quantidade);
    float getPreco(void);
    void setPreco(float preco);
    double calculaCupom();
};

#endif