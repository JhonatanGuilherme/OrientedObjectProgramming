#include <iostream>

using namespace std;

int var1 = 100; // Escopo Global;

int main() {
  int var2 = 150; // Escopo Local;
  cout << var1 << endl;
  int var1 = 50; // Escopo Local;
  cout << var2 << endl;
  cout << ::var1 << endl; // Retornando variável de escopo global;
  cout << var1 << endl; // Aqui se torna de escopo local;

  // Referência - Um nome alternativo para um objeto/variável.
  int val = 100;
  int &refVal = val;
  //int &outraRef; // Deve referenciar uma variável;
  //int &maisOutra = 10; // 10 é um inteiro constante, retorna erro;
  //double &maisUma = val; // É necessário ser do mesmo tipo;

  cout << val << endl;
  cout << refVal << endl; // Retorna o valor de val;
  cout << &refVal << endl; // Retorna endereço da variável;

  val = 120;
  cout << val << endl;
  cout << refVal << endl;

  refVal = 150;
  cout << val << endl;
  cout << refVal << endl;

  // Ponteiro - Uma variável que aponta para outra variável.
  int *ptrVal2 = &val; // Ponteiro para endereço de val2;
  int *outroPtr;  // Sem erro, não está apontando para nada;
  int *maisOutro = 0; // Sem erro, ponteiro definido por 0;
  //double *maisUm = &val; // Dá erro, pois são tipos diferentes;

  cout << endl;

  int valor = 100, valor2 = 200;
  int *pValor = &valor;
  cout << pValor << " " << *pValor << endl;
  pValor = &valor2;
  cout << pValor << " " << *pValor << endl;

  int arr[4] = {0, 1, 2, 3};
  int *ptrArr = arr;

  cout << endl;

  cout << ptrArr << " " << *ptrArr << endl;
  cout << ptrArr + 1 << " " << *(ptrArr + 1) << endl;
  cout << ptrArr + 2 << " " << *(ptrArr + 2) << endl;
  cout << ptrArr + 3 << " " << *(ptrArr + 3) << endl;

  double ex = 3.14, *pEx = &ex;
  void *pvEx = &ex;

  // Const - Definir uma variável cujo valor não pode ser alterado;
  const int p = 100;
  //a = 120; // a é uma constante, não pode ser alterada;
  //const int b; // Não é possível criar uma constante sem valor;
  //const int c = func(); // Recebe retorno da função;

  const int var4 = 100;
  const int &rel = var4; // Referência a constante var1;
  const auto g = 10; // Constante de tipo automático;
  //re1 = 50; // Erro, pois constante não pode ser alterada;
  //int &re2 = var1; // Erro, referência não constante;

  // Alias (sinônimos) de tipos
  typedef int novoNomeTipo;
  using novoNomeTipo = int;

  novoNomeTipo x = 0;

  // O especificador de tipo auto
  auto a = 100; // int
  auto b = 0.; // double
  auto &c = a; // refereciando variável a
  auto d = &a; // apontando para variável a

  // O especificador de tipo decltype
  const int ci = 0;
  decltype (3 + 1.0) e;
  //decltype (ci) b; // Erro, b é const int e deve ser inicializado;
  decltype (ci) f = 10;

  int i, j, k, l;
  i = j = 10; // i e j recebem 10;

  l = 2 * i + j - (k = 3); // k recebe 3;

  return 0;
}

int func() {
  return 1;
}
