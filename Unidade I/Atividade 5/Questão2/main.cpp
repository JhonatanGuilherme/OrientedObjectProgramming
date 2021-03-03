#include <iostream>
#include "ContaBanco.cpp"

using namespace std;

int main(void) {
  ContaBanco conta1 (-50);
  ContaBanco conta2 (100);

  cout << "Saldo conta 1: " << conta1.getSaldo() << endl;
  cout << "Saldo conta 2: "  << conta2.getSaldo() << endl;
  
  conta1.creditar(32.5);
  conta2.debitar(80.2);
  
  cout << "Saldo conta 1: "  << conta1.getSaldo() << endl;
  cout << "Saldo conta 2: "  << conta2.getSaldo() << endl;

  conta2.debitar(40.2);

  cout << "Saldo conta 2: "  << conta2.getSaldo() << endl;

  return 0;
}
