#include <bits/stdc++.h>
using namespace std;
void solve() {
  int h, m, result;
  cin >> h >> m;
  result = (24 - h - 1) * 60 + (60 - m);
  cout << result <<endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}