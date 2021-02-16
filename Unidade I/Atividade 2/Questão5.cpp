#include <iostream>

using namespace std;

int main() {
  int i = 10;
  int *pi = &i;
  *pi = *pi * *pi;

  cout << i << endl;

  return 0;
}
