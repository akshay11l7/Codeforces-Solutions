#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag=false;
        int l=a[0]-1,r=a[0]+1;
        int i=1;
        while(i<n){
            if(a[i]==l){
                l=a[i]-1;
            }
            else if(a[i]==r){
                r=a[i]+1;
            }
            else{
                flag=true;
                break;
            }
            i++;
        }
        if(flag){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}