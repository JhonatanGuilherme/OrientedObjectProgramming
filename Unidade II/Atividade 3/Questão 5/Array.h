#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

class Array {
  private:
    int *arr, tam;
    friend ostream &operator<<(ostream &, const Array &);
    friend istream &operator>>(istream &, Array &);
  public:
    Array(int = 10);
    Array(const Array &);
    ~Array();
    int getSize() const;
    const Array &operator=(const Array &obj);
    bool operator==(const Array &obj);
    bool operator!=(const Array &dir) {
      return !(*this == dir);
    }
    int &operator[](int i);
    int operator[](int i) const;
    Array operator+(const Array &obj) const;
    void operator+=(const Array &obj);
};

#endif //ARRAY_H