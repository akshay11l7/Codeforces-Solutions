#include <bits/stdc++.h>
using namespace std;

int main() {
  int test;
  cin >> test;
  vector<int> result;
  while (test--) {
    int n, m;
    cin >> n >> m;
    int result1 = 0;
    int result2 = 0;
    vector<int> rowxor(n, 0), colxor(m, 0);
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> matrix[i][j];
        rowxor[i] ^= matrix[i][j];
      }
    }
    for (int j = 0; j < m; j++) {
      for (int i = 0; i < n; i++) {
        colxor[j] ^= matrix[i][j];
      }
    }
    result1 = accumulate(rowxor.begin(), rowxor.end(), 0);
    result2 = accumulate(colxor.begin(), colxor.end(), 0);
    result.push_back(max(result1, result2));
  }
  for (int res : result) {
    cout << res << endl;
  }
  return 0;
}