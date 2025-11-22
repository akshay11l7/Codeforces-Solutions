#include <bits/stdc++.h>
using namespace std;
void s() {
  int n;
  cin>>n;
  int a[n];
  a[0] = 1;
  a[n - 1] = 2;
  for (int i = 1; i < n - 1; i++) {
    a[i] = i + 2;
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] <<" ";
  }
  cout<<endl;
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