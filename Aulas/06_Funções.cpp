#include <iostream>
#include <string>

using namespace std;

void teste(void);

auto testeAuto(void) -> int;

unsigned callMe(void);

void reset(int &i);

bool iguais(const string &a, const string &b);

void print(int);
void print(char);
void print(string);

void func(int);

int main() {
  // Funções

  /*
  Uma função é um módulo, um bloco de código que pode ser executado
  ao chamar a função;
  Uma função pode receber zero ou mais argumentos e retornar um valor
    Usamos o tipo void para indicar que a função não retorna um valor
  Funções podem ser sobrecarregadas */

  teste();

  cout << testeAuto() << endl;

  cout << callMe() << endl;
  cout << callMe() << endl;
  
  int a = 100;
  cout << a << endl;
  reset(a);
  cout << a << endl;

  string b = "a", c = "a";
  cout << iguais(b, c) << endl;

  // O compilador encontra a função que melhor casa com os argumentos
  // passados;
  print(100);
  print('a');
  print("a");

  return 0;
}

void teste(void) {
  string teste = "teste"; // Variável local
  cout << teste << endl;

  return;
}

auto testeAuto(void) -> int {
  return 1;
}

unsigned callMe(void) {
  static unsigned v = 0;
  return ++v;
}

void reset(int &i) {
  i = 0;
}

bool iguais(const string &a, const string &b) {
  return a == b;
}

void print(int i) {
  cout << i << endl;
}

void print(char c) {
  cout << c << endl;
}

void print(string s) {
  cout << s << endl;
}

void func(int x = 0) {
  return;
}
