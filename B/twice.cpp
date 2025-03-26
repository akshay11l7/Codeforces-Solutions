#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, count = 0;
  cin >> n;
  set<int> s;
  while (n--) {
    int x;
    cin >> x;
    if (s.count(x)) {
      count++;
      s.erase(x);
    } else {
      s.emplace(x);
    }
  }
  cout<<count<<endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}