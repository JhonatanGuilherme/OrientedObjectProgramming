#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Conta.h"
#include "Pessoa.h"
#include "PessoaJuridica.h"

using namespace std;

class Banco : public PessoaJuridica {
  public:
    Banco(PessoaJuridica *pj);
    ~Banco(void);
    void cadastrarConta(Pessoa *p, Conta *conta);
    void removerConta(Conta *conta);
    void removerConta(string numero);
    void consultarConta(string numero);
    void atualizarConta(string numero, double saldo);
    void listarContasCorrentista(Pessoa *correntista);
    void listarContas(void);
    vector<Conta*> contas;
    vector<Pessoa*> correntistas;
};

Banco::Banco(PessoaJuridica *pj) : PessoaJuridica(pj->getNome(), pj->getID(), pj->getRazaoSocial()){
  ifstream fin("dadosDoBanco.dat", ios::in);
  fin.close();
}

Banco::~Banco(void) {
  ofstream fout("dadosDoBanco.dat", ios::out);
  for (int i = 0; i < contas.size(); i++) {
    fout << "CONTA " << contas[i]->getNumero() << endl;
    for (int j = 0; j < contas[i]->transacoes.size(); j++) {
      fout << contas[i]->transacoes[j];
    }
    fout << endl;
  }
  fout.close();
}

void Banco::cadastrarConta(Pessoa *p, Conta *conta) {
  
  contas.push_back(conta);
  correntistas.push_back(p);
}

void Banco::removerConta(Conta *conta) {
  for (int i = 0; i < contas.size(); i++) {
    if (contas[i] == conta) {
      contas.erase(contas.begin() + i);
      return;
    }
  }
}

void Banco::removerConta(string numero) {
  for (int i = 0; i < contas.size(); i++) {
    if (contas[i]->getNumero() == numero) {
      contas.erase(contas.begin() + i);
      return;
    }
  }
}

void Banco::consultarConta(string numero) {
  for (int i = 0; i < contas.size(); i++) {
    if (contas[i]->getNumero() == numero) {
      contas[i]->extrato();
      return;
    }
  }
}

void Banco::atualizarConta(string numero, double saldo) {
  for (int i = 0; i < contas.size(); i++) {
    if (contas[i]->getNumero() == numero) {
      contas[i]->setSaldo(saldo);
    }
  }
}

void Banco::listarContasCorrentista(Pessoa *correntista) {
  string nomeCorrentista = correntista->getNome();
  for (int i = 0; i < contas.size(); i++) {
    if (contas[i]->getNomeCorrentista() == nomeCorrentista)
      contas[i]->extrato();
  }
}

void Banco::listarContas(void) {
  for (int i = 0; i < contas.size(); i++) {
    contas[i]->extrato();
  }
}

#endif //BANCO_H