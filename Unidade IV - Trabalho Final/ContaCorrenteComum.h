#ifndef CONTACORRENTECOMUM_H
#define CONTACORRENTECOMUM_H

#include <iostream>
#include "Conta.h"

using namespace std;

class ContaCorrenteComum : public Conta {
  public:
    ContaCorrenteComum(Pessoa *correntista, string numero, double saldo);
    ContaCorrenteComum(ContaCorrenteComum &conta);
    virtual void extrato(void);
};

ContaCorrenteComum::ContaCorrenteComum(Pessoa *correntista, string numero, double saldo) : Conta(correntista, numero, saldo) { }

ContaCorrenteComum::ContaCorrenteComum(ContaCorrenteComum &conta) : Conta(conta.correntista, conta.getNumero(), conta.getSaldo()) { }

void ContaCorrenteComum::extrato(void) {
  cout << "CONTA " << this->getNumero() << endl;
  cout << "Nome do cliente...: " << this->correntista->getNome() << endl;
  cout << "Saldo da conta....: " << this->getSaldo() << endl;
  if (this->transacoes.size() == 0) {
   cout << "CONTA SEM TRANSACOES" << endl;
  } else if (this->transacoes.size() <= 30) {
    cout << "TRANSACOES DA CONTA: " << endl;
    for (auto &t : this->transacoes)
      cout << t << endl;
  } else {
    for (int i = 0; i < 30; i++) {
      cout << this->transacoes[i] << endl;
    }
  }
  cout << endl;
}

#endif //CONTACORRENTECOMUM_H