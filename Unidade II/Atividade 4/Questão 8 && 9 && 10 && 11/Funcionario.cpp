#include <iostream>
#include "Funcionario.h"

using namespace std;

ostream &operator << (ostream &out, Funcionario &f) {
  out << "Nome............: " << f.getNome() << endl;
  out << "CPF.............: " << f.getCPF() << endl;
  out << "Matricula.......: " << f.getMatricula() << endl;
  out << "Salario.........: " << f.getSalario() << endl;
  out << "HorarioMensal...: " << f.getHorarioMensal() << endl;
  out << "HorasTrabalhadas: " << f.getHorasTrabalhadas() << endl;
  out << "Salario bruto...: " << f.calculaSalarioBruto() << endl;

  return out;
}

string Funcionario::getMatricula(void) {
  return this->matricula;
}

void Funcionario::setMatricula(string matricula) {
  this->matricula = matricula;
}

float Funcionario::getSalario(void) {
  return this->salarioBase;
}

void Funcionario::setSalario(float salario) {
  this->salarioBase = salario < 0 ? 0 : salario;
}

int Funcionario::getHorarioMensal(void) {
  return this->horarioMensal;
}

void Funcionario::setHorarioMensal(int horarioMensal) {
  this->horarioMensal = horarioMensal < 0 ? 0 : horarioMensal;
}

int Funcionario::getHorasTrabalhadas(void) {
  return this->horasTrabalhadasMes;
}

void Funcionario::setHorasTrabalhadas(int horasTrabalhadas) {
  this->horasTrabalhadasMes = horasTrabalhadas <= 0 ? 1 : (horasTrabalhadas < this->horarioMensal ? this->horarioMensal : horasTrabalhadas);
}
