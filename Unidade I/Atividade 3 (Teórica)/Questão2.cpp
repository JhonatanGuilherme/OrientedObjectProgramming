#include <iostream>

using namespace std;

int main() {
  double res = 5, x = 5;

  res *= x++; // 25
  cout << res << endl;
  res = 5, x = 5;
  res /= ++x;
  cout << res << endl;

  return 0;
}
