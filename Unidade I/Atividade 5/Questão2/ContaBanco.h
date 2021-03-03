#ifndef CONTABANCO_H
#define CONTABANCO_H

#include <iostream>

class ContaBanco {
  private:
    double saldo;
  public:
    ContaBanco(double saldoInicial);
    void creditar(double valor);
    void debitar(double valor);
    double getSaldo(void);
};

#endif //CONTABANCO_H