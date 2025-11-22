#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, k;
  long long cost=0;
  cin >> n >> k;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  sort(nums.begin(), nums.end(), greater<int>());
  if (n != k) {
    for (int i = 0; i < k + 1; i++) {
      cost += nums[i];
    }
  } else {
    for (int i = 0; i < k; i++) {
      cost += nums[i];
    }
  }
  cout << cost << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}