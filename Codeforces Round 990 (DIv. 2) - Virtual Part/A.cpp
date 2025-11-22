#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int count = 0;

  if (a[0] == 1) {
    count++;
  }
  int sum = 0, p = 1;
  for (int i = 1; i < n; i++) {
    sum += a[i];
    if (sum == 8 * p) {
      count++;
      p++;
      sum = 0;
    } else if (sum < 8 * p) {
      continue;
    } else {
      while (sum > 8 * p) {
        sum = sum - 8 * p;
        p++;
      }
      if(sum==8*p){
        sum=0;
        p++;
        count++;
      }
    }
  }
  return count;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << solve(n) << "\n";
  }
  return 0;
}