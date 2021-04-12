#include <iostream>
#include "Imovel.cpp"
#include "ImovelNovo.cpp"
#include "ImovelVelho.cpp"

using namespace std;

int main(void) {
  Imovel i;
  ImovelNovo in;
  ImovelVelho iv;

  i.setPreco(5.80);
  cout << i.getPreco() << endl;

  in.setPreco(6.90);
  in.setAdicional(2.00);

  cout << in.getPreco() << endl;

  iv.setPreco(4.50);
  iv.setDesconto(1.73);

  cout << iv.getPreco() << endl;

  return 0;
}
