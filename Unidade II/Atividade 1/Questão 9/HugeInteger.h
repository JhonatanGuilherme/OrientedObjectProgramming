#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

#include <iostream>
using std::string;

class HugeInteger {
  public:
    void input(string hugeNumber);
    void output(void);
    void add(HugeInteger anotherObject);
    bool isEqualTo(HugeInteger anotherObject);
    bool isNotEqualTo(HugeInteger anotherObject);
    bool isGreaterThan(HugeInteger anotherObject);
    bool isLessThan(HugeInteger anotherObject);
    bool isGraterThanOrEqual(HugeInteger anotherObject);
    bool isLessThanOrEqual(HugeInteger anotherObject);

  private:
    string hugeNumber;
    int numberLength;
};

#endif //HUGE_INTEGER_H