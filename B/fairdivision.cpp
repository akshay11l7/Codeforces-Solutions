#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, count1 = 0, count2 = 0;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 1)
      count1++;
    else
      count2++;
  }

  int totalSum = count1 + 2 * count2;

  if (totalSum % 2 != 0) {
    cout << "NO" << endl;
    return;
  }

  if (count1 > 0 || count2 % 2 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
