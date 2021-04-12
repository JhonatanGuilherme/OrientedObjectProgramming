#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Cliente.h"

using namespace std;

class Empresa : public PessoaJuridica {
  private:
    Funcionario *listaFuncionarios;
    Cliente *listaClientes;
    int contFuncionarios, contClientes;
  public:
    void adicionarFuncionario(const Funcionario &f);
    void adicionarCliente(const Cliente &c);
    void imprimirFuncionarios(void);
    void imprimirClientes(void);
    float calcularFolhaDePagamento(void);
};

#endif //EMPRESA_H