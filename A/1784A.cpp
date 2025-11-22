#include <bits/stdc++.h>
using namespace std;
#define int long long
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> h(n);
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        sort(h.begin(),h.end());
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=h[i]-(i+1);
        }
    }
    return 0;
}