#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

#include <iostream>
using namespace std;

class HugeInteger {
  private:
    string hugeNumber;
    friend ostream &operator << (ostream &out, const HugeInteger &obj);
  public:
    HugeInteger(string &number);
    void operator = (string &anotherNumber);
    HugeInteger operator + (const HugeInteger &obj);
    void operator += (const HugeInteger &obj);
    bool operator == (const HugeInteger &obj);
    bool operator != (const HugeInteger &obj);
    bool operator > (const HugeInteger &obj);
    bool operator < (const HugeInteger &obj);
    bool operator >= (const HugeInteger &obj);
    bool operator <= (const HugeInteger &obj);
};

#endif //HUGEINTEGER_H