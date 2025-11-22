#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    vector<int> c(n); 
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    int sum=0,ans=0;
    for(int i=0;i<n;i++){
        if(c[i]<0){
            if(sum>0){
                sum--;
            }
            else{
                ans++;
            }
        }
        if(c[i]>0){
            sum+=c[i];
        }
    }
    cout<<ans;
    return 0;
}