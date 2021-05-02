#include <iostream>
using std::cout, std::endl;
using std::cin;

#include "Array.h"

int main(void) {
  Array<int> a1(7);
  Array<double> a2(5);

  cin >> a1;
  cout << a1;

  Array<double> a3(a2);

  a3[5] = 100.5;

  cout << "a3[5] == " << a3[5] << endl;

  a2 = a3;

  cout << "a2[5] == " << a2[5] << endl;

  a2[100] = 50.9;

  return 0;
}
