#include <iostream>

using namespace std;

int main() {
  // Valores máximos de cada variável;
  short a = 32767;
  int b = 2147483647;
  long c = 2147483647;
  long int d = 2147483647;
  long long e = 9223372036854775807;

  cout << endl;
  cout << "Valor maximo com SHORT....: " << a << endl;
  cout << "Valor maximo com INT......: " << b << endl;
  cout << "Valor maximo com LONG.....: " << c << endl;
  cout << "Valor maximo com LONG INT.: " << d << endl;
  cout << "Valor maximo com LONG LONG: " << e << endl;
  cout << endl;

  return 0;
}
