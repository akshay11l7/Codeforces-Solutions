#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    string s;
    cin>>s;
    vector<int>mp(s.size(),0);
    for(int i=0;i<s.size();i++){
        if(s[i]=='Q'){
            mp[i]=1;
        }
    }
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            ans+=count(mp.begin(),mp.begin()+i,1)*count(mp.begin()+i+1,mp.end(),1);
        }
    }
    cout<< ans;
    return 0;
}