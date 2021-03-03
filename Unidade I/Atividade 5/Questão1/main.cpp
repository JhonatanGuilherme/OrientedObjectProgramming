#include "Carro.cpp" // Modifiquei para .cpp, pois com .h estava dando erro.

int main() {
  
  Carro carroTeste1("", 2000);

  carroTeste1.displayMessage();

  Carro carroTeste2("Uma marca bem grande", 2005);
  carroTeste2.displayMessage();

  return 0;
}
