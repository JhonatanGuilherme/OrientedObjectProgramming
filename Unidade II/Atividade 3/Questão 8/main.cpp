#include <iostream>
#include "HugeInteger.cpp"

using namespace std;

int main(void) {
  string number ("123456789");
  HugeInteger objA (number);

  cout << objA;

  HugeInteger objB (number);

  objA += objB;

  cout << objA;

  if (objA == objB)
    cout << "Sao iguais" << endl;
  else
    cout << "Sao diferentes" << endl;

  objA = objB;

  cout << objA;

  return 0;
}
