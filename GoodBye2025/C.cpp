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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f=0,s=1,x=0;
        while(s<n){
            if(x+a[f]>=x-a[s]){
                x=x+a[f];
                f=s;
                s++;
            }
            else{
                x=x-a[s];
                s++;
            }
        }
        cout<<x<<"\n";
    }
    return 0;
}