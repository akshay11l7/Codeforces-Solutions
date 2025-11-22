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
        string s;
        cin>>s;
        char c=s[n-1];
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                count++;
            }
        }

        cout<<n-count<<"\n";
    }
    return 0;
}