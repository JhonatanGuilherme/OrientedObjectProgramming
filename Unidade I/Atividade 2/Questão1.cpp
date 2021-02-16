#include <iostream>

using namespace std;

int i = 42; // Escopo global;

int main() {
  int i = 100; // Escopo local;

  cout << i << endl; // Imprimindo 100;
  cout << ::i << endl; // Imprimindo 42;

  return 0;
}
