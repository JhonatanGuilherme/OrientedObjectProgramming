#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

template <class T>
class Array {
  friend ostream &operator << (ostream &out, const Array<T> &a) {
    for (int i = 0 ; i < a.tam ; i++)
      out << a.arr[i] << " ";
    out << endl;
    return out;
  }
  friend istream &operator >>(istream &input, Array<T> &a) {
    for (int i = 0 ; i < a.tam ; i++)
      input >> a.arr[i];
    return input;
  }
  public:
    Array(int tam = 10) {
      this->tam = (tam > 0 ? tam : 10);
      arr = new T[this->tam];
    }
    Array(const Array<T> &obj) : tam(obj.tam) {
      arr = new T[this->tam];
      for (int i = 0 ; i < this->tam ; i++)
        arr[i] = obj.arr[i];
    }
    ~Array(void) {
      delete [] arr;
    }
    int getSize(void) const {
      return tam;
    }
    const Array &operator =(const Array<T> &obj) {
      if (&obj != this) {
        if (this->tam != obj.tam) {
          delete [] this->arr;
          this->tam = obj.tam;
          this->arr = new T[this->tam];
        }
        for (int i = 0 ; i < this->tam ; i++)
          arr[i] = obj.arr[i];
      }
      return *this;
    }
    bool operator==(const Array<T> &obj) {
      if (this->tam != obj.tam)
        return false;
      for (int i = 0 ; i < this->tam ; i++)
        if (arr[i] != obj.arr[i])
          return false;
      return true;
    }
    bool operator !=(const Array<T> &dir) {
      return !(*this == dir);
    }
    
    T &operator [](int i) {
      if (i < 0 || i >= tam) {
        cerr << "Erro: Indice " << i << " fora de faixa." << endl;
        exit(1);
      }
      return arr[i];
    }
    T operator [](int i) const {
      if (i < 0 || i >= tam) {
        cerr << "Erro: Indice " << i << " fora de faixa." << endl;
        exit(1);
      }
      return arr[i];
    }
  private:
    int tam;
    T *arr;
};

#endif //ARRAY_H