#include <iostream>
#include <string>
#include "Empregado.cpp"

using namespace std;

int main(void) {
  Empregado e1 ("Joao", "da Silva", 1200);
  Empregado e2 ("Junin", "da Costa", 2800);

  cout << e1.getNome() << " " << e1.getSobrenome() << " - " 
  << e1.getSalarioMensal() << endl;
  cout << e2.getNome() << " " << e2.getSobrenome() << " - " 
  << e2.getSalarioMensal() << endl;

  e1.setSalarioMensal(e1.getSalarioMensal() * 1.1);
  e2.setSalarioMensal(e2.getSalarioMensal() * 1.1);

  cout << e1.getNome() << " " << e1.getSobrenome() << " - " 
  << e1.getSalarioMensal() << endl;
  cout << e2.getNome() << " " << e2.getSobrenome() << " - " 
  << e2.getSalarioMensal() << endl;

  return 0;
}
