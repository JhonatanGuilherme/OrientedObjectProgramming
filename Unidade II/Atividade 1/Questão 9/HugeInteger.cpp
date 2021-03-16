#include <iostream>
#include <string>
#include "HugeInteger.h"

using namespace std;

void HugeInteger::input(string hugeNumber) {
  bool isNumber (true);
  for (auto &i : hugeNumber) {
    if (!isdigit(i))
      isNumber = false;
  }
  if (isNumber && hugeNumber.length() <= 40) {
    this->hugeNumber = hugeNumber;
    this->numberLength = this->hugeNumber.length();
  }
  
}

void HugeInteger::output(void) {
  cout << this->hugeNumber << endl;
}

void HugeInteger::add(HugeInteger anotherObject) {
  int rem (0), sum (0);
  string thisNumber (this->hugeNumber), anotherNumber (anotherObject.hugeNumber);
  int aux (this->numberLength > anotherObject.numberLength ? this->numberLength : anotherObject.numberLength);
  for (int i = 0; i < aux; i++) {
    if (thisNumber[i] && !anotherNumber[i])
      anotherNumber.insert(0, "0");
    if (!thisNumber[i] && anotherNumber[i])
      thisNumber.insert(0, "0");
  }
  for (int j = aux - 1; j >= 0; j--) {
    sum = (thisNumber[j] - '0') + (anotherNumber[j] - '0') + rem;
    rem = (sum > 9 ? 1 : 0);
    thisNumber[j] = '0' + (rem == 1 ? sum - 10 : sum);
  }
  if (rem == 1)
    thisNumber.insert(0, "1");

  this->numberLength = thisNumber.length();
  this->hugeNumber = thisNumber;
}

bool HugeInteger::isEqualTo(HugeInteger anotherObject) {
  return (this->hugeNumber == anotherObject.hugeNumber ? true : false);
}

bool HugeInteger::isNotEqualTo(HugeInteger anotherObject) {
  return !isEqualTo(anotherObject);
}

bool HugeInteger::isGreaterThan(HugeInteger anotherObject) {
  return (this->hugeNumber > anotherObject.hugeNumber ? true : false);
}

bool HugeInteger::isLessThan(HugeInteger anotherObject) {
  return !isEqualTo(anotherObject) && !isGreaterThan(anotherObject);
}

bool HugeInteger::isGraterThanOrEqual(HugeInteger anotherObject) {
  return isGreaterThan(anotherObject) || isEqualTo(anotherObject);
}

bool HugeInteger::isLessThanOrEqual(HugeInteger anotherObject) {
  return !isGreaterThan(anotherObject);
}
