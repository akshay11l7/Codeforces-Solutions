#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+5;
const int mod=1e9+7;
// 123 168 714 868 987
int lower(vector<int> a,int tar){
    int n=a.size();
    int l=0,h=n-1,ans=-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]<=tar){
            l=mid+1;
            ans=mid;
        }
        else{
            h=mid-1;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int q;
    cin>>q;
    vector<int> m(q);
    for(int i=0;i<q;i++) cin>>m[i];

    sort(a.begin(),a.end());
    for(int x: m){
        int i=lower(a,x);
        cout<<i+1<<"\n";
    }
    return 0;
}

