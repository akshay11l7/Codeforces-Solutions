#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  vector<int> nums(n);
  set<int> s;

  for (int i = 0; i < n; i++) {
    s.insert(i + 1);
  }

  for (auto &x : nums) {
    cin >> x;
    if (x)
      s.erase(x);
  }

  for(auto &x:nums){
    if(!x){
        auto it=s.end();
        it--;
        x=*it;
        s.erase(it);
    }
  }

  int l=n+1,r=n;
  for(int i=0;i<n;i++){
    if(nums[i]!=i+1){
        r=i;
        l=min(l,i);
    }
  }
  cout<<r-l+1<<endl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}