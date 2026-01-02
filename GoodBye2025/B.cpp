#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string r;
        cin>>r;
        int a=0;
        if(r[0]=='u') {
            a++;
            r[0]='s';
        }
        if(r[r.size()-1]=='u') {
            a++;
            r[r.size()-1]='s';
        }

        for(int i=1;i<r.size()-1;i++){
            if(r[i]=='s') continue;
            else{
                if(r[i-1]=='s' && r[i+1]=='s'){
                    continue;
                }
                else{
                    if(r[i+1]!='s'){
                        a++;
                        r[i+1]='s';
                    }
                }
            }
        }
        cout<<a<<"\n";
    }
    return 0;
}