#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int y=n%2020;
        int x=((n-y)/2020 - y);
        if(x>=0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
//n=2020x+2021y
// (n-y)/2020 = x+y

