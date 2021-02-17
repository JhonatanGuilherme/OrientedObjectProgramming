#include <array>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // a)
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j <= i; j++)
      cout << '*';
    cout << endl;
  }
  cout << endl;

  // b)
  for (int i = 5; i > 0; i--) {
    for (int j = 0; j < i; j++)
      cout << '*';
    cout << endl;
  }
  cout << endl;

  // c)
  int cont = 1;
  for (int i = 5; i > 0; i--) {
    for (int j = 0; j < i; j++)
      cout << '*';
    cout << endl;
    cout << setw(++cont);
  }
  cout << endl;

  // d)
  cont = 5;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j <= i; j++)
      cout << '*';
    cout << endl;
    cout << setw(cont--);
  }
  cout << endl;

  // e)
  int cont2 = 3;
  cont = 1;
  for (int i = 0; i < 5; i++) {
    cout << setw(cont2);
    for (int j = 0; j < cont; j++)
      cout << '*';
    cout << endl;
    i >= 2 ? (cont -= 2, cont2++) : (cont += 2, cont2--);
  }
  cout << endl;

  return 0;
}
