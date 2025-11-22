#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        vector<int> dist={a,b,c};
        int days=n/(a+b+c);
        n = n%(a+b+c);
        days*=3;
        for(int i=0;i<=2;i++){
            if(n>0){
                n=n-dist[i];
                days++;
            }
        }
        cout<<days<<"\n";
    }
    return 0;
}