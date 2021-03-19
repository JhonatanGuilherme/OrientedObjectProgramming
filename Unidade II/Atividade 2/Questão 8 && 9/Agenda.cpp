#include <iostream>
#include "Agenda.h"
#include "Pessoa.h"

void Agenda::armazenaPessoa(string nome, int idade, float altura) {
  Pessoa p(nome, idade, altura);
  this->armazenaPessoa(p);
}

void Agenda::armazenaPessoa(const Pessoa &p) {
  pessoas[contador++] = p;
}

void Agenda::removePessoa(string nome) {
  for (int i (0); i < contador; i++) {
    if (pessoas[i].getNome() == nome) {
      for (int j (i); j < contador - 1; j++)
        pessoas[j] = pessoas[j + 1];
      contador--;
      return;
    }
  }
}

int Agenda::buscaPessoa(string nome) const {
  for (int i (0); i < contador; i++) {
    if (pessoas[i].getNome() == nome)
      return i;
  }
  cout << "Pessoa nao encontrada" << endl;
  return -1;
}

void Agenda::imprimePessoa(int i) const {
  cout << "Nome: " << pessoas[i].getNome() << endl;
  cout << "Idade: " << pessoas[i].getIdade() << endl;
  cout << "Altura: " << pessoas[i].getAltura() << endl;
}

void Agenda::imprimePovo(void) const{ 
  for (int i (0); i < contador; i++) {
    cout << "Nome: " << pessoas[i].getNome() << endl;
    cout << "Idade: " << pessoas[i].getIdade() << endl;
    cout << "Altura: " << pessoas[i].getAltura() << endl;
  }
}
