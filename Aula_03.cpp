#include <iostream>

using namespace std;

int main() {
  /*
  Expressões

    Unário: & (endereço), *(desreferência), ++ (incremento), --(decremento), ...
    Binário: +, -, *, /, ...
    Ternário: ?:
  
  Operadores de bitwise
    ~ bitwise NOT
    << left shift
    >> right shift
    & bitwise AND
    ^ bitwise XOR
    | bitwise OR
  */

  unsigned a = 0x000A; // 00001010 em binário / 10 em decimal
  unsigned b = 0x000D; // 00001101 em binário / 13 em decimal
  cout << (a << 1) << endl; // Deslocamento de bits para esquerda, resultado: 00010100
  cout << (a >> 1) << endl; // Deslocamento de bits para direita, resultado: 00000101
  cout << (a & b) << endl; // Operador AND de bits, resultado: 00001000
  cout << (a | b) << endl; // Operador OR de bits, resultado: 00001111

  int c, arr[10], *p;

  cout << sizeof(int) << endl; // 4 bits
  cout << sizeof(c) << endl; // 4 bits
  cout << sizeof(arr) << endl; // 40 bits (array int * size 10)
  cout << sizeof(p) << endl; // 8 bits
  cout << sizeof(*p) << endl; // 4 bits

  int x, y = 1, z = 2;
  x = (y += 4, y + z); // O y é incrementado, porém não é utilizado na expressão;
  cout << x << endl;
  cout << y << endl;

  /*
  Conversão de tipos
    em expressões;
    em condições;
    em inicializações e atribuições;
    em passagem de argumentos para funções;

  4 formas de converter tipos em C++
    static_cast
    const_cast // Converter ponteiros (ou referências) const em não const;
    reinterpret_cast
    dynamic_cast
  */

  int d = static_cast<int> (3.1415f + 0.9), e = 3;
  int ri = d / e;
  double rd = static_cast<double> (d) / e;
  
  cout << ri << endl;
  cout << rd << endl;

  double f = 3.1415, *pd = &f;
  void *pv = pd;
  double *pd2 = static_cast<double*> (pv); // Conversão de ponteiros;

  const double *ptr = &f; // OK, ponteiro const apontando para double
  *(const_cast<double*> (ptr)) = f * 2; // Conversão de ponteiros const;
  cout << f << endl;

  int g = int (3.14); // Conversão de tipos também válida, advinda de C;

  return 0;
}
