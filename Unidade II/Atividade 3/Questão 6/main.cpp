#include <iostream>
#include "IntegerSet.cpp"

using namespace std;

int main(void) {
  IntegerSet objA;
  int array[] {1, 5, 10};
  IntegerSet objB(array, 3);

  objA << 2;
  objB >> 5;

  objA = objA | objB;
  objB = objA & objB;

  cout << objB;

  return 0;
}