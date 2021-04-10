#ifndef INTEGERSET_H
#define INTEGERSET_H

#include <iostream>
using namespace std;

class IntegerSet {
  private:
    int *array;
    friend ostream &operator<<(ostream &out, const IntegerSet &obj);
  public:
    IntegerSet(void);
    IntegerSet(const int array[], const int &size);
    void operator<<(const int &k);
    void operator>>(const int &k);
    IntegerSet &operator|(const IntegerSet &objB);
    IntegerSet &operator&(const IntegerSet &objB);
};

#endif //INTEGERSET_H