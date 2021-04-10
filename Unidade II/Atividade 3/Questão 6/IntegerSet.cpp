#include <iostream>
#include "IntegerSet.h"

using namespace std;

ostream &operator << (ostream &out, const IntegerSet &obj) {
  for (int i = 0; i < 100; i++) {
    if (obj.array[i] == 1)
      out << obj.array[i] << " ";
  }
  out << endl;

  return out;
}

IntegerSet::IntegerSet(void) {
  for (int i = 0; i < 100; i++)
    this->array[i] = 0;
}

IntegerSet::IntegerSet(const int array[], const int &size) {
  for (int i = 0; i < size; i++)
    this->array[array[i]] = 1;
}

void IntegerSet::operator << (const int &k) {
  this->array[k] = 1;
}

void IntegerSet::operator >> (const int &k) {
  this->array[k] = 0;
}

IntegerSet& IntegerSet::operator | (const IntegerSet &objB) {
  IntegerSet *objC = new IntegerSet();
  for (int i = 0; i < 100; i++) {
    if (this->array[i] == 1 || objB.array[i] == 1)
      objC->array[i] = 1;
    else
      objC->array[i] = 0;
  }

  return *objC;
}

IntegerSet& IntegerSet::operator & (const IntegerSet &objB) {
  IntegerSet *objC = new IntegerSet();
  for (int i = 0; i < 100; i++) {
    if (this->array[i] == 1 && objB.array[i] == 1)
      objC->array[i] = 1;
    else
      objC->array[i] = 0;
  }

  return *objC;
}
