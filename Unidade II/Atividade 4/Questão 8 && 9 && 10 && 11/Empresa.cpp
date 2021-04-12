#include <iostream>
#include "Empresa.h"

using namespace std;

void Empresa::adicionarFuncionario(const Funcionario &f) {
  this->listaFuncionarios[this->contFuncionarios++] = f;
}

void Empresa::adicionarCliente(const Cliente &c) {
  this->listaClientes[this->contClientes++] = c;
}

void Empresa::imprimirFuncionarios(void) {
  for (int i = 0; i < this->contFuncionarios; i++) {
    cout << this->listaFuncionarios[i] << endl;
  }
  cout << this->contFuncionarios << endl;
}

void Empresa::imprimirClientes(void) {
  for (int i = 0; i < this->contClientes; i++) {
    cout << this->listaClientes[i];
  }
}

float Empresa::calcularFolhaDePagamento(void) {
  float valorTotal (0);
  for (int i = 0; i < this->contFuncionarios; i++) {
    valorTotal += this->listaFuncionarios[i].calculaSalarioBruto();
  }

  return valorTotal;
}
