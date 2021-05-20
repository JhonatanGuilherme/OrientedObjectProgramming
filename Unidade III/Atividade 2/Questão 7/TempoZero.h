#ifndef TEMPOZERO_H
#define TEMPOZERO_H

#include <stdexcept>

using namespace std;

class TempoZero : public runtime_error {
  public:
    TempoZero(const char *e = "Tempo nao pode ser zero.") : runtime_error(e) { }
};

#endif //TEMPOZERO_H