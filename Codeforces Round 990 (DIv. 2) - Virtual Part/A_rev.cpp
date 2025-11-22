#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> pref;
        int val=0;
        for(int i=0;i<n;i++){
            val+=a[i];
            pref.push_back(val);
        }
        int ans=0;
        int j=1;
        for(int i=0;i<n;i++){
            while(j*j<pref[i]){
                j+=2;
            }
            if(j*j==pref[i]){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}