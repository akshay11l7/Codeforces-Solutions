#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n,k;
    cin>>n>>k;
    int total=240-k;
    int ans=0,sum=0,i=1;
    while(sum<=total&&ans<=n){
        sum+=5*i;
        i++;
        ans++;
    }
    if(sum==total) cout<<ans<<endl;
    else cout<<ans-1<<endl;
    return 0;
}