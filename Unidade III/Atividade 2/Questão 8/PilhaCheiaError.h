#ifndef PILHACHEIAERROR_H
#define PILHACHEIAERROR_H

#include <stdexcept>

using namespace std;

class PilhaCheiaError : public out_of_range {
  public:
    PilhaCheiaError(const char *e = "A pilha esta cheia.") : out_of_range(e) { }
};

#endif //PILHACHEIAERROR_H