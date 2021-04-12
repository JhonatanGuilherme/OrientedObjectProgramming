#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include "PessoaFisica.h"

using namespace std;

class Funcionario : public PessoaFisica {
  private:
    friend ostream &operator << (ostream &out, Funcionario &f);
    string matricula;
    float salarioBase;
    int horarioMensal, horasTrabalhadasMes;
  public:
    float calculaSalarioBruto(void) {
      return salarioBase * horasTrabalhadasMes / horarioMensal;
    }
    string getMatricula(void);
    void setMatricula(string matricula);
    float getSalario(void);
    void setSalario(float salario);
    int getHorarioMensal(void);
    void setHorarioMensal(int horarioMensal);
    int getHorasTrabalhadas(void);
    void setHorasTrabalhadas(int horasTrabalhadas);
};

#endif //FUNCIONARIO_H