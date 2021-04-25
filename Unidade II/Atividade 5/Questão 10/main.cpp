#include <iostream>

#include "ContaCorrenteComLimite.h"
#include "ContaCorrenteComum.h"
#include "ContaPoupanca.h"

int main(void) {
  Conta *contas[] {new ContaCorrenteComLimite("123", "Joao", 150.0, -80), new ContaCorrenteComum("456", "Maria", 280.0), new ContaPoupanca("789", "Matias", 500.0, "20/04/1900")};
  contas[0]->deposito(50);
  contas[0]->retirada(20);
  contas[0]->extrato();

  contas[1]->deposito(2);
  contas[1]->retirada(300);
  contas[1]->extrato();

  contas[2]->deposito(8000);
  contas[2]->retirada(8100);
  contas[2]->extrato();

  return 0;
}
