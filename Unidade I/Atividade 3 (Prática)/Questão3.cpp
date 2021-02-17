#include <iostream>
#include <string>

using namespace std;

int main() {
  string str, strFinal;

  getline(cin, str);

  for (int i = 0; i < str.size() + 1; i++) {
    if (isalnum(str[i]) || str[i] == ' ') {
      strFinal += str[i];
    }
  }

  cout << strFinal << endl;

  return 0;
}
