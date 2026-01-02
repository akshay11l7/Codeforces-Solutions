#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF=1e9+5;
const int mod=1e9+7;

int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> a(n+1,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[x]++;
        }
        int ans=0;
        for(int i=0;i<=n;i++){
            if(a[i]==i) continue;
            else if(a[i]<i) ans+=a[i];
            else ans+=a[i]-i;
        }
        cout<<ans<<"\n";
    }
    return 0;
}