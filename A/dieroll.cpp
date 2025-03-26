#include <bits/stdc++.h>
using namespace std;

int main() {
  int y, w, num;
  cin >> y >> w;
  num = 7 - max(y, w);
  if (num == 4 || num == 2) {
    cout << num / 2 << "/" << 3;
  } else if (num == 5 || num == 1) {
    cout << num << "/" << 6;
  } else if (num == 3) {
    cout << 1 << "/" << 2;
  } else {
    cout << 1 << "/" << 1;
  }

  return 0;
}