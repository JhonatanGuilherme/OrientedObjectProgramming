#ifndef TEMPOUM_H
#define TEMPOUM_H

#include <stdexcept>

using namespace std;

class TempoUm : public runtime_error {
  public:
    TempoUm(const char *e = "Tempo nao pode ser um.") : runtime_error(e) { }
};

#endif //TEMPOUM_H