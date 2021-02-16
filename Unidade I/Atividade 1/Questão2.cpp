#include <iostream>

using namespace std;

int main() {
  unsigned int a = -20;
  cout << a << endl; // Retornará lixo;

  cout << 'a' << endl; // char único da tabela ASCII;
  cout << L'a' << endl; // wchar_t;
  cout << "a" << endl; // string com um caractere;
  cout << L"a" << endl; // wchar_t;

  cout << 10e2 << endl; // Base 10, expoente -2;

  return 0;
}
