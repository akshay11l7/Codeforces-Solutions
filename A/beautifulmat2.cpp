#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int value;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> value;
      if (value == 1) {
        cout << abs(i - 2) + abs(j - 2) << endl;
        return 0;
      }
    }
  }
  return 0;
}
