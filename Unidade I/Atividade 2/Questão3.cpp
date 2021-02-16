#include <iostream>

using namespace std;

int main() {
  int i = 100, &ri = i; // Referenciando i = 100;
  i = 5; ri = 10;

  cout << i << " " << ri << endl; // Retorno 10 10;
  
  return 0;
}
