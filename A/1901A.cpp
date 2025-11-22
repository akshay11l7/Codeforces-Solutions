#include <bits/stdc++.h>
using namespace std;
void s() {
  int n, x;
  cin >> n >> x;
  vector<int> g;
  while (n--) {
    int st;
    cin >> st;
    g.push_back(st);
  }
  int md=g[0];
  for (int i = 0; i < g.size()-1; i++)
  {
    int d=g[i+1]-g[i];
    md=max(md,d);
  }
  cout<<max(md,2*(x-g[g.size()-1]))<<endl;
}
int main() {
  int t;
  cin>>t;
  while (t--) {
    s();
  }
  return 0;
}