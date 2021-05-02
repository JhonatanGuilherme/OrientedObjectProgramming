#include <iostream>
#include <string>
#include "Fila.h"
using namespace std;

int main(void) {
  Fila <int> queueInteger(5);
  Fila <float> queueFloat(5);
  Fila <string> queueString(5);

  cin >> queueInteger;
  cout << queueInteger;

  cin >> queueFloat;
  cout << queueFloat;
  
  cin >> queueString;
  cout << queueString;

  if (queueInteger.estaCheia())
    cout << "Fila de inteiros esta cheia." << endl;
  
  queueInteger.desenfileirar();

  queueFloat.desenfileirar();

  queueString.desenfileirar();

  cout << queueFloat.primeiroElemento() << endl;

  return 0;
}
