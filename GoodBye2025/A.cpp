#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='Y') c++;
        if(c>=2){
            break;
        }
    }
    if(c>=2) cout<<"NO\n";
    else cout<<"YES\n";
    }
    return 0;
}