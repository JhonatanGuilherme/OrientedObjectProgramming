#include <iostream>
#include "ContaBanco.h"

using namespace std;

ContaBanco::ContaBanco(double saldoInicial) {
  this->saldo = saldoInicial >= 0 ? saldoInicial : 0;
}

void ContaBanco::creditar(double valor) {
  this->saldo += valor;
  cout << "Valor creditado com sucesso." << endl;
}

void ContaBanco::debitar(double valor) {
  if (this->saldo - valor <= 0)
    cout << "Erro ao debitar valor do saldo." << endl;
  else {
    this->saldo -= valor;
    cout << "Valor creditado com sucesso." << endl;
  }
}

double ContaBanco::getSaldo(void) { return this->saldo; }
