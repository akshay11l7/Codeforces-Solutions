#include <bits/stdc++.h>
using namespace std;
void solve() {
  string s;
  cin >> s;
  if ((s[0] == 'y' || s[0] == 'Y') && (s[1] == 'e' || s[1] == 'E') &&
      (s[2] == 'S' || s[2] == 's')) {
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