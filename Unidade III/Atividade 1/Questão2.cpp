#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
  double value = 100.453627;

  for (int i = 1; i < 5; i++) {
    cout << fixed << setprecision(i) << value << endl;
  }
  
  return 0;
}
