#ifndef FILACHEIAERROR_H
#define FILACHEIAERROR_H

#include <stdexcept>

using namespace std;

class FilaCheiaError : public out_of_range {
  public:
    FilaCheiaError(const char *e = "A fila esta cheia.") : out_of_range(e) { }
};

#endif //FILACHEIAERROR_H