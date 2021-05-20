#include <iostream>
#include <string>
#include "Fila.h"
using namespace std;

int main(void) {
  Fila <int> queueInteger(2);
  try {
    queueInteger.enfileirar(1);
    queueInteger.enfileirar(2);
    queueInteger.enfileirar(3);
    queueInteger.enfileirar(3);
    queueInteger.enfileirar(3);
  } catch (out_of_range &e) {
    cout << e.what() << endl;
  }

  Fila <float> queueFloat;
  try {
    queueFloat.desenfileirar();
  } catch (out_of_range &e) {
    cout << e.what() << endl;
  }

  return 0;
}
