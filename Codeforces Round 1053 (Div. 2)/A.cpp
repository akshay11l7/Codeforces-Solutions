#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n,m;
    cin>>n>>m;
    int a,b,nums;
    for(int i=0;i<m;i++){
        cin>>nums;
        if(i==0){
            a=nums;
        }
        if(i==1){
            b=nums;
        }
    }
    if(a==1 && b!=1){
        return n-m+1;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    int ans;
    while(t--){
        ans=solve();
        cout<<ans<<endl;
    }
    return 0;
}