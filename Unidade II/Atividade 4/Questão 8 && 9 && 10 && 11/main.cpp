#include <iostream>
#include "Pessoa.cpp"
#include "PessoaFisica.cpp"
#include "PessoaJuridica.cpp"
#include "Funcionario.cpp"
#include "Cliente.cpp"
#include "Empresa.cpp"

using namespace std;

int main(void) {
  // Questão 8
  Pessoa p;
  p.setNome("Joao");

  cout << p << endl;

  PessoaFisica pf;
  pf.setCPF("012.345.678-90");
  pf.setNome("Albert Einstein");

  cout << pf << endl;

  PessoaJuridica pj;
  pj.setCNPJ("0");
  pj.setNome("Pessoa juridica");
  pj.setRazaoSocial("2");

  cout << pj << endl << endl;

  // Questão 9
  Funcionario f1;
  f1.setCPF("098.765.432-10");
  f1.setHorarioMensal(50);
  f1.setHorasTrabalhadas(800);
  f1.setMatricula("012");
  f1.setNome("Maria");
  f1.setSalario(8000.0);

  cout << f1 << endl;
  
  // Questão 10
  Cliente c;
  c.setCPF("013.467.902-58");
  c.setEndereco("Rua - Bairro - Cidade");
  c.setNome("Joao De Novo");
  c.setTelefone("+558399999-9999");

  cout << c << endl;

  // Questão 11
  Empresa e;
  e.setCNPJ("000000000001");
  e.setNome("Empresa");
  e.setRazaoSocial("Empresa Ficticia");

  Funcionario f2;
  f2.setCPF("098.127.634-50");
  f2.setHorarioMensal(45);
  f2.setHorasTrabalhadas(700);
  f2.setMatricula("210");
  f2.setNome("Maria De Novo");
  f2.setSalario(6800.0);

  cout << f2 << endl;

  e.adicionarFuncionario(f1);
  e.adicionarFuncionario(f2);
  e.imprimirFuncionarios();
  cout << e.calcularFolhaDePagamento() << endl;

  Funcionario *f3 = new Funcionario();

  return 0;
}
