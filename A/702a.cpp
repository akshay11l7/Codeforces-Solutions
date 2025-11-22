#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=1,count=1;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            count++;
        }
        else{
            ans=max(ans,count);
            count=1;
        }
    }
    ans=max(ans,count);
    cout<< ans;
    return 0;
}

