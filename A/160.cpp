#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> coins(n);
  int total = 0;
  for (int i = 0; i < n; i++) {
    cin >> coins[i];
    total += coins[i];
  }

  sort(coins.rbegin(), coins.rend());
  int sum = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    sum += coins[i];
    if (sum > total - sum) {
      ans = i + 1;
      break;
    }
  }
  cout << ans;
  return 0;
}
