#include <iostream>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(void) { return; }

Pessoa::Pessoa(string nome, int idade, float altura) {
  this->nome = nome;
  this->idade = idade;
  this->altura = altura;
}

inline int Pessoa::getIdade(void) const { return this->idade; }

inline float Pessoa::getAltura(void) const { return this->altura; }

inline string Pessoa::getNome(void) const { return this->nome; }

Pessoa &Pessoa::setIdade(int idade) {
  this->idade = idade >= 0 && idade < 150 ? idade : 0;

  return *this;
}

Pessoa &Pessoa::setAltura(float altura) {
  this->altura = altura >= 0 && altura < 2.50 ? altura : 0;

  return *this;
}

Pessoa &Pessoa::setNome(string nome) {
  this->nome = nome.length() >= 2 ? nome : "";

  return *this;
}

void Pessoa::print(void) const {
  cout << "Nome: " << this->nome << endl;
  cout << "Altura: " << this->altura << endl;
  cout << "Idade: " << this->idade << endl;
}
