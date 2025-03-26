#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, value;
  cin >> n;
  set<int> nums;
  while (n--) {
    cin >> value;
    nums.insert(value);
  }
  cout << nums.size() << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}