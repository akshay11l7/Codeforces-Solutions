#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, count = 0, teams;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] <= 5 - k) {
      count++;
    }
  }
  if (count >= 3) {
    teams = count / 3;
    cout << teams;
  } else {
    cout << "0";
  }
  return 0;
}