#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> mp;
    for(int i=0;i<n;i++){
        if(s[i]=='8'){
            mp.push_back(i);
        }
    }
    if(mp.size()<=(n-11)/2){
        cout<<"NO\n";
        return 0;
    }

    int i=mp[(n-11)/2];
    i-=(n-11);
    if(i<=0) cout<<"YES\n";
    else{
        cout<<"NO\n";
    }
    return 0;
}
