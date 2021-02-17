#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  
  getline(cin, str);

  for (auto &a : str)
    a = 'X';
  
  cout << str << endl;

  return 0;
}
