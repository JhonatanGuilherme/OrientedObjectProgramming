#ifndef FILAVAZIAERROR_H
#define FILAVAZIAERROR_H

#include <stdexcept>

using namespace std;

class FilaVaziaError : public out_of_range {
  public:
    FilaVaziaError(const char *e = "A fila esta vazia.") : out_of_range(e) { }
};

#endif //FILAVAZIAERROR_H