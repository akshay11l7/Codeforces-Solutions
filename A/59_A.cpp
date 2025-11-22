#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 5;
const int mod = 1e9 + 7;
string upper(string s) {
  string ans;
  for (char c : s) {
    ans += toupper(c);
  }
  return ans;
}

string lower(string s) {
  string ans;
  for (char c : s) {
    ans += tolower(c);
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s,ans;
  cin >> s;
  int n = s.size(), count=0;
  for (int i = 0; i < n; i++) {
    if (s[i] >= 65 && s[i] <= 91) {
      count++;
    }
  }

  if (count > n / 2) {
    ans = upper(s);
  }
  else{
    ans = lower(s);
  }
  cout<<ans;
  return 0;
}
