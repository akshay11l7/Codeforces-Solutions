#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> last={-1,-1,-1,-1};
        int ans=INF;
        for(int i=0;i<s.size();i++){
            int d=s[i]-'0';
            last[d]=i;
            if(last[1]!=-1 && last[2]!=-1 && last[3]!=-1){
                int mn=min(last[1],min(last[2],last[3]));
                int len=i-mn+1;
                ans=min(ans,len);
            }
        }
        if(ans==INF) cout<<0<<"\n";
        else cout<<ans<<"\n";
    }

    return 0;
}

