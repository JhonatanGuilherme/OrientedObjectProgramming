#include <iostream>

using namespace std;

int main() {
  double km, gasolina, gasolinaTotal;

  while ((cout << "KM: ", cin >> km) && km != -1) {
    cout << "Litros de gasolina: ";
    cin >> gasolina;

    cout << "Quilometros por litro: " << (km / gasolina) << endl;
    cout << "Gasolina total: " << (gasolinaTotal += gasolina) << endl << endl;
  }

  return 0;
}
