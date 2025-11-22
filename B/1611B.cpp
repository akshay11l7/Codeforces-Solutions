#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int a,b;
        cin>>a>>b;
        if(a==0 || b==0){
            cout<<0<<"\n";
            continue;
        }
        int sum=a+b;
        int ans=sum/4;
        if(a<ans){
            ans=a;
        }
        if(b<ans){
            ans=b;
        }
        cout<<ans<<"\n";
    }
    return 0;
}