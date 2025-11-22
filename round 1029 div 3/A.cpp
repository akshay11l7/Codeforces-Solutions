#include <bits/stdc++.h>
using namespace std;
void s() {
  int n, x;
  cin >> n >> x;
  int a, q = -1;
  vector<int> r;
  while (n--) {
    cin >> a;
    r.push_back(a);
  }
  for (int i = 0; i < r.size(); i++) {
    if (r[i] == 1) {
      q = i + x;
      break;
    }
  }
  if (q == -1) {
    cout << "YES" << endl;
    return;
  }
  if (q <= r.size() - 1) {
    for (int j = q; j < r.size(); j++) {
      if (r[j] == 1) {
        cout << "NO" << endl;
        return;
      }
    }
    cout<<"YES"<<endl;
  } else {
    cout << "YES" << endl;
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    s();
  }
  return 0;
}