#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int a,b,n;
        cin>>a>>b>>n;
        if(a>=n && min(b,a/n)==b){
            cout<<"1\n";
            continue;
        }
        else{\
            if(b==a){
                cout<<"1\n";
                continue;
            }
            cout<<"2\n";
        }
    }
    return 0;
}
// 8 1 6
// 9 6 2