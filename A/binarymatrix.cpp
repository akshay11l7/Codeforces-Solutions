#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, m, rowxor = 0, colxor = 0, count = 0, count2 = 0, count1 = 0;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      rowxor ^= a[i][j];
      colxor ^= a[j][i];
      if (rowxor == colxor && rowxor == 1) {
        count++;
        cout<<count<<endl;
      } else if (rowxor == 1 && colxor != 1) {
        count1++;
        cout<<count1<<endl;
      } else if (colxor == 1 && rowxor != 1) {
        count2++;
        cout<<count2<<endl;
      }
    }
  }
  cout << count + count1 + count2 << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
