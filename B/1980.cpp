#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n,f,k;
        cin>>n>>f>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int x=a[f-1];
        int freq=0;
        for(int i=0;i<n;i++){
            if(a[i]==x) freq++;
        }
        int count=0;
        sort(a.rbegin(),a.rend());
        for(int i=0;i<k;i++){
            if(a[i]==x){
                count++;
            }
        }
        if(count==0){
            cout<<"NO\n";
        }
        else if(count==freq){
            cout<<"YES\n";
        }
        else{
            cout<<"MAYBE\n";
        }
    }
    return 0;
}