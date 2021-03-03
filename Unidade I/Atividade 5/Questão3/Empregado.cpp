#include <string>
#include "Empregado.h"

using namespace std;

Empregado::Empregado(string nome, string sobrenome, double salario) {
  this->nome = nome;
  this->sobrenome = sobrenome;
  this->salarioMensal = salario >= 0 ? salario : 0;
}

string Empregado::getNome(void) { return this->nome; }

void Empregado::setNome(string nome) { this->nome = nome; }

string Empregado::getSobrenome(void) { return this->sobrenome; }

void Empregado::setSobrenome(string sobrenome) { this->sobrenome = sobrenome; }

double Empregado::getSalarioMensal(void) { return this->salarioMensal; }

void Empregado::setSalarioMensal(double salario) {
  if (salario >= 0)
    this->salarioMensal = salario;
}
