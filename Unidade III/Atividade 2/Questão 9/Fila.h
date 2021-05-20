#ifndef FILA_H
#define FILA_H

#include <iostream>
#include "FilaCheiaError.h"
#include "FilaVaziaError.h"

using namespace std;

template <class T>
class Fila {
  friend ostream &operator <<(ostream &out, const Fila<T> &f) {
    for (int i = 0; i < f.pos; i++){
      out << f.fila[i] << " ";
    }
    out << endl;
    return out;
  }
  friend istream &operator >>(istream &input, Fila<T> &f) {
    for (int i = 0; i < f.tam; i++) {
      input >> f.fila[i];
      f.pos++;
    }
    return input;
  }
  public:
    Fila(int tam = 10) {
      pos = 0;
      this->tam = (tam > 0 ? tam : 10);
      fila = new T[this->tam];
    }
    void enfileirar(T x) {
      if (estaCheia()) {
        throw FilaCheiaError();
        return;
      }
      fila[pos++] = x;
    }
    void desenfileirar(void) {
      if (estaVazia()) {
        throw FilaVaziaError();
        return;
      }
      T x {fila[0]};
      for (int i = 0; i < pos - 1; i++) {
        fila[i] = this->fila[i + 1];
      }
      pos--;
      cout << "Elemento " << x << " removido da fila." << endl;
    }
    bool estaCheia(void) { return pos == tam; }
    bool estaVazia(void) { return pos == 0; }
    int primeiroElemento(void) { return fila[0]; }
    int tamanho(void) { return pos; }
  private:
    T *fila;
    int pos, tam;
};

#endif //FILA_H