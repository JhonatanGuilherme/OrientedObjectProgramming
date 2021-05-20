#ifndef TEMPOTRES_H
#define TEMPOTRES_H

#include <stdexcept>

using namespace std;

class TempoTres : public runtime_error {
  public:
    TempoTres(const char *e = "Tempo nao pode ser tres.") : runtime_error(e) { }
};

#endif //TEMPOTRES_H