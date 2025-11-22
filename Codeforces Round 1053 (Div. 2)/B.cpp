#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    vector<bool> strip(n+m+5,false);
    string s;
    cin>>n>>m;
    cin>>s;
    while(m--){
        int temp;
        cin>>temp;
        strip[temp]=true;
    }
    int p=2;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B'){
            while(strip[p]){
                p++;
            }
            strip[p]=true;
        }else{
            strip[p]=true;
            
        }
    }
    vector<int>ans;
    for(int i=1;i<strip.size();i++){
        if(strip[i]){
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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