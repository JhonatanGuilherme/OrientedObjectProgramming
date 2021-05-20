#include <iostream>
#include <stdexcept>
#include "TempoZero.h"
#include "TempoUm.h"
#include "TempoDois.h"
#include "TempoTres.h"

using namespace std;

int main(void) {
  try {
    throw TempoZero();
  } catch (runtime_error &e) {
    cout << e.what() << endl;
  }

  try {
    throw TempoUm();
  } catch (runtime_error &e) {
    cout << e.what() << endl;
  }

  try {
    throw TempoDois();
  } catch (runtime_error &e) {
    cout << e.what() << endl;
  }

  try {
    throw TempoTres();
  } catch (runtime_error &e) {
    cout << e.what() << endl;
  }

  return 0;
}
