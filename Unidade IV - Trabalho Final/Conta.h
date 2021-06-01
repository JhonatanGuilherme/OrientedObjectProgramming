#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include <stdexcept>
#include <string>
#include <time.h>
#include <vector>
#include "Pessoa.h"
#include "SaldoInsuficiente.h"

using namespace std;

class Conta {
  public:
    Conta(Pessoa *correntista, string numero, double saldo);
    inline double getSaldo(void);
    inline void setSaldo(double saldo);
    inline string getNumero(void);
    inline void setNumero(string numero);
    inline string getNomeCorrentista(void);
    void transferir(Conta *contaDestino, double valor); // exception
    inline virtual void extrato(void) = 0;
    vector<string> transacoes;
  protected:
    void adicionarNaLista(float valor);
    //unique_ptr<Pessoa> correntista;
    Pessoa *correntista;
  private:
    friend void operator <<(Conta &conta, double saldo); // deposito
    friend void operator >>(Conta &conta, double saldo); // retirada
    double saldo;
    string numero;
};

Conta::Conta(Pessoa *correntista, string numero, double saldo) {
  this->correntista = correntista;
  setNumero(numero);
  setSaldo(saldo);
}

double Conta::getSaldo(void) {
  return this->saldo;
}

void Conta::setSaldo(double saldo) {
  this->saldo = (saldo < 0 ? 0 : saldo);
}

string Conta::getNumero(void) {
  return this->numero;
}

void Conta::setNumero(string numero) {
  this->numero = numero;
}

string Conta::getNomeCorrentista(void) {
  return this->correntista->getNome();
}

void Conta::adicionarNaLista(float valor) { // Não consegui arredondar o valor da transação.
  time_t t = time(0);
  tm* now = localtime(&t);
  string transacao = (valor >= 0 ? "Deposito de " + to_string(valor) : "Retirada de " + to_string(-valor)) + " feito em " + to_string(now->tm_mday) + "/" + to_string(now->tm_mon) + "/" + to_string(now->tm_year + 1900);
  this->transacoes.push_back(transacao);
}

void Conta::transferir(Conta *contaDestino, double valor) {
  if (this->getSaldo() < valor)
    throw SaldoInsuficiente("Saldo insuficiente");
  else {
    *contaDestino << valor;
    this->setSaldo(this->getSaldo() - valor);
    this->adicionarNaLista(-valor);
  }
}

void operator <<(Conta &conta, double valor) {
  conta.setSaldo(conta.getSaldo() + valor);
  conta.adicionarNaLista(valor);
}

void operator >>(Conta &conta, double valor) {
  if (conta.getSaldo() < valor)
    throw SaldoInsuficiente("Saldo insuficiente.");
  conta.setSaldo(conta.getSaldo() - valor);
  conta.adicionarNaLista(-valor);
}

#endif //CONTA_H