#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin>>n;
  int a[n];
  vector<int> even;
  vector<int> odd;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] % 2 == 0) {
      even.push_back(a[i]);
    } else {
      odd.push_back(a[i]);
    }
  }
  if (even.size() >= 0 && odd.size() % 2 == 0) {
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