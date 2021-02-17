#include <iostream>
#include <string>

using namespace std;

int main() {
  int c = 0, product = 1;
  while (c <=5) {
   product *= c;
   c++;
  }

  int value;
  cin >> value;

  int gender = 1;
  if (gender == 1)
    cout << "Woman" << endl;
  else;
    cout << "Man" << endl;

  return 0;
}
