#include <iostream>
#include "Data.cpp"

using namespace std;

int main(void) {
  Data d1 (2, 10, 2020);
  
  cout << d1.getDia() << endl;
  cout << d1.getMes() << endl;
  cout << d1.getAno() << endl;
  d1.mostrarData();

  d1.setDia(12);
  d1.setMes(13);
  d1.setAno(2021);
  d1.mostrarData();

  return 0;
}
