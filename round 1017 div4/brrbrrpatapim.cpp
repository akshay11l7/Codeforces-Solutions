#include <bits/stdc++.h>
using namespace std;
int permutation(int m) {
  int product = 1;
  for (int i = 1; i <= m; i++) {
    product *= i;
  }
  return product;
}
void solve() {
  int n;
  cin >> n;
  int grid[n][n];
  int p[2 * n];
  int prod = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
      p[i + j + 1] = grid[i][j];
    }
  }
  for (int i = 1; i < 2 * n; i++) {
    prod *= p[i];
  }
  if (prod == 0) {
    p[0] = 0;
  } else {
    p[0] = permutation(2 * n) / prod;
  }
  for (int i = 0; i < 2 * n; i++) {
    cout << p[i] << " ";
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}