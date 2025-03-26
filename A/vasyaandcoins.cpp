#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    if(a==0){
        cout<<1<<endl;
    }
    else
    {
        cout<<(b*2+a+1)<<endl;
    }
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}