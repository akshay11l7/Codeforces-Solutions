#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 5;
const int mod = 1e9 + 7;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
      cin >> p[i];

    string x;
    cin >> x;

    bool flag = false;
    for (auto s : x) {
      if (s == '1') {
        flag = true;
        break;
      }
    }
    if (!flag) {
      cout << 0 << "\n";
      continue;
    }
    if (x[0] == '1' || x[x.size() - 1] == '1') {
      cout << -1 << "\n";
      continue;
    }

    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
      if (p[i] == 1) {
        a = i;
      }
      if (p[i] == n) {
        b = i;
      }
    }

    if (x[a] == '1' || x[b] == '1') {
      cout << -1 << "\n";
      continue;
    }

    a++;
    b++;
    vector<pair<int, int>> ans = {
        {1, a}, {1, b}, {min(a, b), max(a, b)}, {b, n}, {a, n}};
    cout << 5 << "\n";
    for (auto i : ans) {
      cout << i.first << " " << i.second << "\n";
    }
  }

  return 0;
}
