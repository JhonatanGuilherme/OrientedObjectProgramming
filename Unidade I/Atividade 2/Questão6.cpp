#include <iostream>

using namespace std;

int main() {
  int i = 10;

  const int i2 = i; // i2 - const int;
  const int *const p2 = &i2; // ponteiro constante apontando para i2;

  const int &r = 0; // Não retorna erro, pois 0 é const int;

  return 0;
}
