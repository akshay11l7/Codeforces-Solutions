#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        vector<string> c(n);
        for(int i=0;i<n;i++){
            cin>>c[i];
        }

        string name="vika";
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(c[j][i]==name[k]){
                    k++;
                    break;
                }
            }
        }
        if(k==4){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}