#ifndef SALDOINSUFICIENTE_H
#define SALDOINSUFICIENTE_H

#include <stdexcept>

using namespace std;

class SaldoInsuficiente : public runtime_error {
  public:
    SaldoInsuficiente(const char *e) : runtime_error(e) { }
};

#endif //SALDOINSUFICIENTE_H