#include <iostream>
#include "Retangulo.cpp"

using namespace std;

int main(void) {
  Retangulo r (5, 5);

  cout << r.getAltura() << endl;
  cout << r.getLargura() << endl;

  cout << r.perimetro() << endl;
  cout << r.area() << endl;

  return 0;
}
