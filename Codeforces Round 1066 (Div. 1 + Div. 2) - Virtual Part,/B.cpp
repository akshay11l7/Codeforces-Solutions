#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='4'){
                a++; b++;
            }
            else{
                a++;
                b+=2;
            }
        }

        x=abs(x);
        y=abs(y);
        if(x+y<=b && x<=a &&y<=a){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
    return 0;
}

