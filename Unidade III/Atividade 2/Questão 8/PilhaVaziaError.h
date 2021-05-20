#ifndef PILHAVAZIAERROR_H
#define PILHAVAZIAERROR_H

#include <stdexcept>

using namespace std;

class PilhaVaziaError : public out_of_range {
  public:
    PilhaVaziaError(const char *e = "A pilha esta vazia.") : out_of_range(e) { }
};

#endif //PILHAVAZIAERROR_H