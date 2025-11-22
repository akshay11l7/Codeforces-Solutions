#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int t = n;
    int s = n/m;
    n = n-s*m;
    int cost = s*b + n*a;
    int ans = min(cost, (s+1)*b);
    ans = min(ans,t*a);
    cout<<ans;
    return 0;
}