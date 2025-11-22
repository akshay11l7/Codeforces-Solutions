#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    vector<long long> ans;
    long long p=10;
    for(int i=0;i<=18;i++){
        long long d=p+1;
        if(d>n) break;
        if(n%d==0){
            ans.push_back(n/d);
        }
        p*=10;
    }
    if(ans.empty()){
        cout<<0<<endl;
    }else{
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }

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