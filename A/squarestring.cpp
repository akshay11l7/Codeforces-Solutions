#include <bits/stdc++.h>
using namespace std;
void solve() {
  string s;
  string str1 = "", str2 = "";
  cin >> s;
  if (s.length() > 1 && s.length() % 2 == 0) {
    for (int i = 0; i < s.length() / 2; i++) {
      str1 += s[i];
    }
    for (int i = s.length() / 2; i < s.length(); i++) {
      str2 += s[i];
    }
    if (str1 == str2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
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