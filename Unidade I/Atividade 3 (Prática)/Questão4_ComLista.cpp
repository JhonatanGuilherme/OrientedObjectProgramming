#include <array>
#include <iostream>

using namespace std;

int main() {
  array<int, 5> arr;

  for (int i = 0; i < size(arr); i++)
    cin >> arr[i];
  
  cout << *max_element(begin(arr), end(arr)) << endl;

  return 0;
}
