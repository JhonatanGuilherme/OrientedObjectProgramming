#ifndef EXCEDELIMITE_H
#define EXCEDELIMITE_H

#include <stdexcept>

using namespace std;

class ExcedeLimite : public runtime_error {
  public:
    ExcedeLimite(const char *e) : runtime_error(e) { }
};

#endif //EXCEDELIMITE_H