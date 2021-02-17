#include <iostream>

using namespace std;

int main() {
  unsigned u1 = 3, u2 = 7;
  // u1 == 00000011
  // u2 == 00000111
  cout << (u1 & u2) << endl; // 00000011
  cout << (u1 && u2) << endl;
  cout << (u1 | u2) << endl; // 00000111
  cout << (u1 || u2) << endl;

  return 0;
}
