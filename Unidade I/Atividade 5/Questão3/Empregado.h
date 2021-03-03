#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>

using namespace std;

class Empregado {
  private:
    double salarioMensal;
    string nome, sobrenome;
  public:
    Empregado(string nome, string sobrenome, double salario);
    string getNome(void);
    void setNome(string nome);
    string getSobrenome(void);
    void setSobrenome(string sobrenome);
    double getSalarioMensal(void);
    void setSalarioMensal(double salario);
};

#endif
