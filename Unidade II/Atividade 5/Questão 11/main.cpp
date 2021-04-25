#include <iostream>
#include "Agenda.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

using namespace std;

int main(void) {
  PessoaFisica *pf = new PessoaFisica {"Joao", "Rua Bairro Cidade", "1/1/1800", "joao@joao.com", "Casado", "123.456.789.01"};
  PessoaJuridica *pj = new PessoaJuridica {"Maria", "Cidade Rua Bairro", "1/8/1190", "maria@maria.com", "Solteiro", "77.777.777/7777-77", "12345678-90", "Empresa LTDA"};
  Agenda *a = new Agenda();
  a->adicionar(*pf);
  a->adicionar(*pj);
  a->pesquisar("123.456.789.01");
  a->mostrarContatos();
  a->remover("77.777.777/7777-77");
  a->mostrarContatos();

  return 0;
}
