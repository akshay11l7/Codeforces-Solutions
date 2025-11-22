#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++){
            a[i]=a[i]%k;
            if(a[i]==0){
                a[i]=k;
            }
            vp.push_back({a[i],i});
        }

        sort(vp.begin(),vp.end(),[](auto &a, auto &b){
            if(a.first!=b.first){
                return a.first>b.first;
            }
            else{
                return a.second<b.second;
            }
        });

        for(auto x:vp){
            cout<<x.second+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}