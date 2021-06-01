#ifndef CONTACORRENTECOMLIMITE_H
#define CONTACORRENTECOMLIMITE_H

#include <iostream>
#include "Conta.h"
#include "ExcedeLimite.h"
#include "SaldoInsuficiente.h"

using namespace std;

class ContaCorrenteComLimite : public Conta {
  public:
    ContaCorrenteComLimite(Pessoa *correntista, string numero, double saldo, double limite);
    ContaCorrenteComLimite(ContaCorrenteComLimite &conta);
    inline double getLimite(void);
    inline void setLimite(double limite);
    virtual void extrato(void);
    void transferir(Conta *contaDestino, double valor);
  private:
    friend void operator >>(ContaCorrenteComLimite &conta, double saldo);
    double limite;
};

ContaCorrenteComLimite::ContaCorrenteComLimite(Pessoa *correntista, string numero, double saldo, double limite) : Conta(correntista, numero, saldo), limite(limite) {
  saldo = limite > saldo ? limite : saldo;
}

ContaCorrenteComLimite::ContaCorrenteComLimite(ContaCorrenteComLimite &conta) : Conta(conta.correntista, conta.getNumero(), conta.getSaldo()), limite(conta.getLimite()) { }

double ContaCorrenteComLimite::getLimite(void) {
  return this->limite;
}

void ContaCorrenteComLimite::setLimite(double limite) {
  this->limite = limite;
}

void ContaCorrenteComLimite::extrato(void) {
  cout << "CONTA " << this->getNumero() << endl;
  cout << "Nome do cliente...: " << this->correntista->getNome() << endl;
  cout << "Saldo da conta....: " << this->getSaldo() << endl;
  cout << "Limite da conta...: " << this->getLimite() << endl;
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

void ContaCorrenteComLimite::transferir(Conta *contaDestino, double valor) {
  if (this->getSaldo() < valor) {
    throw SaldoInsuficiente("Saldo insuficiente");
  } else if (this->getSaldo() - valor < this->getLimite()) {
    throw ExcedeLimite("Limite excedido.");

  } else {
    *contaDestino << valor;
    this->setSaldo(this->getSaldo() - valor);
    this->adicionarNaLista(-valor);
  }
}

void operator >>(ContaCorrenteComLimite &conta, double valor) {
  if (conta.getLimite() > conta.getSaldo() - valor)
    throw ExcedeLimite("Limite excedido.");
  else {
    conta.setSaldo(conta.getSaldo() - valor);
    conta.adicionarNaLista(-valor);
  }
}

#endif //CONTACORRENTECOMLIMITE_H