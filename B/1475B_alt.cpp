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
    vector<bool> dp(n + 1, false);
    dp[0] = true;
    for (int i = 0; i < n; i++) {
      if (dp[i]) {
        if (i + 2020 <= n) {
          dp[i + 2020] = true;
        }
        if (i + 2021 <= n) {
          dp[i + 2021] = true;
        }
      }
    }
    if(dp[n]){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
  }
  return 0;
}