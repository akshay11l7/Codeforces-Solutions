#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, c1, c2;
  cin >> n;
  if (n % 3 == 1 || n % 3 == 0) {
    c2 = n / 3;
    c1 = c2 + (n%3);
  } else {
    c1 = n / 3;
    c2 = c1 + 1;
  }
  cout << c1 << " " << c2 << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}