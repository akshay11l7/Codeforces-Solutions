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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(),a.end());
    bool flag = false;
    for(int i=0;i<n-1;i++){ //1 1 1 5 5
        if(i%2==1){
            if(a[i]!=a[i+1]){
                flag=true;
            }
        }
    }
    if(flag) cout<<"NO\n";
    else cout<<"YES\n";
  }
  return 0;
}

