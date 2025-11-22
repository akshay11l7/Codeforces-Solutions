#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  while (n--) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  int operations = 0;
  for (int i = 0; i < n; i++) {
    int score = 0;
    if (i == 0) {
      score = min(abs(a[0] - a[n - 1]), abs(a[0] - a[2]));
      operations += score;
    } else if (i == n - 1) {
      score = min(abs(a[n - 1] - a[0]), abs(a[n - 1] - a[n - 2]));
      operations += score;
    }
    
  }
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