#include <iostream>

using namespace std;

void a();

int main() {
  /*
    if - expressão lógica
    switch - avalia uma expressão inteira
  */

  int a = 2;

  if (a == 2)
    cout << "a eh igual a 2" << endl;
  else
    cout << "a eh diferente de 2" << endl;

  // Exemplo de Switch com Case/Break;
  switch (a) {
    case 1:
      cout << 1;
      break;
    case 2:
      cout << 2;
      break;
  }

  // Exemplo de Switch com apenas Case;
  char ch;
  while (cin >> ch) {
    switch (ch) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        cout << "Vogal" << endl;
        break;
      default: // Default executa caso nenhum Case tenha sido executado;
        cout << "Nao vogal" << endl;
    }
  }

  auto cont = 0;
  for (cout << "So entro uma vez" << endl;
       cout << "testo a condicao a cada loop" << endl, cont < 10;
       cout << "incremento sempre ao fim" << endl, cont++);

  int arr2[] {1, 2, 3, 4, 5};
  for (auto &h : arr2)
    cout << h << " ";
  
  for (auto &i : {1, 2, 3, 4, 5}) { // Array de inicialização
    if (i == 3)
      break;
    cout << i << endl;
  }

  for (auto &i : {1, 2, 3, 4, 5}) {
    if (i == 3)
      continue;
    cout << i << endl;
  }

  return 0;
}

void a() {} // Exemplo de instruções/blocos vazios
