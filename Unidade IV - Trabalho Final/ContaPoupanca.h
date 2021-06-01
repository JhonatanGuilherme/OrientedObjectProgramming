#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include <iostream>
#include "Conta.h"
using namespace std;

class ContaPoupanca : public Conta {
  private:
    string aniversario;
  public:
    ContaPoupanca(Pessoa *cliente, string numero, double saldo, string aniversario) : Conta(cliente, numero, saldo), aniversario(aniversario) { }
    ContaPoupanca(ContaPoupanca &conta) : Conta(conta.correntista, conta.getNumero(), conta.getSaldo()), aniversario(conta.getAniversario()) { } 
    inline string getAniversario(void);
    inline void setAniversario(string data);
    virtual void extrato(void);
};

string ContaPoupanca::getAniversario(void) {
  return this->aniversario;
}

void ContaPoupanca::setAniversario(string data) {
  this->aniversario = data;
}

void ContaPoupanca::extrato(void) {
  cout << "CONTA " << this->getNumero() << endl;
  cout << "Nome do cliente..........: " << this->correntista->getNome() << endl;
  cout << "Saldo da conta...........: " << this->getSaldo() << endl;
  cout << "Aniversario do cliente...: " << this->getAniversario() << endl;
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

#endif //CONTAPOUPANCA_H