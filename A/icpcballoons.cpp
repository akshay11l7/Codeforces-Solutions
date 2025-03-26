#include <bits/stdc++.h>
using namespace std;
void solve() {
  string s;
  int n;
  cin>>n;
  cin >> s;
  set<char> uniquechars;
  for (char c : s) {
    uniquechars.insert(c);
  }
  cout << uniquechars.size() + n<<endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}