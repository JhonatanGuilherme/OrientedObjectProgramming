#include <iostream>

using namespace std;

int main() {
  int a = 0;
  switch (a) { // Ambas as expressões são executadas;
    default:
      cout << a << endl;
    case 2:
      cout << a << endl;
  }

  return 0;
}
