#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve(){
    ll a,b,k;
    cin>>a>>b;
    ll sum=0;
    if(a%2==0&&b%2==0){
        k=b/2;
        sum=a*k+2;
    }
    else if(a%2==0&&b%2!=0){
        sum=-1;
    }
    else if(a%2!=0&&b%2!=0){
        k=b;
        sum=a*b+1;
    }
    else
    {
        k=b/2;
        if(k%2==0){
            sum=a*k+2;
        }
        else{
            sum=-1;
        }
    }
    cout<<sum<<endl;
    
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