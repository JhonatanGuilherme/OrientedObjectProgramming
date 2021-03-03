#include <iostream>
#include "Data.h"

using namespace std;

Data::Data(unsigned dia, unsigned mes, unsigned ano) {
  this->dia = dia;
  this->mes = mes <= 12 ? mes : 1;
  this->ano = ano;
}

unsigned Data::getDia(void) { return this->dia; }

void Data::setDia(unsigned dia) { this->dia = dia; }

unsigned Data::getMes(void) { return this->mes; }

void Data::setMes(unsigned mes) { this->mes = mes > 12 ? 1 : mes; }

unsigned Data::getAno(void) { return this->ano; }

void Data::setAno(unsigned ano) { this->ano = ano; }

void Data::mostrarData(void) {
  cout << (this->dia >= 10 ? "" : "0") << this->dia << "/"
  << (this->mes >= 10 ? "" : "0") << this->mes << "/"
  << this->ano << endl;
}
