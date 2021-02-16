#include <iostream>

using namespace std;

int main() {
  int inteiro;
  double d;
  d = inteiro = 3.5; // d = 3, inteiro = 3;
  inteiro = d = 3.5; // d = 3.5, inteiro = 3;

  return 0;
}
