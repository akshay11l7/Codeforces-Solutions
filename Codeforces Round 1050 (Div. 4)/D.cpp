#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    ll ans=0;
    cin>>n;
    vector<ll> odd;
    while (n--){
        int a;
        cin>>a;
        if(a%2==0){
            ans+=a;
        }
        else{
            odd.push_back(a);
        }
    }
    if(odd.size()>0){
        sort(odd.rbegin(),odd.rend());
        int len=(odd.size()-1)/2;
        for(int i=0;i<=len;i++){
            ans+=odd[i];
        }
        cout<<ans;
    }
    else{
        cout<<0;
    }
    cout<<endl;
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