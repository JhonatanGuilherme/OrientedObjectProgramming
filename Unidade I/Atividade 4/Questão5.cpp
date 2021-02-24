#include <iostream>

using namespace std;

void swap(int &ref1, int &ref2);

int main(void) {
  int x = 5, y = 10, &refX = x, &refY = y;
  cout << refX << " - " << refY << endl;
  swap(refX, refY);
  cout << refX << " - " << refY << endl;

  return 0;
}

void swap(int &ref1, int &ref2) {
  int x = ref1;
  ref1 = ref2;
  ref2 = x;
}
