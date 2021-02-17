#include <iostream>
#include <string>

using namespace std;

int main() {
  string a, b;

  getline(cin, a);
  getline(cin, b);
  
  if (a == b)
    cout << "Sao iguais" << endl;
  else
    cout << "String maior: " << (a.size() >= b.size() ? a : b) << endl;

  return 0;
}
