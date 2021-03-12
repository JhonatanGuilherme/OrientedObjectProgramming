#include <iostream>
#include <ctime>
#include "Time.cpp"

using namespace std;

int main(void) {
  Time t1;
  Time t2 (10, 5, 8);

  t1.printUniversal();
  t2.printUniversal();

  return 0;
}
