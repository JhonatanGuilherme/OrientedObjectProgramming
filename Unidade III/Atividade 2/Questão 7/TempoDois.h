#ifndef TEMPODOIS_H
#define TEMPODOIS_H

#include <stdexcept>

using namespace std;

class TempoDois : public runtime_error {
  public:
    TempoDois(const char *e = "Tempo nao pode ser dois.") : runtime_error(e) { }
};

#endif //TEMPODOIS_H