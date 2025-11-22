#include <bits/stdc++.h>
using namespace std;
void solve() {
  int a[3];
  for (int i = 0; i < 3; i++) {
    cin >> a[i];
  }
  sort(a, a + 3);
  if (a[0] == a[1] && a[1] == a[2] && a[0] % 2 == 0)
    cout << "yes" << endl;
  else if (a[0] != a[1] && a[1] != a[2] && a[2] == a[1] + a[0])
    cout << "yes" << endl;
  else if (a[0] == a[1] && a[2] % 2 == 0)
    cout << "yes" << endl;
  else if (a[1] == a[2] && a[0] % 2 == 0)
    cout << "yes" << endl;
  else
    cout << "no" << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}