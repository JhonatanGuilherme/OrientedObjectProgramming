#include <iostream>
#include "Time.cpp"

using namespace std;

int main(void) {
  Time t1(16, 40, 58);
  Time t2(16, 40, 59);
  Time t3(16, 59, 59);
  Time t4(23, 59, 59);

  t1.printUniversal();
  t1.tick();
  t1.printUniversal();

  t2.printUniversal();
  t2.tick();
  t2.printUniversal();

  t3.printUniversal();
  t3.tick();
  t3.printUniversal();

  t4.printUniversal();
  t4.tick();
  t4.printUniversal();

  return 0;
}
