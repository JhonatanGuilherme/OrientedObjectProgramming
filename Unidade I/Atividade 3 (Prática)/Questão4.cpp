#include <iostream>

using namespace std;

int main() {
  auto maior = 0, num = 0;
  for (int i = 0; i < 5; i++) {
    if (cin >> num, num > maior)
      maior = num;
  }

  cout << "Maior numero: " << maior << endl;

  return 0;
}
