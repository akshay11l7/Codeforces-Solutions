#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int l=-1,h=-1;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                l=i;
            }
            if(a[i]==n){
                h=i;
            }
        }
        int ans=INT_MAX;
        ans=min(ans,l+1+n-h);
        ans=min(ans,n-l+h+1);
        ans=min(ans,max(h+1,l+1));
        ans=min(ans,max(n-h,n-l));
        cout<<ans<<"\n";
    }
    return 0;
}

// 8
// 4 2 3 1 8 6 7 5

// 8
// 2 8 3 4 5 6 1 7
// cases:
// - both min from starting 
// - both min from ending
// - one from left one right
// - one from right oen left