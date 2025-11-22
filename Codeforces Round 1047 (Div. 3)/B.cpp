#include <bits/stdc++.h>
using namespace std;
void solve() {
  long long n;
  cin >> n;
  vector<long long> p(n);
  for (long long &temp : p) {
    cin >> temp;
  }
  vector<long long> q(n);
  for (long long i = 0; i < n; i++) {
    q[i] = n + 1 - p[i];
  }
  for (long long i = 0; i < n; i++) {
    cout << q[i] << " ";
  }
  cout << endl;
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