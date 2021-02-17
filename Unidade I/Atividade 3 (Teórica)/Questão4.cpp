#include <iostream>

using namespace std;

int main() {
  int i = 0, j = 0;
  j = (i+= 3, i + 3);
  cout << i << endl;
  cout << j << endl;

  return 0;
}
