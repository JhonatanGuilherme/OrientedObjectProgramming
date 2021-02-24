#include <iostream>

using namespace std;

unsigned counter(void);

int main(void) {
  cout << counter() << endl;
  cout << counter() << endl;
  cout << counter() << endl;
  cout << counter() << endl;
  cout << counter() << endl;

  return 0;
}

unsigned counter(void) {
  static unsigned x = 0;
  return x++;
}
