#include <iostream>
#include "Animal.cpp"
#include "Cachorro.cpp"
#include "Gato.cpp"

using namespace std;

int main(void) {
  Cachorro dog("Dog");
  Gato cat("Cat");

  cout << dog.getNome() << endl;
  cout << cat.getNome() << endl;

  cout << dog.late() << endl;
  cout << cat.mia() << endl;

  return 0;
}
