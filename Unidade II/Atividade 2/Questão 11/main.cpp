#include <iostream>
#include "IntegerSet.cpp"

using namespace std;

int main(void) {
  IntegerSet i ({1, 2, 5}, 3);

  i.print();
  i.insertElement(7);
  i.deleteElement(5);
  i.print();

  IntegerSet i2 = unionOfSets(IntegerSet({18, 29, 35}, 3), IntegerSet({22, 49, 50}, 3));
  i2.print();

  IntegerSet i3 = intersectionOfSets(IntegerSet({15, 49, 35}, 3), IntegerSet({15, 49, 50}, 3));
  i3.print();

  return 0;
}
