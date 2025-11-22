#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, l, r;
  cin >> n >> m >> l >> r;

  int left = 0, right = 0, days = 0;

  while (days < m) {
    if (right < r && days < m) {
      right++;
      days++;
    }
    if (left > l && days < m) {
      left--;
      days++;
    }
  }

  cout << left << " " << right << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
 