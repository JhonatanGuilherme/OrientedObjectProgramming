#include <iostream>
#include <string>
#include "HugeInteger.h"

using namespace std;

ostream &operator << (ostream &out, const HugeInteger &obj) {
  out << obj.hugeNumber << endl;
  return out;
}

HugeInteger::HugeInteger(string &number) {
  this->hugeNumber = number;
}

void HugeInteger::operator = (string &anotherNumber) {
  for (int i = 0; i < anotherNumber.length(); i++) {
    if (!isdigit(anotherNumber[i]))
      this->hugeNumber[i] = '0';
    else
      this->hugeNumber[i] = anotherNumber[i];
  }
}

HugeInteger HugeInteger::operator + (const HugeInteger &obj) {
  HugeInteger anotherObj (this->hugeNumber);
  anotherObj.hugeNumber += obj.hugeNumber;

  return anotherObj;
}

void HugeInteger::operator += (const HugeInteger &obj) {
  int rem (0), sum (0);
  string thisNumber (this->hugeNumber), anotherNumber (obj.hugeNumber);
  int aux (this->hugeNumber.length() > obj.hugeNumber.length() ? this->hugeNumber.length() : obj.hugeNumber.length());
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

  this->hugeNumber = thisNumber;
}

bool HugeInteger::operator == (const HugeInteger &obj) {
  if (this->hugeNumber == obj.hugeNumber)
    return true;
  return false;
}

bool HugeInteger::operator != (const HugeInteger &obj) {
  if (this->hugeNumber != obj.hugeNumber)
    return true;
  return false;
}

bool HugeInteger::operator > (const HugeInteger &obj) {
  if (this->hugeNumber > obj.hugeNumber)
    return true;
  return false;
}

bool HugeInteger::operator < (const HugeInteger &obj) {
  if (this->hugeNumber < obj.hugeNumber)
    return true;
  return false;
}

bool HugeInteger::operator >= (const HugeInteger &obj) {
  if (this->hugeNumber >= obj.hugeNumber)
    return true;
  return false;
}

bool HugeInteger::operator <= (const HugeInteger &obj) {
  if (this->hugeNumber <= obj.hugeNumber)
    return true;
  return false;
}
