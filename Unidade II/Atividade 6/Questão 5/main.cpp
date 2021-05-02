#include <iostream>

using namespace std;

template <class T>
bool comparar(T a, T b);

int main(void) {
  cout << comparar(5, 10) << endl;

  cout << comparar(2.2, 5.8) << endl;

  cout << comparar("teste", "teste") << endl;

  return 0;
}

template <class T>
bool comparar(T a, T b) {
  return (a == b ? true : false);
}
