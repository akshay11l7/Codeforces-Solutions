#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve(){
    ll n,m;
    cin>>n>>m;
    int a=0,b=0;
    int ans=0;
    while (n--)
    {
        int next_a,next_b;
        cin>>next_a>>next_b;
        int diff=next_a-a;
        if(diff%2!=0){
            if (b==next_b) ans+=diff-1;
            else ans+=diff;
        }
        else{
            if(b==next_b) ans+=diff;
            else ans+=diff-1;
        }
        a=next_a;
        b=next_b;
    }
    cout<<ans+m-a<<endl;
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