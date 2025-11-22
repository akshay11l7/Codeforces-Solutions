#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m, a, b;
  cin >> n >> m >> a >> b;

  int cost_using_only_single = n * a;
  int cost_using_only_special = (n + m - 1) / m * b;
  int cost_mixed = (n / m) * b + (n % m) * a;

  cout << min({cost_using_only_single, cost_using_only_special, cost_mixed});
  
  return 0;
}
