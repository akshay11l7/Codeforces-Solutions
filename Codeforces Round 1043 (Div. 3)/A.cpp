#include <bits/stdc++.h>
using namespace std;
string solve(){
    int n,m;
    string a,b,c;
    cin>>n>>a>>m>>b>>c;
    for(int i=0;i<m;i++){
        if(c[i]=='D'){
            a.push_back(b[i]);
        }
        else{
            a=b[i]+a;
        }
    }
    cout<< a << endl;
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