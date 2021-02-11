#include <iostream>
#include <typeinfo>

using namespace std;

int i = 42; // Escopo global;

int main() {
  int i = 100; // Escopo local;

  cout << i << endl; // Imprimindo 100;
  cout << ::i << endl; // Imprimindo 42;

  int &ri = i; // Referenciando i = 100;
  i = 5; ri = 10; 
  cout << i << " " << ri << endl; // Retorno 10 10;

  int *pi = &i;
  *pi = *pi * *pi;

  cout << *pi << endl;

  const int i2 = i; // i2 - const int;
  const int *const p2 = &i2; // ponteiro constante apontando para i2;

  const int &r = 0; // Não retorna erro, pois 0 é const int;

  int inteiro;
  double d;
  d = inteiro = 3.5; // d = 3, inteiro = 3;
  inteiro = d = 3.5; // d = 3.5, inteiro = 3;

  auto ai = i; // int;
  const auto cai = i; // const int;
  auto r1 = i + 100L; // long int;
  auto r2 = i + d; // double;
  const auto r3 = d + 3.0L; // const double;

  return 0;
}
