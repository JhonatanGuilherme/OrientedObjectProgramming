#include <iostream>
#include <iomanip>

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

  unsigned int f = -20;
  cout << f << endl; // Retornará lixo;

  cout << 'a' << endl; // char único da tabela ASCII;
  cout << L'a' << endl; // wchar_t;
  cout << "a" << endl; // string com um caractere;
  cout << L"a" << endl; // wchar_t;

  cout << 10e2 << endl; // Base 10, expoente -2;

  // int month = 09; // Inválido, pois 9 em octal não existe;
  int day = 07; // Válido, representa 7 em octal;
  int _ = a; 

  /*
  Questão 6 - Usando a biblioteca iostream da C++, escreva
  um programa que leia o primeiro nome e 3 notas de um aluno
  e em seguida exiba na tela uma mensagem como “O aluno FULANO
  obteve média MÉDIA”. Considere a média ponderada, sendo os
  pesos 3, 4 e 5, respectivamente, das notas 1, 2 e 3.
  */

  float nota1, nota2, nota3, media;
  string nome;
  cin >> nome >> nota1 >> nota2 >> nota3;
  media = (nota1 * 3 + nota2 * 4 + nota3 * 5) / 12;
  cout << fixed << setprecision(1);
  cout << "O aluno " << nome << " obteve media " << media << endl;

  // Fim da resposta;

  return 0;
}
