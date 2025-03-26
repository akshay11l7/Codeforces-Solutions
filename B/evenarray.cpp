#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int misplaced_even = 0, misplaced_odd = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i % 2 == 0 && a[i] % 2 != 0)
      misplaced_even++;
    if (i % 2 != 0 && a[i] % 2 == 0)
      misplaced_odd++;
  }
  if (misplaced_even == misplaced_odd)
    cout << misplaced_even << endl;
  else
    cout << -1 << endl;
}

int main() {
  int test;
  cin >> test;
  while (test--) {
    solve();
  }

  return 0;
}