#include <iostream>
#include <string>

using namespace std;

void anyUpperLetter(string str);

int main(void) {
  string str;
  getline(cin, str);

  anyUpperLetter(str);

  return 0;
}

void anyUpperLetter(string str) {
  for (auto &i : str)
    if (isupper(i)) {
      cout << "Possui caracteres maiusculos" << endl;
      return;
    }
  cout << "Nao possui caracteres maiusculos" << endl;

  return;
}
