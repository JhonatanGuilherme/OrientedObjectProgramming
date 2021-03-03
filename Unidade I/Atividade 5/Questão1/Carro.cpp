#include <iostream>
using std::cout, std::endl;

#include "Carro.h"

//Implementação

// c) Modificação no método construtor;
Carro::Carro(string nome, unsigned ano) {  
  setMarca(nome);
  setAno(ano);
}

void Carro::setMarca(string nome) {
  if (nome == "")
    marca = "\"Sem Marca\"";
  else if (nome.length() > 10)
    marca = nome.substr(0,10);
  else
    marca = nome;
}

string Carro::getMarca() {
  return marca;
}

void Carro::displayMessage() {
  std::cout << "Olá, eu sou um carro da marca " << getMarca() <<
  " e do ano " << getAno() << endl;
}

// b) Implementação de método getAno() 
unsigned Carro::getAno() { return this->ano; }

// b) Implementação de método setAno()
void Carro::setAno(unsigned ano) { this->ano = ano; }
