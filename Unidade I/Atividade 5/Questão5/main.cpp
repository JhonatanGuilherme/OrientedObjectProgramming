#include <iostream>
#include "Cupom.cpp"

using namespace std;

int main(void) {
  Cupom c1 ("01", "Torradeira", 5, 48.99);

  cout << c1.getId() << " - " << c1.getDescricao()
  << " - " << c1.getQuantidade() << " - " << c1.getPreco() << endl;

  cout << "Valor total: " << c1.calculaCupom() << endl;

  c1.setId("02");
  c1.setDescricao("Frigideira");
  c1.setQuantidade(c1.getQuantidade() - 1);
  c1.setPreco(-5);

  cout << c1.getId() << " - " << c1.getDescricao()
  << " - " << c1.getQuantidade() << " - " << c1.getPreco() << endl;

  cout << "Valor total: " << c1.calculaCupom() << endl;

  return 0;
}
