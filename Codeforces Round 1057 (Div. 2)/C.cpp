#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  map<int, int> mp;
  vector<int> odd;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mp[x]++;
  }
  int ans = 0;
  for (auto x : mp) {
    if (x.second % 2 == 0) {
      ans += x.first * x.second;
    } else {
      ans += (x.second - 1) * x.first;
      odd.push_back(x.first);
    }
  }

  int per = 0;
  int per_1 = 0;

  int m = odd.size();
  if (m == n) {
    cout << 0 << endl;
    return;
  }

  sort(odd.rbegin(), odd.rend());
  for (auto i : odd) {
    if (i < ans) {
      per = ans + i;
      break;
    }
  }

  for (int i = 0; i < m-1; i++) {
    if (odd[i] - odd[i + 1] < ans) {
      per_1 = ans + odd[i] + odd[i + 1];
      break;
    }
  }

  if (m == n - 2 && per == ans) {
    cout << 0 << endl;
    return;
  } else {
    cout << max(per,per_1) << endl;
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