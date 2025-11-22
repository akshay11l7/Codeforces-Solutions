#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==1){
        cout<<1;
        return 0;
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i-1;j>=0;j--){
            if(a[j]<=a[j+1]) count++;
            else break; 
        }

        for(int j=i+1;j<n;j++){
            if(a[j]<=a[j-1]) count++;
            else break;
        }
        ans=max(ans,count);
    }
    cout<<ans;
    return 0;
}
