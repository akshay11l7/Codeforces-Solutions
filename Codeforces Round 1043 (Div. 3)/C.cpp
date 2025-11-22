#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll calc(ll x){
    ll val=pow(3,x+1)+x*pow(3,x-1);
    return val;
}
void solve(){
    ll n;
    cin>>n;
    ll x,ans=0;
    while (n>0)
    {
        x=log(n)/log(3);
        if(pow(3,x+1)==n){
            x=x+1;
        }
        ans+=calc(x);
        x=pow(3,x);
        n=n-x;
    }
    cout<<ans<<endl;  
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}