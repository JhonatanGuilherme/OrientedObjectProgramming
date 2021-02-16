#include <iostream>

using namespace std;

int main() {
  int i = 0;
  double d = 5.2;

  auto ai = i; // int;
  const auto cai = i; // const int;
  auto r1 = i + 100L; // long int;
  auto r2 = i + d; // double;
  const auto r3 = d + 3.0L; // const double;

  return 0;
}
