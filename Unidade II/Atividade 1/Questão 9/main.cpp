#include <iostream>
#include "HugeInteger.cpp"

using namespace std;

int main(void) {
  HugeInteger h1, h2;
  h1.input("999");
  h1.output();

  h2.input("123");
  h2.output();

  cout << h1.isEqualTo(h2) << endl;
  cout << h1.isNotEqualTo(h2) << endl;
  cout << h1.isGreaterThan(h2) << endl;
  cout << h1.isGraterThanOrEqual(h2) << endl;
  cout << h1.isLessThan(h2) << endl;
  cout << h1.isLessThanOrEqual(h2) << endl;

  h1.add(h2);
  h1.output();
  
  h1.add(h2);
  h1.output();

  return 0;
}
