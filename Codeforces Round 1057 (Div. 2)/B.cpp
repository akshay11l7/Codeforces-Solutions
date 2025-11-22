#include <bits/stdc++.h>
using namespace std;
void solve() {
  long long x, y, z;
  cin >> x >> y >> z;
  bool flag = true;
  for (int i = 0; i < 31; i++) {
    int xi = (x >> i) & 1;
    int yi = (y >> i) & 1;
    int zi = (z >> i) & 1;
    if ((xi == 0 && yi == 0 && zi == 0) || (xi == 0 && yi == 1 && zi == 0) ||
        (xi == 0 && yi == 0 && zi == 1) || (xi == 1 && yi == 0 && zi == 0) ||
        (xi == 1 && yi == 1 && zi == 1)) {
      continue;
    } else {
      flag = false;
      break;
    }
  }
  if (flag)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}