#include <iostream>
#include "IntegerSet.h"

using namespace std;

IntegerSet unionOfSets(IntegerSet i1, IntegerSet i2) {
  IntegerSet i3;
  for (int i (0); i < 100; i++) {
    if (i1.array[i] == 1 || i2.array[i] == 1)
      i3.insertElement(i);
  }

  return i3;
}

IntegerSet intersectionOfSets(IntegerSet i1, IntegerSet i2) {
  IntegerSet i3;
  for (int i (0); i < 100; i++) {
    if (i1.array[i] == 1 && i2.array[i] == 1)
      i3.insertElement(i);
  }

  return i3;
}

IntegerSet::IntegerSet(void) {
  for (int i (0); i < 100; i++)
    array[i] = 0;
}

IntegerSet::IntegerSet(const int (&array)[], const int size) {
  for (int i (0); i < size; i++)
    this->array[array[i]] = 1;
}

void IntegerSet::insertElement(unsigned int element) {
  this->array[element] = 1;
}

void IntegerSet::deleteElement(unsigned int element) {
  this->array[element] = 0;
}

void IntegerSet::print(void) const {
  for (int i (0); i < 100; i++) {
    if (this->array[i] == 1)
      cout << i << " ";
  }
  cout << endl;
}
