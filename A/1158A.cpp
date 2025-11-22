#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF=1e9+5;
const int mod=1e9+7;

int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n,m;
    vector<int> b(n),g(m);
    for(int i=0;i<n;i++) cin>>b[i];
    for(int j=0;j<m;j++) cin>>g[j];

    int p=0,q=0;
    int ans=0;
    while(p<=n){
        int count=1;
        int sum=b[p];
        if(count==m){
            p++;
        }
        if(b[p]<g[q]){
            sum+=g[q];
            q++;
        }
        else{
            
        }
    }
    return 0;
}