#include <iostream>
#include <string>
#include "Pilha.h"

using namespace std;

int main(void) {
  Pilha<int> pi(2);
  int popEli;
  try {
    pi.push(10);
    pi.push(11);
    pi.push(12);
  } catch (out_of_range &e) {
    cout << e.what() << endl;
  }

  Pilha<double> pd(2);
  double popEld;
  try {
    pd.pop(popEld);
  } catch (out_of_range &e) {
    cout << e.what() << endl;
  }

  return 0;
}
