#include <iostream>

using namespace std;

void swap(int *ptr1, int *ptr2);

int main(void) {
  int x = 5, y = 10, *ptrX = &x, *ptrY = &y;
  cout << *ptrX << " - " << *ptrY << endl;
  swap(ptrX, ptrY);
  cout << *ptrX << " - " << *ptrY << endl;

  return 0;
}

void swap(int *ptr1, int *ptr2) {
  int x = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = x;
}
